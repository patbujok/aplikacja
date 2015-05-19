#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Snow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(159, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Koniec";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(133, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Co chcesz robiæ\?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Snow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(30, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"miniKalkulator";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(238, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(415, 274);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Aplikacja";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ okno = gcnew Form;
		okno->Show();

		okno->Width = 400;
		okno->Height = 400;
		okno->Text = "miniKalkulator";
		okno->BackColor = System::Drawing::Color::NavajoWhite;

		Button^ plus = gcnew Button;
		plus->Location = Point(40, 70);
		plus->Text = L"+";
		plus->BackColor = System::Drawing::Color::Snow;
		okno->Controls->Add(plus);

		Button^ minus = gcnew Button;
		minus->Location = Point(40, 100);
		minus->Text = L"-";
		minus->BackColor = System::Drawing::Color::Snow;
		okno->Controls->Add(minus);

		Button^ gwiazdka = gcnew Button;
		gwiazdka->Location = Point(40, 130);
		gwiazdka->Text = L"*";
		gwiazdka->BackColor = System::Drawing::Color::Snow;
		okno->Controls->Add(gwiazdka);

		Button^ dzielenie = gcnew Button;
		dzielenie->Location = Point(40, 160);
		dzielenie->Text = L"/";
		dzielenie->BackColor = System::Drawing::Color::Snow;
		okno->Controls->Add(dzielenie);
		///////////etykiety///////////////
		Label^ etykieta1 = gcnew Label;
		etykieta1->Width = 200;
		etykieta1->Text = "Podaj pierwsz¹ liczbê";
		etykieta1->Location = Point(160, 70);
		etykieta1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		okno->Controls->Add(etykieta1);
	
		Label^ etykieta2 = gcnew Label;
		etykieta2->Width = 200;
		etykieta2->Text = "Podaj drug¹ liczbê";
		etykieta2->Location = Point(160, 130);
		etykieta2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		okno->Controls->Add(etykieta2);



		
	}
};
}

