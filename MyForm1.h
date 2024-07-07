#pragma once

namespace PRAXISPRAXIS {
    //#include "Source1.cpp"
	using namespace System;
	using namespace System::ComponentModel;
    //#include "Source1.cpp"
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_correct;
	private: System::Windows::Forms::Button^ btn_add;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn_delete;

	private: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::TextBox^ textBoxAdmin;
	private:

	private:


	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_correct = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBoxAdmin = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(528, 12);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"НАЗАД";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(710, 12);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// btn_correct
			// 
			this->btn_correct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btn_correct->Location = System::Drawing::Point(83, 52);
			this->btn_correct->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_correct->Name = L"btn_correct";
			this->btn_correct->Size = System::Drawing::Size(350, 70);
			this->btn_correct->TabIndex = 2;
			this->btn_correct->Text = L"КОРРЕКТИРОВКА ПОЛЕЙ";
			this->btn_correct->UseVisualStyleBackColor = false;
			this->btn_correct->Click += gcnew System::EventHandler(this, &MyForm1::btn_correct_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btn_add->Location = System::Drawing::Point(83, 128);
			this->btn_add->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(350, 70);
			this->btn_add->TabIndex = 3;
			this->btn_add->Text = L"ДОБАВЛЕНИЕ ПОЛЕЙ";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm1::btn_add_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->Location = System::Drawing::Point(83, 204);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(350, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"УДАЛЕНИЕ ПОЛЕЙ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btn_delete->Location = System::Drawing::Point(83, 280);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(350, 70);
			this->btn_delete->TabIndex = 5;
			this->btn_delete->Text = L"УДАЛЕНИЕ ФАЙЛА";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm1::btn_delete_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button7->Location = System::Drawing::Point(83, 356);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(350, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"СОЗДАНИЕ НОВОГО ФАЙЛА И ЗАПОЛНЕНИЕ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// textBoxAdmin
			// 
			this->textBoxAdmin->BackColor = System::Drawing::Color::White;
			this->textBoxAdmin->Location = System::Drawing::Point(64, 72);
			this->textBoxAdmin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxAdmin->Name = L"textBoxAdmin";
			this->textBoxAdmin->Size = System::Drawing::Size(221, 20);
			this->textBoxAdmin->TabIndex = 7;
			this->textBoxAdmin->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxAdmin_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->groupBox1->Controls->Add(this->textBoxAdmin);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(480, 158);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(346, 178);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ВВЕДИТЕ СУЩЕСТВУЮЩИЙ ФАЙЛ                      (если поле ввода стало зелёным, то"
				L" название допустимо)";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_correct);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ВВЕДИТЕ ФАЙЛ";
			this->Shown += gcnew System::EventHandler(this, &MyForm1::MyForm1_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//#include "Source1.cpp"
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxAdmin_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_correct_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm1_Shown(System::Object^ sender, System::EventArgs^ e);
};
}
