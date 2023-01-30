#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "Train.h"
#include "Adult.h"
#include "Kid.h"
#include "adultsInfo.h"
#include "kidsInfo.h"
namespace D1_19L1110_Train {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for passengersDetails
	/// </summary>
	public ref class passengersDetails : public System::Windows::Forms::Form
	{
		Train* trainObj;
		int idOfPassengers;
		int counter;
		Adult* adults;
		Kid* kids;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::TextBox^  textBox3;
			 

	public:
		passengersDetails(Train* train,int id)
		{
			counter=0;
			trainObj=train;
			idOfPassengers=id;
			adults=nullptr;
			kids=nullptr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		inline bool IsIntegersValue(string data) //To check if the age consist of valid int or not
		{
			int size;
			for( size=0;data[size]!='\0';size++);
			for (int i=0;i<size;i++)
				if (data[i] < 48 || data[i] > 57)
					return false;
			return true;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~passengersDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No. Of Adults (Max 4)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"No. Of Kids (Max 6)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &passengersDetails::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Family Name:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(97, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(12, 202);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(248, 59);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"CAREFULLY PRESS THE NEXT BUTTON! BECAUSE YOU CAN\'T EXIT WITHOUT ENTERING PASSENGE" 
				L"RS INFO";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passengersDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(272, 273);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"passengersDetails";
			this->Text = L"PASSENGER\'S DETAILS";
			this->Load += gcnew System::EventHandler(this, &passengersDetails::passengersDetails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void passengersDetails_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 msclr::interop::marshal_context str;
			 if (textBox1->Text->Length != 0 && textBox2->Text->Length != 0 && textBox3->Text->Length != 0 && IsIntegersValue(str.marshal_as<string>(textBox1->Text))&& IsIntegersValue(str.marshal_as<string>(textBox2->Text)))
				{
					if (System::Convert::ToInt64(textBox1->Text) <= 4 && System::Convert::ToInt64(textBox2->Text) <= 6 && (System::Convert::ToInt64(textBox1->Text) > 0 || System::Convert::ToInt64(textBox2->Text) > 0))
					{
						trainObj->AddPassengersQuantity(trainObj->GetEngine(),idOfPassengers,System::Convert::ToInt64(textBox1->Text),System::Convert::ToInt64(textBox2->Text),str.marshal_as<string>(textBox3->Text));
						this->Hide();
						if (System::Convert::ToInt64(textBox1->Text)>0 && System::Convert::ToInt64(textBox1->Text)<=4)
							adults=new Adult[System::Convert::ToInt64(textBox1->Text)];
						if (System::Convert::ToInt64(textBox2->Text)>0 && System::Convert::ToInt64(textBox2->Text)<=6)
							kids=new Kid[System::Convert::ToInt64(textBox2->Text)];
						if (System::Convert::ToInt64(textBox1->Text) <=4)
						{
							while (counter < System::Convert::ToInt64(textBox1->Text))
							{
								adultsInfo ^ formOperner= gcnew adultsInfo(adults,counter);
								formOperner->ShowDialog();
								counter++;
							}
						}
						counter=0;
						if (System::Convert::ToInt64(textBox1->Text) <=6)
						{
							while (counter < System::Convert::ToInt64(textBox2->Text))
							{
								kidsInfo ^ formOpener  = gcnew kidsInfo(kids,counter);
								formOpener->ShowDialog();
								counter++;
							}
						}
						trainObj->AddPassengers(idOfPassengers,trainObj->GetEngine(),adults,kids,Convert::ToInt64(textBox1->Text),Convert::ToInt64(textBox2->Text),str.marshal_as<string>(textBox3->Text));
					}
				}
		 }
};
}
