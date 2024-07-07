#include "CorrectForm.h"
#include "MyForm1.h"
#include <fstream>
#include "Header.h"

System::Void PRAXISPRAXIS::CorrectForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form = gcnew MyForm1();

	this -> Hide();
	form->Show();
}

System::Void PRAXISPRAXIS::CorrectForm::CorrectForm_Shown(System::Object^ sender, System::EventArgs^ e)
{

	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}

	std::getline(file1, fname, '$');
	label1->Text = Convert_string_to_String(fname);
	
	file1.close();

	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Street";
	c1->HeaderText = "УЛИЦА";
	c1->Width = 100;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "House_number";
	c2->HeaderText = "НОМЕР";
	c2->Width = 100;
	//с2->CellTemplate->ValueType = System::Double::typeid;
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


	std::ifstream file(fname);
	std::string s, hn, y, fn, an, la, ta;

	//label1->Text = filename;

	if (!file.is_open()) {
		MessageBox::Show("Файл не открыт для чтения!", "Ошибка!");
		return;
	}


	i = 0;
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


System::Void PRAXISPRAXIS::CorrectForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool ok = true;
	for (int row = 0; row < i; row++)
	{
		for (int col = 0; col < 7; col++)
		{

			Object^ value = dataGridView->Rows[row]->Cells[col]->Value;

			if (value == nullptr)
			{
				ok = false;
				//String^ str = value->ToString();
				//обработка значений
				dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red;

			}
			else {
				dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
				String^ v;
				v = value->ToString();
				std::string text;
				Convert_String_to_string(v, text);
				double a = 1, b = 100;

				int check = 0;
				if (col == 0) {
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
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}




				}
				else if (col == 1) {
					
					if(check_int(text, 1 ,100)){
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
				else if (col == 2) {
					if (check_int(text, 1600, 2050)) {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
				else if (col == 3) {
					if (check_int(text, 1, 100)) {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
				else if (col == 4) {
					if (check_int(text, 1, 100)) {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
				else if (col == 5) {
					if (check_double(text, a, b)) {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
				else if (col == 6) {
					if (check_double(text, a, b)) {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::White;
					}
					else {
						dataGridView->Rows[row]->Cells[col]->Style->BackColor = Color::Red; ok = false;
					}
				}
			}
		}
	}

	if (!ok) {
		MessageBox::Show("Недопустимые значения!Данные не сохранены!", "Ошибка!");
	}
	else {
		String^ filename = label1->Text->ToString();
		std::string fname;
		Convert_String_to_string(filename, fname);
		
		std::ofstream filee(fname, std::ofstream::out | std::ofstream::trunc);
		filee.close();

		std::ofstream outputFile;
		outputFile.open(fname.c_str(), std::ios::out | std::ios::app);

		if (!outputFile.is_open()) {
			MessageBox::Show("Неудаётся открыть файл для записи!", "Ошибка!");
			return;
		}
		std::string s;

		for (int row = 0; row < i; row++)
		{
			for (int col = 0; col < 7; col++)
			{
				String^ value = dataGridView->Rows[row]->Cells[col]->Value->ToString();

				Convert_String_to_string(value, s);
				outputFile << s << '$';
			}
		}

		outputFile.close();

	}
}