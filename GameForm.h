#pragma once

namespace PRAXISPRAXIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void);
		//{
			//InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxGameData;
	private: System::Windows::Forms::Label^ labelScore;
	protected:





	private: System::Windows::Forms::PictureBox^ UpperBorder;
	private: System::Windows::Forms::PictureBox^ LowerBorder;


	private: System::Windows::Forms::PictureBox^ RightBorder;

	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::Timer^ timer;






	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ zur;

	private: System::Windows::Forms::Button^ pause;
	private: System::Windows::Forms::Button^ button2;









	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBoxGameData = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->zur = (gcnew System::Windows::Forms::Button());
			this->pause = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBoxGameData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->BackColor = System::Drawing::Color::Yellow;
			this->groupBoxGameData->Controls->Add(this->label1);
			this->groupBoxGameData->Controls->Add(this->labelScore);
			this->groupBoxGameData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxGameData->Location = System::Drawing::Point(12, 12);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Size = System::Drawing::Size(334, 45);
			this->groupBoxGameData->TabIndex = 1;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L"Данные игры";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(90, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Координаты змейки: (x,y)";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(12, 16);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(58, 17);
			this->labelScore->TabIndex = 0;
			this->labelScore->Text = L"Счёт:0";
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::SystemColors::ControlText;
			this->UpperBorder->Location = System::Drawing::Point(6, 51);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(881, 10);
			this->UpperBorder->TabIndex = 3;
			this->UpperBorder->TabStop = false;
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::SystemColors::ControlText;
			this->LowerBorder->Location = System::Drawing::Point(-4, 455);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(891, 10);
			this->LowerBorder->TabIndex = 4;
			this->LowerBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::SystemColors::ControlText;
			this->RightBorder->Location = System::Drawing::Point(877, 52);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(10, 408);
			this->RightBorder->TabIndex = 5;
			this->RightBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::SystemColors::ControlText;
			this->LeftBorder->Location = System::Drawing::Point(-4, 52);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 408);
			this->LeftBorder->TabIndex = 6;
			this->LeftBorder->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &GameForm::GameForm_Update);
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGameOver->Location = System::Drawing::Point(274, 201);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(293, 62);
			this->labelGameOver->TabIndex = 8;
			this->labelGameOver->Text = L"Game over!\r\nПерезапустите игру!";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(776, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 100;
			this->button1->TabStop = false;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			// 
			// zur
			// 
			this->zur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->zur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zur->Location = System::Drawing::Point(678, 12);
			this->zur->Name = L"zur";
			this->zur->Size = System::Drawing::Size(92, 33);
			this->zur->TabIndex = 101;
			this->zur->TabStop = false;
			this->zur->Text = L"НАЗАД";
			this->zur->UseVisualStyleBackColor = false;
			this->zur->Click += gcnew System::EventHandler(this, &GameForm::zur_Click);
			// 
			// pause
			// 
			this->pause->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pause->Location = System::Drawing::Point(528, 16);
			this->pause->Name = L"pause";
			this->pause->Size = System::Drawing::Size(144, 28);
			this->pause->TabIndex = 110;
			this->pause->TabStop = false;
			this->pause->Text = L"ПАУЗА/ПРОДОЛЖИТЬ";
			this->pause->UseVisualStyleBackColor = false;
			this->pause->Click += gcnew System::EventHandler(this, &GameForm::pause_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(386, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 29);
			this->button2->TabIndex = 111;
			this->button2->TabStop = false;
			this->button2->Text = L"НОВАЯ ИГРА";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GameForm::button2_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->pause);
			this->Controls->Add(this->zur);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра \"Змейка\"";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			this->groupBoxGameData->ResumeLayout(false);
			this->groupBoxGameData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//данные игры
		private: PictureBox^ fruit;//фрукт
	    private: array<PictureBox^>^ Serpens;//змея
		private: bool play;//играть
		private: bool die;//смерть
		private: bool firstLaunch;//первый запуск
		private: int step = 10;//шаг
		private: float updateInterval = 100;//интервал обновления
		private: int score = 0;//счёт

	//действия игры
	    private: void GeneratePositionFruit();
		private: void Eating();
		private: void Movement();
		private: void EatYourself();
		private: void GameOver();
		//private: void NewGame();
		private: void CheckBorders();
	    private: void Ccc();

		private: bool f = true;


private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

private: void GameForm_Update(Object^ object, EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void zur_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pause_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
