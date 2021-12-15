#pragma once
#include "Model.h"
#include <iostream>
namespace Laba42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericA;
	private: System::Windows::Forms::NumericUpDown^ numericB;
	private: System::Windows::Forms::NumericUpDown^ numericC;
	private: System::Windows::Forms::TrackBar^ trackA;
	private: System::Windows::Forms::TrackBar^ trackB;
	private: System::Windows::Forms::TrackBar^ trackC;






	private: System::Windows::Forms::TextBox^ textA;
	private: System::Windows::Forms::TextBox^ textB;
	private: System::Windows::Forms::TextBox^ textC;
	private: System::Windows::Forms::Label^ label6;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericA = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericC = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackA = (gcnew System::Windows::Forms::TrackBar());
			this->trackB = (gcnew System::Windows::Forms::TrackBar());
			this->trackC = (gcnew System::Windows::Forms::TrackBar());
			this->textA = (gcnew System::Windows::Forms::TextBox());
			this->textB = (gcnew System::Windows::Forms::TextBox());
			this->textC = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackC))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(209, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 91);
			this->label2->TabIndex = 1;
			this->label2->Text = L"<=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(348, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 91);
			this->label3->TabIndex = 2;
			this->label3->Text = L"B";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(446, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 91);
			this->label4->TabIndex = 3;
			this->label4->Text = L"<=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(585, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 91);
			this->label5->TabIndex = 4;
			this->label5->Text = L"C";
			// 
			// numericA
			// 
			this->numericA->Location = System::Drawing::Point(67, 183);
			this->numericA->Name = L"numericA";
			this->numericA->Size = System::Drawing::Size(141, 22);
			this->numericA->TabIndex = 5;
			this->numericA->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericA_ValueChanged);
			// 
			// numericB
			// 
			this->numericB->Location = System::Drawing::Point(320, 183);
			this->numericB->Name = L"numericB";
			this->numericB->Size = System::Drawing::Size(141, 22);
			this->numericB->TabIndex = 6;
			this->numericB->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericB_ValueChanged);
			// 
			// numericC
			// 
			this->numericC->Location = System::Drawing::Point(562, 183);
			this->numericC->Name = L"numericC";
			this->numericC->Size = System::Drawing::Size(141, 22);
			this->numericC->TabIndex = 7;
			this->numericC->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericC_ValueChanged);
			// 
			// trackA
			// 
			this->trackA->Location = System::Drawing::Point(67, 277);
			this->trackA->Maximum = 100;
			this->trackA->Name = L"trackA";
			this->trackA->Size = System::Drawing::Size(141, 56);
			this->trackA->TabIndex = 8;
			this->trackA->Scroll += gcnew System::EventHandler(this, &MyForm::trackA_Scroll);
			// 
			// trackB
			// 
			this->trackB->Location = System::Drawing::Point(320, 277);
			this->trackB->Maximum = 100;
			this->trackB->Name = L"trackB";
			this->trackB->Size = System::Drawing::Size(141, 56);
			this->trackB->TabIndex = 9;
			this->trackB->Scroll += gcnew System::EventHandler(this, &MyForm::trackB_Scroll);
			// 
			// trackC
			// 
			this->trackC->Location = System::Drawing::Point(562, 277);
			this->trackC->Maximum = 100;
			this->trackC->Name = L"trackC";
			this->trackC->Size = System::Drawing::Size(141, 56);
			this->trackC->TabIndex = 10;
			this->trackC->Scroll += gcnew System::EventHandler(this, &MyForm::trackC_Scroll);
			// 
			// textA
			// 
			this->textA->Location = System::Drawing::Point(67, 235);
			this->textA->Name = L"textA";
			this->textA->Size = System::Drawing::Size(141, 22);
			this->textA->TabIndex = 11;
			this->textA->TextChanged += gcnew System::EventHandler(this, &MyForm::textA_TextChanged);
			// 
			// textB
			// 
			this->textB->Location = System::Drawing::Point(320, 235);
			this->textB->Name = L"textB";
			this->textB->Size = System::Drawing::Size(141, 22);
			this->textB->TabIndex = 12;
			this->textB->TextChanged += gcnew System::EventHandler(this, &MyForm::textB_TextChanged);
			// 
			// textC
			// 
			this->textC->Location = System::Drawing::Point(562, 235);
			this->textC->Name = L"textC";
			this->textC->Size = System::Drawing::Size(141, 22);
			this->textC->TabIndex = 13;
			this->textC->TextChanged += gcnew System::EventHandler(this, &MyForm::textC_TextChanged);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 538);
			this->Controls->Add(this->textC);
			this->Controls->Add(this->textB);
			this->Controls->Add(this->textA);
			this->Controls->Add(this->trackC);
			this->Controls->Add(this->trackB);
			this->Controls->Add(this->trackA);
			this->Controls->Add(this->numericC);
			this->Controls->Add(this->numericB);
			this->Controls->Add(this->numericA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Model model;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//int file = Convert::ToInt32(System::IO::File::ReadAllText("check1.txt"));
			array<String^>^ string_mas = (System::IO::File::ReadAllText("check1.txt"))->Split(' ', false);
			textC->Text = string_mas[2];
			textB->Text = string_mas[1];
			textA->Text = string_mas[0];
			/*model.SetC(Convert::ToInt32(string_mas[2]), numericC, trackC, textC);
			model.manager(numericA, numericB, numericC, trackA, trackB, trackC);
			model.SetA(Convert::ToInt32(string_mas[0]), numericA, trackA, textA);
			model.SetB(Convert::ToInt32(string_mas[1]), numericB, trackB, textB);*/
			
	}
		
    private: System::Void numericA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericA->Text != "") {
			/*textA->Text = (numericA->Value).ToString();
			trackA->Value = Convert::ToInt32(numericA->Value);*/
			model.SetA(Convert::ToInt32(numericA->Value), numericA, trackA, textA);
			model.manager(numericA, numericB, numericC, trackA, trackB, trackC);
		}
		
    }
    private: System::Void textA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textA->Text != "") {
			model.SetA(Convert::ToInt32(textA->Text), numericA, trackA, textA);
			
		}
    }
    private: System::Void trackA_Scroll(System::Object^ sender, System::EventArgs^ e) {
		model.SetA(Convert::ToInt32(trackA->Value), numericA, trackA, textA);
	}
	private: System::Void numericB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		 if (numericB->Text != "") {
			 model.SetB(Convert::ToInt32(numericB->Value), numericB, trackB, textB);
			 model.manager(numericA, numericB, numericC, trackA, trackB, trackC);
		 }
	}
	private: System::Void textB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textB->Text != "") {
			model.SetB(Convert::ToInt32(textB->Text), numericB, trackB, textB);
		}
	}
	private: System::Void trackB_Scroll(System::Object^ sender, System::EventArgs^ e) {
		model.SetB(Convert::ToInt32(trackB->Value), numericB, trackB, textB);
	}
	private: System::Void numericC_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		 if (numericC->Text != "") {
			 model.SetC(Convert::ToInt32(numericC->Value), numericC, trackC, textC);
			 model.manager(numericA, numericB, numericC, trackA, trackB, trackC);
		 }
	}
	private: System::Void textC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textC->Text != "") {
			model.SetC(Convert::ToInt32(textC->Text), numericC, trackC, textC);
		}
	}
	private: System::Void trackC_Scroll(System::Object^ sender, System::EventArgs^ e) {
		model.SetC(Convert::ToInt32(trackC->Value), numericC, trackC, textC);
	}
};
}