#include "GameForm.h"
#include "Header.h"
#include <fstream>
#include "EingGame.h"

using namespace System; 
using namespace System::Windows::Forms;

//struct Vector2 {
//	int X, Y;
//};

struct Vector2 {
	int X, Y;
};

Vector2 direction;//����������� ������
Vector2 positionFruit;//������� ������
Vector2 gameArea;//������� ���� 

PRAXISPRAXIS::GameForm::GameForm(void)
{
	InitializeComponent();

	//������� ������� ����
	gameArea.X = 830;
	gameArea.Y = 350;


	std::ifstream file("snake_game.txt");
	std::string s;
	if (!file.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
		return;
	}
	
	std::getline(file, s, '$');

	if (std::stoi(s) == 1) {
		//firstLaunch = true;//������ ������
		//�������������� ������
		Serpens = gcnew array <PictureBox^, 1>(400);
		Serpens[0] = gcnew PictureBox();
		Serpens[0]->Location = Point(200, 200);
		Serpens[0]->BackColor = Color::Green;
		Serpens[0]->Width = step;
		Serpens[0]->Height = step;

		score = 0;
		this->Controls->Add(Serpens[0]);

		//�������������� �����
		fruit = gcnew PictureBox();
		fruit->BackColor = Color::Yellow;
		fruit->Width = step;
		fruit->Height = step;
		GeneratePositionFruit();

		//����� �������� ���������� � ��������� ������ ��� ���������� speed
		timer->Interval = updateInterval;
		timer->Start();

		//����� ����������� �� �������
		direction.X = 1;
		direction.Y = 0;

		//����� ������
		play = true;
		die = false;

		labelScore->Text = "����: 0";
		//�������� �������� ���������� �� �����
		labelGameOver->Visible = false;
		//groupBoxSettings->Visible = false;


		file.close();


	}
	else {
		Ccc();
	}
	//NewGame();//����� ����

}


System::Void PRAXISPRAXIS::GameForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "D") {
		direction.X = 1;
		direction.Y = 0;
	}else if (e->KeyCode.ToString() == "A") {
		direction.X = -1;
		direction.Y = 0;
	}else if (e->KeyCode.ToString() == "W") {
		direction.X = 0;
		direction.Y = -1;
	}else if (e->KeyCode.ToString() == "S") {
		direction.X = 0;
		direction.Y = 1;
	}

	return System::Void();



}

void PRAXISPRAXIS::GameForm::GameForm_Update(Object^ object, EventArgs^ e)
{
	if (!die && play) {
		Movement();
		Eating();
		EatYourself();
		CheckBorders();
	}
	else if (die && play) {
		timer->Stop();
		//MessageBox::Show("���� ��������!", "��������!");

	}
	else if (!play && !die) {
		timer->Stop();
		//MessageBox::Show("���� ��������������!", "��������!");
	}
}

System::Void PRAXISPRAXIS::GameForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();

	std::ofstream file("admin.txt");
	if (file.is_open()) {
		int num = 0;
		file << num;
		file.close();
	}
	else {

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}
}

System::Void PRAXISPRAXIS::GameForm::zur_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ofstream file("snake_game.txt", std::ofstream::out | std::ofstream::trunc);
	file.close();
	std::ofstream outputFile;
	outputFile.open("snake_game.txt", std::ios::out | std::ios::app);
	if (!outputFile.is_open()) {
		MessageBox::Show("�������� ������� ���� ��� ������!", "������!");
		return;
	}

	outputFile << 0 << '$';
	outputFile <<score << '$';
	outputFile << play << '$';
	outputFile << die << '$';
	outputFile << positionFruit.X << '$';
	outputFile << positionFruit.Y << '$';
	outputFile << direction.X << '$';
	outputFile << direction.Y << '$';

	for (int i = 0; i < score+1; i++) {
		outputFile << Serpens[i]->Location.X << '$';
		outputFile << Serpens[i]->Location.Y << '$';
	}



	outputFile.close();


	EingGame^ form = gcnew EingGame();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����
}

System::Void PRAXISPRAXIS::GameForm::pause_Click(System::Object^ sender, System::EventArgs^ e)
{
	

	if (play) {
		play = false;
	}
	else {

		play = true;
		timer->Start();

	}
	return System::Void();
}

