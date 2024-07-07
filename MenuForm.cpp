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

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}

	std::ofstream file1("my_file.txt");
	if (file1.is_open()) {
		file1.close();
	}
	else {

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}
}

System::Void PRAXISPRAXIS::MenuForm::button_uk_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����
}

System::Void PRAXISPRAXIS::MenuForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������ � �������","�������!");
}

System::Void PRAXISPRAXIS::MenuForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	EingGame^ form = gcnew EingGame();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����
}

System::Void PRAXISPRAXIS::MenuForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	

	MessageBox::Show("�������: ������ ��������� � ������� � ������ ����, ����� �������� ������. ����������: W-����� A-���� S-��� D-�����", "�������!");

}
