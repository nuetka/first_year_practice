#include "MyForm1.h"
#include "MyForm.h"
#include "AddForm.h"
#include "DelForm.h"
#include "AddNew.h"
#include <fstream>
#include "Header.h"
#include "CorrectForm.h"
#include "DelData.h"

System::Void PRAXISPRAXIS::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)
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
}

System::Void PRAXISPRAXIS::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();//создание 
	this->Hide();//закрытие

	form->Show();//открытие новой
}

System::Void PRAXISPRAXIS::MyForm1::textBoxAdmin_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	std::string fname;
	bool f = false;
	String^ filename = textBoxAdmin->Text->ToString();
	String^ forbidden = " ~#%&*{}:<>?/+|";
	if (!(filename->EndsWith(".txt") && (filename->CompareTo("-.txt")) && (filename->IndexOfAny(forbidden->ToCharArray()) == -1))) {
		f = true;
		//this->textBox1->BackColor = System::Drawing::Color::Green;
	}
	else {
		Convert_String_to_string(filename, fname);
		std::ifstream file(fname.c_str()); // попытка открыть файл
		if (!file) {
			// файл существует
			MessageBox::Show("Файл с таким именем ещё не существует!", "Ошибка!");
			file.close();
			f = true;
			
		}
	}
	if (!f) {
		this->textBoxAdmin->BackColor = System::Drawing::Color::Green;
		//std::string fname;
		std::ofstream file("my_file.txt");
		if (file.is_open()) {
			file << fname << '$';
			file.close();
		}
		else {
			MessageBox::Show("Неудалось открыть файл admin.txt!", "Ошибка!");
		}
	}
	else {
		this->textBoxAdmin->BackColor = System::Drawing::Color::White;
	}

	
}

System::Void PRAXISPRAXIS::MyForm1::button7_Click(System::Object^ sender, System::EventArgs^ e)//ОТКРЫТИЕ ФОРМЫ ДЛЯ СОЗДАНИЕ НОВОГО И ЗАПОЛНЕНИЕ
{
	AddForm^ form = gcnew AddForm();//создание 
	this->Hide();//закрытие
	form->Show();//открытие новой

}

System::Void PRAXISPRAXIS::MyForm1::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("Необходимо ввести существующий и корректный файл!", "Ошибка!");
	}
	else {
		DelForm^ form = gcnew DelForm();//создание 
		//this->Hide();//закрытие
		//form->Owner = this;
		form->ShowDialog();
		
	}

	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}

	if (std::getline(file1, fname, '$')) {
		this->textBoxAdmin->Text = Convert_string_to_String(fname);
	}
	else {
		this->textBoxAdmin->Text = " ";
	}
	file1.close();



}

System::Void PRAXISPRAXIS::MyForm1::btn_add_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("Необходимо ввести существующий и корректный файл!", "Ошибка!");
	}
	else {
		AddNew^ form = gcnew AddNew();//создание 
		this->Hide();//закрытие
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::btn_correct_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("Необходимо ввести существующий и корректный файл!", "Ошибка!");
	}
	else {
		CorrectForm^ form = gcnew CorrectForm();//создание 
		this->Hide();//закрытие
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("Необходимо ввести существующий и корректный файл!", "Ошибка!");
	}
	else {
		DelData^ form = gcnew DelData();//создание 
		//form->Owner = this;
		//form->label1->Text = this->textBoxAdmin->Text;//->ToString();
		this->Hide();//закрытие
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::MyForm1_Shown(System::Object^ sender, System::EventArgs^ e)
{
	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}

	if (std::getline(file1, fname, '$')) {
		this->textBoxAdmin->Text = Convert_string_to_String(fname);
		this->textBoxAdmin->BackColor == System::Drawing::Color::White;
	}
	file1.close();
}
