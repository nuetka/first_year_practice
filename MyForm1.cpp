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

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}
}

System::Void PRAXISPRAXIS::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();//�������� 
	this->Hide();//��������

	form->Show();//�������� �����
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
		std::ifstream file(fname.c_str()); // ������� ������� ����
		if (!file) {
			// ���� ����������
			MessageBox::Show("���� � ����� ������ ��� �� ����������!", "������!");
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
			MessageBox::Show("��������� ������� ���� admin.txt!", "������!");
		}
	}
	else {
		this->textBoxAdmin->BackColor = System::Drawing::Color::White;
	}

	
}

System::Void PRAXISPRAXIS::MyForm1::button7_Click(System::Object^ sender, System::EventArgs^ e)//�������� ����� ��� �������� ������ � ����������
{
	AddForm^ form = gcnew AddForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����

}

System::Void PRAXISPRAXIS::MyForm1::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {
		DelForm^ form = gcnew DelForm();//�������� 
		//this->Hide();//��������
		//form->Owner = this;
		form->ShowDialog();
		
	}

	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
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
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {
		AddNew^ form = gcnew AddNew();//�������� 
		this->Hide();//��������
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::btn_correct_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {
		CorrectForm^ form = gcnew CorrectForm();//�������� 
		this->Hide();//��������
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBoxAdmin->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {
		DelData^ form = gcnew DelData();//�������� 
		//form->Owner = this;
		//form->label1->Text = this->textBoxAdmin->Text;//->ToString();
		this->Hide();//��������
		form->Show();
	}
}

System::Void PRAXISPRAXIS::MyForm1::MyForm1_Shown(System::Object^ sender, System::EventArgs^ e)
{
	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
		return;
	}

	if (std::getline(file1, fname, '$')) {
		this->textBoxAdmin->Text = Convert_string_to_String(fname);
		this->textBoxAdmin->BackColor == System::Drawing::Color::White;
	}
	file1.close();
}
