#pragma once
#include <fstream>
#include <iostream>
#include "AddForm.h"
#include "MyForm1.h"
#include <iomanip>
#include "Header.h"


System::Void PRAXISPRAXIS::AddForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form = gcnew MyForm1();
	this->Hide();
	form->Show();
}

System::Void PRAXISPRAXIS::AddForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
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

	std::ofstream file1("my_file.txt");
	if (file1.is_open()) {
		file1.close();
	}
	else {

		MessageBox::Show("Неудалось открыть файл admin.txt!", "Ошибка!");

	}
}


//сохранить
System::Void PRAXISPRAXIS::AddForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	static bool count = false, count1=false;
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

	bool feh = false;
	String^ filename = textBox1->Text->ToString();
	std::string fname;
	Convert_String_to_string(filename, fname);
	if (!count) {
		std::ifstream file(fname.c_str()); // попытка открыть файл
		if (file) {
			// файл существует
			MessageBox::Show("Файл с таким именем уже существует!", "Ошибка!");
			file.close(); 
			checkColor = 1;
			//this->textBox1->BackColor = System::Drawing::Color::Red;
			feh = true;
		}

		String^ forbidden = " ~#%&*{}:<>?/+|";
		if (!(filename->EndsWith(".txt") && (filename->CompareTo("-.txt")) && (filename->IndexOfAny(forbidden->ToCharArray()) == -1))) {
			//this->textBox1->BackColor = System::Drawing::Color::Red;
			feh = true;
			checkColor = 1;
			MessageBox::Show("Недопустимое название файла!", "Ошибка!");
		}
		count1 = true;
	}

	if (feh) {
		this->textBox1->BackColor = System::Drawing::Color::Red;
	}
	else {
		this->textBox1->BackColor = System::Drawing::Color::White;
	}


	if (checkColor == 0) {
		

		if (!feh) {
			this->textBox1->BackColor = System::Drawing::Color::Green;
			std::ofstream file("my_file.txt");
			if (file.is_open()) {
				file << fname << '$';
				file.close();
			}
			else {
				MessageBox::Show("Неудалось открыть файл admin.txt!", "Ошибка!");
			}
		}

		std::ofstream outputFile;
	
			outputFile.open(fname.c_str(), std::ios::out | std::ios::app);

			if (!outputFile.is_open()) {
				MessageBox::Show("Неудаётся открыть файл для записи!", "Ошибка!");
				return;
			}
			
		outputFile << text << '$'; 
		outputFile << hn << '$';
		outputFile << y << '$'; 
		outputFile << fn << '$';
		outputFile << an << '$';
		outputFile << la << '$'; 
		outputFile << ta << '$';

		outputFile.close();


		if (!count) {
			textBox1->ReadOnly = true;
			label6->Text = "ПРОДОЛЖЕНИЕ ВВОДА ДАННЫХ В ФАЙЛ";
			button3->Text = "СОХРАНИТЬ ДАННЫЕ";
			count = true;
		}
		

		textBox_street->Text = "";
		numericUpDown_house_number->Value = 0;
		numericUpDown_floor_number->Value= 0;
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
}



