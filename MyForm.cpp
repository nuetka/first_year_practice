#include "MyForm.h"
#include "MenuForm.h"
#include "MyForm2.h"
#include <fstream>
#include "OutputForm.h"
#include "ReqForm.h"
#include "Header.h"
#include "MyForm1.h"

System::Void PRAXISPRAXIS::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
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
		file1.close();
	}
	else {

		MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

	}
}

System::Void PRAXISPRAXIS::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuForm^ form = gcnew MenuForm();//�������� 
	this->Hide();//��������
	form->Show();//�������� �����
}

System::Void PRAXISPRAXIS::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{


	MyForm1^ form = gcnew MyForm1();//�������� 
	
	this->Hide();

	form->Show();//�������� �����
	
}

System::Void PRAXISPRAXIS::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	std::string fname;
	bool f = false;
	String^ filename = textBox1->Text->ToString();
	String^ forbidden = " ~#%&*{}:<>?/+|";
	if (!(filename->EndsWith(".txt") && (filename->CompareTo("-.txt")) && (filename->IndexOfAny(forbidden->ToCharArray()) == -1))) {
		f = true;
		//this->textBox1->BackColor = System::Drawing::Color::Green;
	}
	else {
		//std::string fname;
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
		this->textBox1->BackColor = System::Drawing::Color::Green;

		std::ofstream file("my_file.txt");
		if (file.is_open()) {
			file <<fname<<'$';
			file.close();
		}
		else {
			MessageBox::Show("��������� ������� ���� admin.txt!", "������!");
		}
	}
	else {
		this->textBox1->BackColor = System::Drawing::Color::White;
	}
}

System::Void PRAXISPRAXIS::MyForm::btn_req_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox1->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {

		ReqForm^ form = gcnew ReqForm();//�������� 
		//form->Owner = this;
		this->Hide();//��������
		form->Show();//�������� �����

	}
}

System::Void PRAXISPRAXIS::MyForm::btn_output_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox1->BackColor == System::Drawing::Color::White) {
		MessageBox::Show("���������� ������ ������������ � ���������� ����!", "������!");
	}
	else {

		OutputForm^ form = gcnew OutputForm();//��������
		//form->Owner = this;
		this->Hide();//��������
		form->Show();//�������� �����
	}
}

System::Void PRAXISPRAXIS::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (button3->Text == "����� �� ������ ��������������") {

		button5->Visible = false;
		button3->Text = "���� � ����� ��������������";

		std::ofstream file("admin.txt"); 
		if (file.is_open()) { 
			int num = 0; 
			file << num; 
			file.close(); 
		}
		else{

			MessageBox::Show("��������� ������� ���� admin.txt!", "������!");

		}

	}
	else {

		MyForm2^ form = gcnew MyForm2();
	
		form->ShowDialog();
		
		std::ifstream file("admin.txt");
		int num;
		if (file.is_open()) {
			if (file >> num) {
				if (num == 1) {
					button5->Visible = true;
					button3->Text = "����� �� ������ ��������������";
				}

			}
			else {
				MessageBox::Show("��������� ������� �����!", "������!");
			}
			file.close();
		}
		else {
			MessageBox::Show("��������� ������� ���� admin.txt ��� ������!", "������!");
		}



	}

	
}

System::Void PRAXISPRAXIS::MyForm::MyForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	std::string si;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
		return;
	}
	
	if (std::getline(file1, si, '$')) {
		this->textBox1->Text = Convert_string_to_String(si);
	}
	file1.close();


	std::ifstream file("admin.txt");
	int num;
	if (file.is_open()) {
		if (file >> num) {
			if (num == 1) {
				button5->Visible = true;
				button3->Text = "����� �� ������ ��������������";
			}

		}
		else {
			MessageBox::Show("��������� ������� �����!", "������!");
		}
		file.close();
	}
	else {
		MessageBox::Show("��������� ������� ���� admin.txt ��� ������!", "������!");
	}

	return System::Void();
}

