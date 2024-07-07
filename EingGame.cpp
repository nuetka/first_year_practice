#include "EingGame.h"
#include "MenuForm.h"
#include "Header.h"
#include <fstream>
#include "GameForm.h"

System::Void PRAXISPRAXIS::EingGame::button1_Click(System::Object^ sender, System::EventArgs^ e)
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

	std::ofstream file1("admin.txt");
	if (file1.is_open()) {
		int num = 0;
		file1 << num;
		file1.close();
	}
	else {

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}

}

System::Void PRAXISPRAXIS::EingGame::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	MenuForm^ form = gcnew MenuForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����
}

System::Void PRAXISPRAXIS::EingGame::button4_Click(System::Object^ sender, System::EventArgs^ e)//����� ����
{
	std::ofstream file("snake_game.txt", std::ofstream::out | std::ofstream::trunc);
	file.close();



	std::ofstream outputFile;
	outputFile.open("snake_game.txt", std::ios::out | std::ios::app);

	if (!outputFile.is_open()) {
		MessageBox::Show("�������� ������� ���� ��� ������!", "������!");
		return;
	}


	
	outputFile << '1' << '$';
			

	outputFile.close();


	GameForm^ form = gcnew GameForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����

	
}

System::Void PRAXISPRAXIS::EingGame::button3_Click(System::Object^ sender, System::EventArgs^ e)//����������
{

	GameForm^ form = gcnew GameForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����

}
