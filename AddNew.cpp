#include "AddNew.h"
#include "MyForm1.h"
#include <iomanip>
#include <fstream>
#include "Header.h"

//#include <locale>

System::Void PRAXISPRAXIS::AddNew::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	std::ofstream file("admin.txt");
	if (file.is_open()) {
		int num = 0;
		file << num;
		file.close();
	}
	else {

		MessageBox::Show("Неудалось открыть файл admin.txt!", "Ошибка!");

	}

	std::ofstream file1("admin.txt");
	if (file1.is_open()) {
		file1.close();
	}
	else {

		MessageBox::Show("Неудалось открыть файл admin.txt!", "Ошибка!");

	}
}

System::Void PRAXISPRAXIS::AddNew::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form = gcnew MyForm1();//создание 
	this->Hide();//закрытие
	form->textBoxAdmin->Text = this->label6->Text;//->ToString();
	form->textBoxAdmin->BackColor == System::Drawing::Color::Green;


	form->Show();
}

System::Void PRAXISPRAXIS::AddNew::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	


	//static bool count = false, count1 = false;
	int check = 0, checkColor = 0;


	String^ text1 = textBox_street->Text->ToString();
	std::string text;
	Convert_String_to_string(text1, text);

	if (!((text[0] >= 'A' && text[0] <= 'Z') || (text[0] >= 'А' && text[0] <= 'Я') || text[0] == 'Ё' || (text[0] >= '0' && text[0] <= '9'))) {
		check = 1; //ошибка
	}
	if (text.length() > 20) {
		check = 1;
	}
	if (text.length() > 1) {
		for (int i = 1; i < text.length(); i++) {
			if (text[i] == ' ' || (text[i] >= '0' && text[i] <= '9') || text[i] == '-' || (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'а' && text[i] <= 'я') || text[i] == 'ё') {
				continue;
			}
			else {
				check = 1;
				break;
			}
		}
	}
	if (check != 0) {
		this->textBox_street->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->textBox_street->BackColor = System::Drawing::Color::White;
	}

	int hn, fn, an;
	double la, ta;
	hn = Convert::ToInt32(numericUpDown_house_number->Value);
	fn = Convert::ToInt32(numericUpDown_floor_number->Value);
	an = Convert::ToInt32(numericUpDown_apartment_number->Value);
	la = Convert::ToDouble(numericUpDown_living_area->Value);
	ta = Convert::ToDouble(numericUpDown_total_area->Value);

	if (hn == 0) {
		this->numericUpDown_house_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->numericUpDown_house_number->BackColor = System::Drawing::Color::White;
	}

	if (fn == 0) {
		this->numericUpDown_floor_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->numericUpDown_floor_number->BackColor = System::Drawing::Color::White;
	}

	if (an == 0) {
		this->numericUpDown_apartment_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->numericUpDown_apartment_number->BackColor = System::Drawing::Color::White;
	}

	if (la == 0.0) {
		this->numericUpDown_living_area->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->numericUpDown_living_area->BackColor = System::Drawing::Color::White;
	}

	if (ta == 0.0) {
		this->numericUpDown_total_area->BackColor = System::Drawing::Color::Red; checkColor = 1;
	}
	else {
		this->numericUpDown_total_area->BackColor = System::Drawing::Color::White;
	}

	int y = Convert::ToDouble(numericUpDown_year_of_commissioning->Value);


	

	if (checkColor != 0) {
		return; 
	}

	MyForm1^ main = dynamic_cast<MyForm1^>(Owner);

	String^ filename = main->textBoxAdmin->Text->ToString();
	std::string fname;
	Convert_String_to_string(filename, fname);

	std::ofstream outputFile;

	outputFile.open(fname.c_str(), std::ios::out | std::ios::app);

	if (!outputFile.is_open()) {
		MessageBox::Show("Неудаётся открыть файл для записи!", "Ошибка!");
		return;
	}

	

	outputFile << text << '$'; //<< std::left << std::setw(20) << std::setfill(' ') << text<<'$';
	outputFile << hn << '$';//<< std::right << std::setw(9) << std::setfill(' ') << hn << '$';
	outputFile << y << '$'; //<< std::right << std::setw(5) << std::setfill(' ') << y << '$';
	outputFile << fn << '$';// << std::right << std::setw(14) << std::setfill(' ') << fn << '$';
	outputFile << an << '$';//<< std::right << std::setw(15) << std::setfill(' ') << an << '$';
	outputFile << la << '$'; //<< std::right << std::setw(12) << std::setprecision(2) << std::fixed << la << '$';
	outputFile << ta << '$';// << std::right << std::setw(12) << std::setprecision(2) << std::fixed << ta << '$';//std::endl;

	outputFile.close();



	textBox_street->Text = "";
	numericUpDown_house_number->Value = 0;
	numericUpDown_floor_number->Value = 0;
	numericUpDown_apartment_number->Value = 0;
	numericUpDown_living_area->Value = 0;
	numericUpDown_total_area->Value = 0;
	numericUpDown_year_of_commissioning->Value = 2023;

	numericUpDown_house_number->BackColor = System::Drawing::Color::White;
	textBox_street->BackColor = System::Drawing::Color::White;
	numericUpDown_floor_number->BackColor = System::Drawing::Color::White;
	numericUpDown_apartment_number->BackColor = System::Drawing::Color::White;
	numericUpDown_living_area->BackColor = System::Drawing::Color::White;
	numericUpDown_total_area->BackColor = System::Drawing::Color::White;
	numericUpDown_year_of_commissioning->BackColor = System::Drawing::Color::White;
	



}

System::Void PRAXISPRAXIS::AddNew::AddNew_Shown(System::Object^ sender, System::EventArgs^ e)
{

	std::string si;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}

	(std::getline(file1, si, '$'));
		this->label6->Text = Convert_string_to_String(si);
	
	file1.close();
}
