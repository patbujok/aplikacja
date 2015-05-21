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
			this->button3->BackColor = System::Drawing::Color::Snow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(238, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Rysowanie figur";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
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
		private: Form^ okno;
				 private: TextBox^ box1;
						  private: TextBox^ box2;
								   private: TextBox^ wynik2;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		okno = gcnew Form;
		okno->Show();
		this->Hide();

		okno->Width = 400;
		okno->Height = 400;
		okno->Text = "miniKalkulator";
		okno->BackColor = System::Drawing::Color::PeachPuff;

		Button^ plus = gcnew Button;
		plus->Location = Point(20, 120);
		plus->Text = L"+";
		plus->BackColor = System::Drawing::Color::Snow;
		plus->Size = System::Drawing::Size(70, 70);
		plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
		okno->Controls->Add(plus);

		Button^ minus = gcnew Button;
		minus->Location = Point(110, 120);
		minus->Text = L"-";
		minus->BackColor = System::Drawing::Color::Snow;
		minus->Size = System::Drawing::Size(70, 70);
		minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
		okno->Controls->Add(minus);

		Button^ gwiazdka = gcnew Button;
		gwiazdka->Location = Point(200, 120);
		gwiazdka->Text = L"*";
		gwiazdka->BackColor = System::Drawing::Color::Snow;
		gwiazdka->Click += gcnew System::EventHandler(this, &Form1::gwiazdka_Click);
		gwiazdka->Size = System::Drawing::Size(70, 70);
		okno->Controls->Add(gwiazdka);

		Button^ dzielenie = gcnew Button;
		dzielenie->Location = Point(290, 120);
		dzielenie->Text = L"/";
		dzielenie->BackColor = System::Drawing::Color::Snow;
		dzielenie->Click += gcnew System::EventHandler(this, &Form1::dzielenie_Click);
		dzielenie->Size = System::Drawing::Size(70, 70);
		okno->Controls->Add(dzielenie);

		Button^ czyszczenie = gcnew Button;
		czyszczenie->Location = Point(150, 200);
		czyszczenie->Text = L"C";
		czyszczenie->BackColor = System::Drawing::Color::Snow;
		czyszczenie->Size = System::Drawing::Size(70, 70);
		czyszczenie->Click += gcnew System::EventHandler(this, &Form1::czyszczenie_Click);
		okno->Controls->Add(czyszczenie);

		Button^ koniec1 = gcnew Button;
		koniec1->Location = Point(20, 300);
		koniec1->Text = L"Koniec";
		koniec1->BackColor = System::Drawing::Color::Snow;
		koniec1->Size = System::Drawing::Size(60, 40);
		koniec1->Click += gcnew System::EventHandler(this, &Form1::koniec_Click);
		okno->Controls->Add(koniec1);

		///////////etykiety///////////////
		Label^ etykieta1 = gcnew Label;
		etykieta1->Width = 150;
		etykieta1->Text = "Pierwsza liczba";
		etykieta1->Location = Point(50, 30);
		etykieta1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		okno->Controls->Add(etykieta1);

		Label^ etykieta2 = gcnew Label;
		etykieta2->Width = 200;
		etykieta2->Text = "Druga liczba";
		etykieta2->Location = Point(220, 30);
		etykieta2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		okno->Controls->Add(etykieta2);

		Label^ wynik = gcnew Label;
		wynik->Width = 70;
		wynik->Text = "Wynik";
		wynik->Location = Point(150, 280);
		wynik->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		okno->Controls->Add(wynik);

		

		/////////textbox//////////

		 box1 = gcnew TextBox;
		box1->Location = Point(50, 60);
		box1->Width = 120;
		okno->Controls->Add(box1);

		box2 = gcnew TextBox;
		box2->Location = Point(220, 60);
		box2->Width = 120;
		okno->Controls->Add(box2);

		wynik2 = gcnew TextBox;
		wynik2->Location = Point(130, 310);
		okno->Controls->Add(wynik2);
		

	}

		////button click////
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e){

		double x, y, wynik;
		x = Double::Parse(box1->Text);
		y = Double::Parse(box2->Text);
		wynik = x + y;

		wynik2->Text = wynik.ToString();

	}

				private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e){

					double x, y, wynik;
					x = Double::Parse(box1->Text);
					y = Double::Parse(box2->Text);
					wynik = x - y;

					wynik2->Text = wynik.ToString();

				}

							private: System::Void gwiazdka_Click(System::Object^  sender, System::EventArgs^  e){

								double x, y, wynik;
								x = Double::Parse(box1->Text);
								y = Double::Parse(box2->Text);
								wynik = x * y;

								wynik2->Text = wynik.ToString();

							}
										private: System::Void dzielenie_Click(System::Object^  sender, System::EventArgs^  e){

											double x, y, wynik;
											x = Double::Parse(box1->Text);
											y = Double::Parse(box2->Text);
											wynik = x / y;

											wynik2->Text = wynik.ToString();

										}
private: System::Void czyszczenie_Click(System::Object^  sender, System::EventArgs^  e){

	box1->Text = " ";
	box2->Text = " ";
	wynik2->Text = " ";

}
		 private: System::Void koniec_Click(System::Object^  sender, System::EventArgs^  e){
			 Close();

		 }

					private: Form^ okno2;
				 
		
	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ okno2 = gcnew Form;
		okno2->Show();
		this->Hide();

		okno2->Width = 400;
		okno2->Height = 400;
		okno2->Text = "Rysowanie figur";
		

		////textBox////
		TextBox^ tbox1 = gcnew TextBox;
		tbox1->Location = Point(60, 30);
		okno2->Controls->Add(tbox1);

		TextBox^ tbox2 = gcnew TextBox;
		tbox2->Location = Point(200, 30);
		okno2->Controls->Add(tbox2);

		TextBox^ tbox3 = gcnew TextBox;
		tbox3->Location = Point(60, 60);
		okno2->Controls->Add(tbox3);

		TextBox^ tbox4 = gcnew TextBox;
		tbox4->Location = Point(200, 60);
		okno2->Controls->Add(tbox4);
	
		/////przycisk/////

		Button^ rysuj = gcnew Button;
		rysuj->Location = Point(160, 100);
		rysuj->Text = L"Rysuj";
		rysuj->BackColor = System::Drawing::Color::Snow;
		rysuj->Size = System::Drawing::Size(60, 40);
		//rysuj->Click += gcnew System::EventHandler(this, &Form1::koniec_Click);//
		okno2->Controls->Add(rysuj);

	}
};
}

