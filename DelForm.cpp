#pragma once
#include "MyForm1.h"
//#include <cstdio>
#include "DelForm.h"
#include "Header.h"
#include "MyForm1.h"
#include <fstream>
System::Void PRAXISPRAXIS::DelForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//MyForm1^ main = dynamic_cast<MyForm1^>(Owner);

	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("���� �� ������ ��� ������!", "������!");
		return;
	}

	std::getline(file1, fname, '$');
		//this->label1->Text = Convert_string_to_String(fname);
	
	file1.close();


	if (std::remove(fname.c_str()) != 0) { MessageBox::Show("�������� �������!", "������!"); }
	else {
		MessageBox::Show("���� ������� �����!", "��!"); 
		{
			
			std::ofstream file("my_file.txt");
			if (file.is_open()) {
				file.close();
			}
			else {
				MessageBox::Show("�� ������� �������� ���� my_file.txt!", "������!");
			}

		}
	}
	this->Hide();
}

