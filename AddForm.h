#pragma once

namespace PRAXISPRAXIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_street;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_house_number;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_floor_number;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_apartment_number;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_living_area;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_total_area;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_year_of_commissioning;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_street = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_house_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_floor_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_apartment_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_living_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_total_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_year_of_commissioning = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(60, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 30);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(548, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(306, 149);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"НАЗВАНИЕ ФАЙЛА";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 2;
			// 
			// textBox_street
			// 
			this->textBox_street->Location = System::Drawing::Point(34, 120);
			this->textBox_street->Name = L"textBox_street";
			this->textBox_street->Size = System::Drawing::Size(185, 20);
			this->textBox_street->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(31, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"УЛИЦА";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(34, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"НОМЕР ДОМА";
			// 
			// numericUpDown_house_number
			// 
			this->numericUpDown_house_number->Location = System::Drawing::Point(34, 194);
			this->numericUpDown_house_number->Name = L"numericUpDown_house_number";
			this->numericUpDown_house_number->Size = System::Drawing::Size(185, 20);
			this->numericUpDown_house_number->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(31, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ГОД СДАЧИ В ЭКСПЛУАТАЦИЮ";
			// 
			// numericUpDown_floor_number
			// 
			this->numericUpDown_floor_number->Location = System::Drawing::Point(37, 365);
			this->numericUpDown_floor_number->Name = L"numericUpDown_floor_number";
			this->numericUpDown_floor_number->Size = System::Drawing::Size(182, 20);
			this->numericUpDown_floor_number->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(34, 345);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"КОЛИЧЕСТВО ЭТАЖЕЙ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(736, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 43);
			this->button1->TabIndex = 11;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(608, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 43);
			this->button2->TabIndex = 12;
			this->button2->Text = L"НАЗАД";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(588, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"СОЗДАНИЕ ФАЙЛА И ВВОД ДАННЫХ О ПЕРВОМ ДОМЕ";
			// 
			// numericUpDown_apartment_number
			// 
			this->numericUpDown_apartment_number->Location = System::Drawing::Point(317, 171);
			this->numericUpDown_apartment_number->Name = L"numericUpDown_apartment_number";
			this->numericUpDown_apartment_number->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_apartment_number->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(314, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"КОЛИЧЕСТВО КВАРТИР";
			// 
			// numericUpDown_living_area
			// 
			this->numericUpDown_living_area->DecimalPlaces = 2;
			this->numericUpDown_living_area->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown_living_area->Location = System::Drawing::Point(317, 252);
			this->numericUpDown_living_area->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_living_area->Name = L"numericUpDown_living_area";
			this->numericUpDown_living_area->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_living_area->TabIndex = 16;
			this->numericUpDown_living_area->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(314, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"ОБЩАЯ ЖИЛАЯ ПЛОЩАДЬ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(315, 298);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(197, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"ОБЩАЯ ПЛОЩАДЬ ДОМА";
			// 
			// numericUpDown_total_area
			// 
			this->numericUpDown_total_area->DecimalPlaces = 2;
			this->numericUpDown_total_area->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown_total_area->Location = System::Drawing::Point(318, 327);
			this->numericUpDown_total_area->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_total_area->Name = L"numericUpDown_total_area";
			this->numericUpDown_total_area->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_total_area->TabIndex = 19;
			this->numericUpDown_total_area->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(548, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(306, 105);
			this->button3->TabIndex = 20;
			this->button3->Text = L"СОЗДАТЬ ФАЙЛ И ЗАПОЛНИТЬ ЕГО НАЧАЛЬНЫМИ ДАННЫМИ!";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddForm::button3_Click);
			// 
			// numericUpDown_year_of_commissioning
			// 
			this->numericUpDown_year_of_commissioning->Location = System::Drawing::Point(35, 275);
			this->numericUpDown_year_of_commissioning->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2050, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1600, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Name = L"numericUpDown_year_of_commissioning";
			this->numericUpDown_year_of_commissioning->Size = System::Drawing::Size(184, 20);
			this->numericUpDown_year_of_commissioning->TabIndex = 21;
			this->numericUpDown_year_of_commissioning->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->numericUpDown_year_of_commissioning);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown_total_area);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown_living_area);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown_apartment_number);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown_floor_number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown_house_number);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_street);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"AddForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"СОЗДАНИЕ НОВОГО ФАЙЛА И ЕГО ЗАПОЛНЕНИЕ ";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

};
}
