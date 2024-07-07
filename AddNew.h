#pragma once
namespace PRAXISPRAXIS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddNew
	/// </summary>
	public ref class AddNew : public System::Windows::Forms::Form
	{
	public:
		AddNew(void)
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
		~AddNew()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_year_of_commissioning;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_total_area;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_living_area;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_apartment_number;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_floor_number;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_house_number;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_street;
	public: System::Windows::Forms::Label^ label6;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_year_of_commissioning = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_total_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_living_area = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_apartment_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_floor_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_house_number = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_street = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ДОБАВЛЕНИЕ ПОЛЕЙ В ФАЙЛ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(553, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"НАЗАД";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddNew::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(711, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 61);
			this->button2->TabIndex = 2;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddNew::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(631, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 85);
			this->button3->TabIndex = 3;
			this->button3->Text = L"СОХРАНИТЬ!";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddNew::button3_Click);
			// 
			// numericUpDown_year_of_commissioning
			// 
			this->numericUpDown_year_of_commissioning->Location = System::Drawing::Point(83, 265);
			this->numericUpDown_year_of_commissioning->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2050, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1600, 0, 0, 0 });
			this->numericUpDown_year_of_commissioning->Name = L"numericUpDown_year_of_commissioning";
			this->numericUpDown_year_of_commissioning->Size = System::Drawing::Size(184, 20);
			this->numericUpDown_year_of_commissioning->TabIndex = 35;
			this->numericUpDown_year_of_commissioning->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			// 
			// numericUpDown_total_area
			// 
			this->numericUpDown_total_area->DecimalPlaces = 2;
			this->numericUpDown_total_area->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown_total_area->Location = System::Drawing::Point(366, 317);
			this->numericUpDown_total_area->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_total_area->Name = L"numericUpDown_total_area";
			this->numericUpDown_total_area->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_total_area->TabIndex = 34;
			this->numericUpDown_total_area->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(363, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(197, 17);
			this->label9->TabIndex = 33;
			this->label9->Text = L"ОБЩАЯ ПЛОЩАДЬ ДОМА";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(362, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 17);
			this->label8->TabIndex = 32;
			this->label8->Text = L"ОБЩАЯ ЖИЛАЯ ПЛОЩАДЬ";
			// 
			// numericUpDown_living_area
			// 
			this->numericUpDown_living_area->DecimalPlaces = 2;
			this->numericUpDown_living_area->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown_living_area->Location = System::Drawing::Point(365, 242);
			this->numericUpDown_living_area->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_living_area->Name = L"numericUpDown_living_area";
			this->numericUpDown_living_area->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_living_area->TabIndex = 31;
			this->numericUpDown_living_area->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(362, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"КОЛИЧЕСТВО КВАРТИР";
			// 
			// numericUpDown_apartment_number
			// 
			this->numericUpDown_apartment_number->Location = System::Drawing::Point(365, 161);
			this->numericUpDown_apartment_number->Name = L"numericUpDown_apartment_number";
			this->numericUpDown_apartment_number->Size = System::Drawing::Size(193, 20);
			this->numericUpDown_apartment_number->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(82, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"КОЛИЧЕСТВО ЭТАЖЕЙ";
			// 
			// numericUpDown_floor_number
			// 
			this->numericUpDown_floor_number->Location = System::Drawing::Point(85, 355);
			this->numericUpDown_floor_number->Name = L"numericUpDown_floor_number";
			this->numericUpDown_floor_number->Size = System::Drawing::Size(182, 20);
			this->numericUpDown_floor_number->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(79, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 17);
			this->label4->TabIndex = 26;
			this->label4->Text = L"ГОД СДАЧИ В ЭКСПЛУАТАЦИЮ";
			// 
			// numericUpDown_house_number
			// 
			this->numericUpDown_house_number->Location = System::Drawing::Point(82, 184);
			this->numericUpDown_house_number->Name = L"numericUpDown_house_number";
			this->numericUpDown_house_number->Size = System::Drawing::Size(185, 20);
			this->numericUpDown_house_number->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(82, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"НОМЕР ДОМА";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(79, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"УЛИЦА";
			// 
			// textBox_street
			// 
			this->textBox_street->Location = System::Drawing::Point(82, 110);
			this->textBox_street->Name = L"textBox_street";
			this->textBox_street->Size = System::Drawing::Size(185, 20);
			this->textBox_street->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(361, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 25);
			this->label6->TabIndex = 36;
			this->label6->Text = L"label6";
			// 
			// AddNew
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown_year_of_commissioning);
			this->Controls->Add(this->numericUpDown_total_area);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown_living_area);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown_apartment_number);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown_floor_number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown_house_number);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_street);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddNew";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddNew";
			this->Shown += gcnew System::EventHandler(this, &AddNew::AddNew_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_year_of_commissioning))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_total_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_living_area))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_apartment_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_floor_number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_house_number))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddNew_Shown(System::Object^ sender, System::EventArgs^ e);
};
}
