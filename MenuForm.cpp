#include "MenuForm.h"
#include "MyForm.h"
#include "EingGame.h"
#include <fstream>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PRAXISPRAXIS::MenuForm form;
	Application::Run(% form);
}

System::Void PRAXISPRAXIS::MenuForm::button_exit_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void PRAXISPRAXIS::MenuForm::button_uk_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();//создание 
	this->Hide();//закрытие
	form->Show();//открытие новой
}

System::Void PRAXISPRAXIS::MenuForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Работа с файлами","Справка!");
}

System::Void PRAXISPRAXIS::MenuForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	EingGame^ form = gcnew EingGame();//создание 
	this->Hide();//закрытие
	form->Show();//открытие новой
}

System::Void PRAXISPRAXIS::MenuForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	

	MessageBox::Show("Правила: нельзя врезаться в бордюры и самого себя, нужно соберать фрукты. Управление: W-вверх A-лево S-низ D-право", "Справка!");

}
