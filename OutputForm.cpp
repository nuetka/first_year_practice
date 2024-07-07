#include "OutputForm.h"
#include "MyForm.h"
#include "Header.h"
#include "fstream"


System::Void PRAXISPRAXIS::OutputForm::OutputForm_Shown(System::Object^ sender, System::EventArgs^ e)
{


	Header();


	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}

	if (std::getline(file1, fname, '$')) {
		this->label1->Text = Convert_string_to_String(fname);
	}
	file1.close();

	std::ifstream file(fname);
	std::string s, hn, y, fn, an, la, ta;

	if (!file.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}
;

		// считываем строку длиной в 20 символов
	int i = 0;
	//dataGridView->Rows->Clear();
	while (std::getline(file, s, '$')) {
		getline(file, hn, '$');
		getline(file, y, '$');
		getline(file, fn, '$');
		getline(file, an, '$');
		getline(file, la, '$');
		getline(file, ta, '$');

		
		dataGridView->Rows->Add();
			
		dataGridView->Rows[i]->Cells[0]->Value = Convert_string_to_String(s);
		dataGridView->Rows[i]->Cells[1]->Value = Convert_string_to_String(hn);
		dataGridView->Rows[i]->Cells[2]->Value = Convert_string_to_String(y);
		dataGridView->Rows[i]->Cells[3]->Value = Convert_string_to_String(fn);
		dataGridView->Rows[i]->Cells[4]->Value = Convert_string_to_String(an);
		dataGridView->Rows[i]->Cells[5]->Value = Convert_string_to_String(la);
		dataGridView->Rows[i]->Cells[6]->Value = Convert_string_to_String(ta);

		dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		i++;


	}


}

void PRAXISPRAXIS::OutputForm::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Street";
	c1->HeaderText = "УЛИЦА";
	c1->Width = 100;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "House_number";
	c2->HeaderText = "НОМЕР";
	c2->Width = 100;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Year";
	c3->HeaderText = "ГОД СДАЧИ В ЭКСПЛУАТАЦИЮ";
	c3->Width = 100;
	dataGridView->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Floor";
	c4->HeaderText = "КОЛИЧЕСТВО ЭТАЖЕЙ";
	c4->Width = 100;
	dataGridView->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Apartment";
	c5->HeaderText = "КОЛИЧЕСТВО КВАРТИР";
	c5->Width = 100;
	dataGridView->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "living";
	c6->HeaderText = "ЖИЛАЯ ПЛОЩАДЬ";
	c6->Width = 100;
	dataGridView->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "Total";
	c7->HeaderText = "ОБЩАЯ ПЛОЩАДЬ";
	c7->Width = 100;
	dataGridView->Columns->Add(c7);

	dataGridView->TopLeftHeaderCell->Value = "№";
	dataGridView->AutoResizeColumns();
}




System::Void PRAXISPRAXIS::OutputForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();//создание 
	this->Hide();//закрытие
	form->Show();//открытие новой
}