System::Void PRAXISPRAXIS::GameForm::button2_Click(System::Object^ sender, System::EventArgs^ e)//NEW GEMA
{
	this->Controls->Remove(fruit);//������� �����

	for (int i = 0; i <= score; i++) {//� ������

		this->Controls->Remove(Serpens[i]);
	}
	score = 0;
	//�������������� ������
	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::Green;
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;
	this->Controls->Add(Serpens[0]);
	//�������������� �����
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Yellow;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//����� �������� ���������� � ��������� ������ ��� ���������� speed
	timer->Interval = updateInterval;
	timer->Start();

	//����� ����������� �� �������
	direction.X = 1;
	direction.Y = 0;

	//����� ������
	play = true;
	die = false;

	labelScore->Text = "����: 0";
	//�������� �������� ���������� �� �����
	labelGameOver->Visible = false;
	//groupBoxSettings->Visible = false;
}




void PRAXISPRAXIS::GameForm::GeneratePositionFruit()
{
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);//10-�������� ������������ ����� ����� 0+10- ��� ������� 
	positionFruit.Y = rand->Next(60, gameArea.Y);//90-�������� ������� ������� �������������� ����� �����

	//�������� ����� ����� �� �������� �� ������
	for (int i = 0; i < score; i++) {//�������� �� ���� ��������� ������
		if (positionFruit.X == Serpens[i]->Location.X &&
			positionFruit.Y == Serpens[i]->Location.Y)
			GeneratePositionFruit();//���������� �������
	}

	//����������� ������� ����� ���� ������ ����
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//����������� ������� ������ 
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//��������� ������ �� �����
	this->Controls->Add(fruit);

}

void PRAXISPRAXIS::GameForm::Eating()
{
	//��������� ������� ������ ���� � ������� ������
	if (Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y) {
		labelScore->Text = "����: " + ++score;

		//��������� ����� ������� ������
		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[score]->BackColor = Color::Red;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void PRAXISPRAXIS::GameForm::Movement()
{
	//������� ������ ��������� ������
	for (int i = score; i >= 1; i--) {
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + direction.X * step, Serpens[0]->Location.Y + direction.Y * step);//������ ������ ������� ���� ������� ����� ���
}

void PRAXISPRAXIS::GameForm::EatYourself()
{
	//��������� ������� ������ ����� ������
	for (int i = 1; i < score; i++) {
		if (Serpens[0]->Location == Serpens[i]->Location) {
			GameOver();
		}


	}
}

void PRAXISPRAXIS::GameForm::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}



void PRAXISPRAXIS::GameForm::CheckBorders()
{
	if (Serpens[0]->Location.X >= RightBorder->Location.X || Serpens[0]->Location.X <= LeftBorder->Location.X) {
		//direction.x *=-1;//���������� � �������� �����������
		GameOver();
	}

	if (Serpens[0]->Location.Y <= UpperBorder->Location.Y || Serpens[0]->Location.Y >= LowerBorder->Location.Y) {
		GameOver();
	}

	label1->Text = "���������� ������: (" + Convert::ToString(Serpens[0]->Location.X) + ", " + Convert::ToString(Serpens[0]->Location.Y) +")";
}


void PRAXISPRAXIS::GameForm::Ccc() {
	int a, b;
	std::ifstream file("snake_game.txt");
	std::string s;
	if (!file.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
		return;
	}

	std::getline(file, s, '$');
	//�������������� ������
	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->BackColor = Color::Green;
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;


	//�������������� �����
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Yellow;
	fruit->Width = step;
	fruit->Height = step;


	std::getline(file, s, '$');
	score = std::stoi(s);

	labelScore->Text = "����: " + score;

	std::getline(file, s, '$');
	play = std::stoi(s);

	std::getline(file, s, '$');
	if (die = std::stoi(s)) {
		labelGameOver->Visible = true;
	}
	else {
		labelGameOver->Visible = false;
	}

	std::getline(file, s, '$');
	a = std::stoi(s);

	std::getline(file, s, '$');
	b = std::stoi(s);

	fruit->Location = Point(a, b);
	this->Controls->Add(fruit);

	std::getline(file, s, '$');
	direction.X = std::stoi(s);

	std::getline(file, s, '$');
	direction.Y = std::stoi(s);


	std::getline(file, s, '$');
	a = std::stoi(s);
	std::getline(file, s, '$');
	b = std::stoi(s);

	Serpens[0]->Location = Point(a, b);

	this->Controls->Add(Serpens[0]);
	int i = 1;
	while (std::getline(file, s, '$')) {
		Serpens[i] = gcnew PictureBox();
		//Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[i]->BackColor = Color::Red;
		Serpens[i]->Width = step;
		Serpens[i]->Height = step;
		a = std::stoi(s);
		std::getline(file, s, '$');
		b = std::stoi(s);
		Serpens[i]->Location = Point(a, b);
		this->Controls->Add(Serpens[i]);
		i++;
	}
file.close();
timer->Interval = updateInterval;
timer->Start();
}