#include "MyForm2.h"
#include "MyForm1.h"
#include "MyForm.h"
#include <fstream>

System::Void PRAXISPRAXIS::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBox1->Text->CompareTo("123"))) {
		
        MyForm^ form = gcnew MyForm;

        std::ofstream file("admin.txt"); 
        if (file.is_open()) { 
            int num = 1; 
            file << num; 
            file.close(); 

            this->Close();
           
        }
        else {
            MessageBox::Show("�� ������� ������� ���� admin.txt ��� ������!", "������!");
        }

		MessageBox::Show("�� ������� � ����� ��������������!", "��������!");
    }
	else {
		this->label1->Text = "�������� ������!";
	}
}
