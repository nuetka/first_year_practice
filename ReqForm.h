#pragma once

namespace PRAXISPRAXIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ReqForm
	/// </summary>
	public ref class ReqForm : public System::Windows::Forms::Form
	{
	public:
		ReqForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ReqForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_year_of_commissioning;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_total_area;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown_living_area;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_apartment_number;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_floor_number;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_house_number;


	private: System::Windows::Forms::TextBox^ textBox_street;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::CheckBox^ cB_street;
	private: System::Windows::Forms::CheckBox^ cB_hn;
	private: System::Windows::Forms::CheckBox^ cB_a;
	private: System::Windows::Forms::CheckBox^ cB_ta;
	private: System::Windows::Forms::CheckBox^ cB_y;
	private: System::Windows::Forms::CheckBox^ cB_f;
	private: System::Windows::Forms::CheckBox^ cB_la;








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_year_of_commissioning = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_total_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_living_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_apartment_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_floor_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_house_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_street = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->cB_street = (gcnew System::Windows::Forms::CheckBox());
			this->cB_hn = (gcnew System::Windows::Forms::CheckBox());
			this->cB_a = (gcnew System::Windows::Forms::CheckBox());
			this->cB_ta = (gcnew System::Windows::Forms::CheckBox());
			this->cB_y = (gcnew System::Windows::Forms::CheckBox());
			this->cB_f = (gcnew System::Windows::Forms::CheckBox());
			this->cB_la = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(873, 3);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"НАЗАД";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ReqForm::button1_Click);
			// 
			// numericUpDown_year_of_commissioning
			// 
			this->numericUpDown_year_of_commissioning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_year_of_commissioning->Location = System::Drawing::Point(31, 111);
			this->numericUpDown_year_of_commissioning->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_year_of_commissioning->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2050, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1600, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Name = L"numericUpDown_year_of_commissioning";
			this->numericUpDown_year_of_commissioning->Size = System::Drawing::Size(215, 20);
			this->numericUpDown_year_of_commissioning->TabIndex = 35;
			this->numericUpDown_year_of_commissioning->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			// 
			// numericUpDown_total_area
			// 
			this->numericUpDown_total_area->DecimalPlaces = 2;
			this->numericUpDown_total_area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_total_area->Location = System::Drawing::Point(772, 60);
			this->numericUpDown_total_area->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_total_area->Name = L"numericUpDown_total_area";
			this->numericUpDown_total_area->Size = System::Drawing::Size(225, 20);
			this->numericUpDown_total_area->TabIndex = 34;
			// 
			// numericUpDown_living_area
			// 
			this->numericUpDown_living_area->DecimalPlaces = 2;
			this->numericUpDown_living_area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_living_area->Location = System::Drawing::Point(518, 111);
			this->numericUpDown_living_area->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_living_area->Name = L"numericUpDown_living_area";
			this->numericUpDown_living_area->Size = System::Drawing::Size(225, 20);
			this->numericUpDown_living_area->TabIndex = 31;
			// 
			// numericUpDown_apartment_number
			// 
			this->numericUpDown_apartment_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_apartment_number->Location = System::Drawing::Point(518, 59);
			this->numericUpDown_apartment_number->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_apartment_number->Name = L"numericUpDown_apartment_number";
			this->numericUpDown_apartment_number->Size = System::Drawing::Size(225, 20);
			this->numericUpDown_apartment_number->TabIndex = 29;
			// 
			// numericUpDown_floor_number
			// 
			this->numericUpDown_floor_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_floor_number->Location = System::Drawing::Point(282, 111);
			this->numericUpDown_floor_number->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_floor_number->Name = L"numericUpDown_floor_number";
			this->numericUpDown_floor_number->Size = System::Drawing::Size(212, 20);
			this->numericUpDown_floor_number->TabIndex = 27;
			// 
			// numericUpDown_house_number
			// 
			this->numericUpDown_house_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_house_number->Location = System::Drawing::Point(279, 59);
			this->numericUpDown_house_number->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown_house_number->Name = L"numericUpDown_house_number";
			this->numericUpDown_house_number->Size = System::Drawing::Size(216, 20);
			this->numericUpDown_house_number->TabIndex = 25;
			// 
			// textBox_street
			// 
			this->textBox_street->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_street->Location = System::Drawing::Point(31, 59);
			this->textBox_street->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox_street->Name = L"textBox_street";
			this->textBox_street->Size = System::Drawing::Size(185, 20);
			this->textBox_street->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(227, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 17);
			this->label1->TabIndex = 36;
			this->label1->Text = L"название файла";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(28, 11);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 17);
			this->label6->TabIndex = 37;
			this->label6->Text = L"составление запроса для";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(782, 105);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 28);
			this->button2->TabIndex = 38;
			this->button2->Text = L"ВЫПОЛНИТЬ ЗАПРОС";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ReqForm::button2_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(31, 149);
			this->dataGridView->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(965, 281);
			this->dataGridView->TabIndex = 39;
			// 
			// cB_street
			// 
			this->cB_street->AutoSize = true;
			this->cB_street->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_street->Location = System::Drawing::Point(31, 41);
			this->cB_street->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_street->Name = L"cB_street";
			this->cB_street->Size = System::Drawing::Size(70, 17);
			this->cB_street->TabIndex = 40;
			this->cB_street->Text = L"УЛИЦА";
			this->cB_street->UseVisualStyleBackColor = true;
			// 
			// cB_hn
			// 
			this->cB_hn->AutoSize = true;
			this->cB_hn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_hn->Location = System::Drawing::Point(278, 43);
			this->cB_hn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_hn->Name = L"cB_hn";
			this->cB_hn->Size = System::Drawing::Size(111, 17);
			this->cB_hn->TabIndex = 41;
			this->cB_hn->Text = L"НОМЕР ДОМА";
			this->cB_hn->UseVisualStyleBackColor = true;
			// 
			// cB_a
			// 
			this->cB_a->AutoSize = true;
			this->cB_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_a->Location = System::Drawing::Point(518, 43);
			this->cB_a->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_a->Name = L"cB_a";
			this->cB_a->Size = System::Drawing::Size(172, 17);
			this->cB_a->TabIndex = 42;
			this->cB_a->Text = L"КОЛИЧЕСТВО КВАРТИР";
			this->cB_a->UseVisualStyleBackColor = true;
			// 
			// cB_ta
			// 
			this->cB_ta->AutoSize = true;
			this->cB_ta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_ta->Location = System::Drawing::Point(772, 41);
			this->cB_ta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_ta->Name = L"cB_ta";
			this->cB_ta->Size = System::Drawing::Size(180, 17);
			this->cB_ta->TabIndex = 43;
			this->cB_ta->Text = L"ОБЩАЯ ПЛОЩАДЬ ДОМА";
			this->cB_ta->UseVisualStyleBackColor = true;
			// 
			// cB_y
			// 
			this->cB_y->AutoSize = true;
			this->cB_y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_y->Location = System::Drawing::Point(31, 91);
			this->cB_y->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_y->Name = L"cB_y";
			this->cB_y->Size = System::Drawing::Size(219, 17);
			this->cB_y->TabIndex = 44;
			this->cB_y->Text = L"ГОД СДАЧИ В ЭКСПЛУАТАЦИЮ";
			this->cB_y->UseVisualStyleBackColor = true;
			// 
			// cB_f
			// 
			this->cB_f->AutoSize = true;
			this->cB_f->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_f->Location = System::Drawing::Point(279, 94);
			this->cB_f->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_f->Name = L"cB_f";
			this->cB_f->Size = System::Drawing::Size(168, 17);
			this->cB_f->TabIndex = 45;
			this->cB_f->Text = L"КОЛИЧЕСТВО ЭТАЖЕЙ";
			this->cB_f->UseVisualStyleBackColor = true;
			// 
			// cB_la
			// 
			this->cB_la->AutoSize = true;
			this->cB_la->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cB_la->Location = System::Drawing::Point(518, 94);
			this->cB_la->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cB_la->Name = L"cB_la";
			this->cB_la->Size = System::Drawing::Size(190, 17);
			this->cB_la->TabIndex = 46;
			this->cB_la->Text = L"ОБЩАЯ ЖИЛАЯ ПЛОЩАДЬ";
			this->cB_la->UseVisualStyleBackColor = true;
			// 
			// ReqForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1031, 461);
			this->Controls->Add(this->cB_la);
			this->Controls->Add(this->cB_f);
			this->Controls->Add(this->cB_y);
			this->Controls->Add(this->cB_ta);
			this->Controls->Add(this->cB_a);
			this->Controls->Add(this->cB_hn);
			this->Controls->Add(this->cB_street);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown_year_of_commissioning);
			this->Controls->Add(this->numericUpDown_total_area);
			this->Controls->Add(this->numericUpDown_living_area);
			this->Controls->Add(this->numericUpDown_apartment_number);
			this->Controls->Add(this->numericUpDown_floor_number);
			this->Controls->Add(this->numericUpDown_house_number);
			this->Controls->Add(this->textBox_street);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"ReqForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReqForm";
			this->Shown += gcnew System::EventHandler(this, &ReqForm::ReqForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReqForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
