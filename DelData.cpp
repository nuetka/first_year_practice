#include "DelData.h"
#include "MyForm1.h"
#include <fstream>
#include "Header.h"

System::Void PRAXISPRAXIS::DelData::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form = gcnew MyForm1();

	this->Hide();
	form->Show();
}

System::Void PRAXISPRAXIS::DelData::DelData_Shown(System::Object^ sender, System::EventArgs^ e)
{

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




	DataGridViewCheckBoxColumn^ column = gcnew DataGridViewCheckBoxColumn();
	// устанавливаем заголовок для столбца
	//column->Name = "Checked";
	column->HeaderText = "Выбрать";
	// добавляем столбец в DataGridView
	column->Width = 100;
	dataGridView->Columns->Add(column);//Insert(0, column);


	dataGridView->Columns[0]->ReadOnly = false;

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


	//MyForm^ main = dynamic_cast<MyForm^>(Owner);
	String^ filename = label1->Text->ToString();

	//std::string fname;
	Convert_String_to_string(filename, fname);

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

		dataGridView->Rows[i]->Cells[1]->Value = Convert_string_to_String(s);
		dataGridView->Rows[i]->Cells[2]->Value = Convert_string_to_String(hn);
		dataGridView->Rows[i]->Cells[3]->Value = Convert_string_to_String(y);
		dataGridView->Rows[i]->Cells[4]->Value = Convert_string_to_String(fn);
		dataGridView->Rows[i]->Cells[5]->Value = Convert_string_to_String(an);
		dataGridView->Rows[i]->Cells[6]->Value = Convert_string_to_String(la);
		dataGridView->Rows[i]->Cells[7]->Value = Convert_string_to_String(ta);

		dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		i++;


	}

}

System::Void PRAXISPRAXIS::DelData::CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	
	if (e->ColumnIndex == 0) {
		// изменяем значение галочки на против выбранной строки
		dataGridView->Rows[e->RowIndex]->Cells[0]->Value = !(bool)dataGridView->Rows[e->RowIndex]->Cells[0]->Value;
	}
}

System::Void PRAXISPRAXIS::DelData::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	int i_del = 0;
	bool first = true;
	for (int j = i-1; j>=0; j--) {
		bool isChecked = Convert::ToBoolean(dataGridView->Rows[j]->Cells[0]->Value);
		if (isChecked){//(bool)dataGridView->Rows[j]->Cells[0]->Value) {
			if (first) {
				if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("Вы уверены, что хотите удалить выбранные строки?", "Внимание!", MessageBoxButtons::OKCancel)) {

					return System::Void();
				}
				first = false;
			}
			//dataGridView->Rows->Remove(dataGridView->Rows[j]);
			dataGridView->Rows->RemoveAt(j);
			i_del += 1;
		}
	}
    

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

	for (int row = 0; row < i-i_del; row++)
	{
		for (int col = 1; col < 8; col++)
		{
			if (dataGridView->Rows[row]->Cells[col]->Value != nullptr) {

				String^ value = dataGridView->Rows[row]->Cells[col]->Value->ToString();

				Convert_String_to_string(value, s);
				outputFile << s << '$';
			}
		}
	}

	outputFile.close();
	
}
