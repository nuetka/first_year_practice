#include "ReqForm.h"
#include "MyForm.h"
#include "Header.h"
#include <fstream>

System::Void PRAXISPRAXIS::ReqForm::ReqForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	

	std::string si;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Ôàéë íå îòêðûò äëÿ ÷òåíèÿ!", "Îøèáêà!");
		return;
	}

	std::getline(file1, si, '$');
		this->label1->Text = Convert_string_to_String(si);
	
	file1.close();

}

System::Void PRAXISPRAXIS::ReqForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm;
	//form->textBox1->Text = label1->Text;

	this->Hide();
	form->Show();
}

System::Void PRAXISPRAXIS::ReqForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView->Rows->Clear();
	dataGridView->Columns->Clear();
	int check = 0, checkColor = 0;
	String^ text1 = textBox_street->Text->ToString();
	std::string text;
	Convert_String_to_string(text1, text);
	if (cB_street->Checked) {

		if (!((text[0] >= 'A' && text[0] <= 'Z') || (text[0] >= 'À' && text[0] <= 'ß') || text[0] == '¨' || (text[0] >= '0' && text[0] <= '9'))) {
			check = 1; //îøèáêà
		}
		if (text.length() > 20) {
			check = 1;
		}
		if (text.length() > 1) {
			for (int i = 1; i < text.length(); i++) {
				if (text[i] == ' ' || (text[i] >= '0' && text[i] <= '9') || text[i] == '-' || (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'à' && text[i] <= 'ÿ') || text[i] == '¸') {
					continue;
				}
				else {
					check = 1;
					break;
				}
			}
		}
		if (check != 0) {
			this->textBox_street->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->textBox_street->BackColor = System::Drawing::Color::White;
		}
	}
	int hn1, fn1, an1, y1;
	double la1, ta1;
	
	if (cB_hn->Checked) {
		hn1 = Convert::ToInt32(numericUpDown_house_number->Value);
		if (hn1 == 0) {
			this->numericUpDown_house_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->numericUpDown_house_number->BackColor = System::Drawing::Color::White;
		}
	}

	if (cB_f->Checked) {
		fn1 = Convert::ToInt32(numericUpDown_floor_number->Value);
		if (fn1 == 0) {
			this->numericUpDown_floor_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->numericUpDown_floor_number->BackColor = System::Drawing::Color::White;
		}
	}
	if (cB_a->Checked) {
		an1 = Convert::ToInt32(numericUpDown_apartment_number->Value);
		if (an1 == 0) {
			this->numericUpDown_apartment_number->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->numericUpDown_apartment_number->BackColor = System::Drawing::Color::White;
		}
	}
	if (cB_la->Checked) {
		la1 = Convert::ToDouble(numericUpDown_living_area->Value);
		if (la1 == 0.0) {
			this->numericUpDown_living_area->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->numericUpDown_living_area->BackColor = System::Drawing::Color::White;
		}
	}
	if (cB_ta->Checked) {
		ta1 = Convert::ToDouble(numericUpDown_total_area->Value);
		if (ta1 == 0.0) {
			this->numericUpDown_total_area->BackColor = System::Drawing::Color::Red; checkColor = 1;
		}
		else {
			this->numericUpDown_total_area->BackColor = System::Drawing::Color::White;
		}
	}
	if (cB_y->Checked) {
		y1 = Convert::ToDouble(numericUpDown_year_of_commissioning->Value);
	}

	if (checkColor != 0) {
		return;
	}

	std::string fname;
	std::ifstream file1("my_file.txt");

	if (!file1.is_open()) {
		MessageBox::Show("Ôàéë íå îòêðûò äëÿ ÷òåíèÿ!", "Îøèáêà!");
		return;
	}

	std::getline(file1, fname, '$');
		//this->label1->Text = Convert_string_to_String(fname);
	
	file1.close();


	std::ifstream file(fname);
	std::string s, hn, y, fn, an, la, ta;

	//label1->Text = filename;

	if (!file.is_open()) {
		MessageBox::Show("Ôàéë íå îòêðûò äëÿ ÷òåíèÿ!", "Îøèáêà!");
		return;
	}


	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Street";
	c1->HeaderText = "ÓËÈÖÀ";
	c1->Width = 100;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "House_number";
	c2->HeaderText = "ÍÎÌÅÐ";
	c2->Width = 100;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Year";
	c3->HeaderText = "ÃÎÄ ÑÄÀ×È Â ÝÊÑÏËÓÀÒÀÖÈÞ";
	c3->Width = 100;
	dataGridView->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Floor";
	c4->HeaderText = "ÊÎËÈ×ÅÑÒÂÎ ÝÒÀÆÅÉ";
	c4->Width = 100;
	dataGridView->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Apartment";
	c5->HeaderText = "ÊÎËÈ×ÅÑÒÂÎ ÊÂÀÐÒÈÐ";
	c5->Width = 100;
	dataGridView->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "living";
	c6->HeaderText = "ÆÈËÀß ÏËÎÙÀÄÜ";
	c6->Width = 100;
	dataGridView->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "Total";
	c7->HeaderText = "ÎÁÙÀß ÏËÎÙÀÄÜ";
	c7->Width = 100;
	dataGridView->Columns->Add(c7);

	dataGridView->TopLeftHeaderCell->Value = "¹";
	dataGridView->AutoResizeColumns();

	//dataGridView->Rows->Clear();

	int i = 0;
	//dataGridView->Rows->Clear();
	while (std::getline(file, s, '$')) {
		bool ok = true;
		getline(file, hn, '$');
		getline(file, y, '$');
		getline(file, fn, '$');
		getline(file, an, '$');
		getline(file, la, '$');
		getline(file, ta, '$');
		if (cB_street->Checked) {
			if (text.compare(s) != 0) {
				ok = false;
			}
		}
		if (cB_hn->Checked) {
			if (hn1 != std::stoi(hn)) {
				ok = false;
			}
		}
		if (cB_f->Checked) {
			if (fn1 != std::stoi(fn)) {
				ok = false;
			}
		}
		if (cB_a->Checked) {
			if (an1 != std::stoi(an)) {
				ok = false;
			}
		}
		if (cB_y->Checked) {
			if (y1 != std::stoi(y)) {
				ok = false;
			}
		}
		if (cB_la->Checked) {
			if (la1 != std::stod(la)) {
				ok = false;
			}
		}
		if (cB_ta->Checked) {
			if (ta1 != std::stod(ta)) {
				ok = false;
			}
		}
		if (ok) {

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
	file.close();
}
