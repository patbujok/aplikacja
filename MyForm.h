#pragma once

namespace Windows_Form_Application13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Rysowaniefigur
	/// </summary>
	public ref class Rysowaniefigur : public System::Windows::Forms::Form
	{
	public:
		Rysowaniefigur(void)
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
		~Rysowaniefigur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(227, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Y1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Y2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(377, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(103, 86);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Figura";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(10, 22);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Linia";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(10, 44);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(65, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Kwadrat";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(10, 67);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(55, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Okr�g";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(190, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 27);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Rysuj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Rysowaniefigur::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(20, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 9);
			this->label5->TabIndex = 10;
			this->label5->Text = L"(20,130)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(460, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 9);
			this->label6->TabIndex = 11;
			this->label6->Text = L"(460,130)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(20, 380);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 9);
			this->label7->TabIndex = 12;
			this->label7->Text = L"(20,380)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(460, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 9);
			this->label8->TabIndex = 13;
			this->label8->Text = L"(460,380)";
			// 
			// Rysowaniefigur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(528, 400);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Rysowaniefigur";
			this->Text = L"Rysowanie figur";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics ^ g = this->CreateGraphics();
		Pen^ pedzel = gcnew Pen(System::Drawing::Color::DarkBlue);


		if (checkBox1->Checked)
		{
			g->DrawLine(pedzel, 50, 100, 80, 300);
		}
		else if (checkBox2->Checked){
			g->DrawRectangle(pedzel, 50, 100, 80, 300);
		}
		else if (checkBox3->Checked){
			g->DrawEllipse(pedzel, 50, 100, 80, 300);
		}

	}
};
}
