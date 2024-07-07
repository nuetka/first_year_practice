#pragma once

namespace PRAXISPRAXIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::TextBox^ textBox1;
	public:
		property System::String^ TextValue
		{
			System::String^ get()
			{
				return this->textBox1->Text;
			}
		}
	private:

	private: System::Windows::Forms::Button^ btn_req;
	private: System::Windows::Forms::Button^ btn_output;


	public: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	public: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_req = (gcnew System::Windows::Forms::Button());
			this->btn_output = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(697, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(534, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"НАЗАД";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(44, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btn_req
			// 
			this->btn_req->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btn_req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_req->Location = System::Drawing::Point(122, 74);
			this->btn_req->Name = L"btn_req";
			this->btn_req->Size = System::Drawing::Size(300, 70);
			this->btn_req->TabIndex = 3;
			this->btn_req->Text = L"ЗАПРОС ПО ДОМАМ";
			this->btn_req->UseVisualStyleBackColor = false;
			this->btn_req->Click += gcnew System::EventHandler(this, &MyForm::btn_req_Click);
			// 
			// btn_output
			// 
			this->btn_output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btn_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_output->Location = System::Drawing::Point(122, 178);
			this->btn_output->Name = L"btn_output";
			this->btn_output->Size = System::Drawing::Size(300, 70);
			this->btn_output->TabIndex = 4;
			this->btn_output->Text = L"ВЫВОД СОДЕРЖИМОГО ФАЙЛА";
			this->btn_output->UseVisualStyleBackColor = false;
			this->btn_output->Click += gcnew System::EventHandler(this, &MyForm::btn_output_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(122, 363);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 70);
			this->button5->TabIndex = 5;
			this->button5->Text = L"СОЗДАНИЕ И РЕДАКТИРОВАНИЕ ФАЙЛОВ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(490, 140);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(279, 150);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ВВЕДИТЕ СУЩЕСТВУЮЩИЙ ФАЙЛ       (если поле ввода стало зелёным, то название допус"
				L"тимо)";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(122, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 70);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ВХОД В РЕЖИМ АДМИНИСТРАТОРА";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_output);
			this->Controls->Add(this->btn_req);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_req_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_output_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e);
};
}
