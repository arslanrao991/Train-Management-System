#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "bogieIDForm.h"
#include "Train.h"
#include <ctime>
#include "adultsInfo.h"
#include "passengersDetails.h"
#include "bogieDetails.h"

namespace D1_19L1110_Train {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for bogieIDForm
	/// </summary>
	public ref class bogieIDForm : public System::Windows::Forms::Form
	{
		Train *trainObj;
		int takeTempInt;
		Bogie* tempBogie;
	private: System::Windows::Forms::TextBox^  textBox2;

		int userChoice; //1 for add id/0 for remove id/-1 for Add Passenger/-2 for Print Bogie/-3 Remove Passenger
	public:
		bogieIDForm(Train* train,int choice)
		{
			trainObj=train;
			userChoice=choice;
			InitializeComponent();
			if (choice == 0)
				label1->Text="Remove Bogie";
			else if (choice == -1)
				label1->Text="Add Passengers";
			else if (choice == -2)
				label1->Text="Bogie Details";
			else if (choice == -3)
				label1->Text="Remove Passengers";
			//
			//TODO: Add the constructor code here
			//
		}
		inline bool IsIntegersValue(string data) //To check if the id consist of valid int or not
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
		~bogieIDForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label2;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Bogie";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &bogieIDForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &bogieIDForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(299, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &bogieIDForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Bogie ID:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(52, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(293, 17);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &bogieIDForm::textBox2_TextChanged);
			// 
			// bogieIDForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 193);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"bogieIDForm";
			this->Text = L"BOGIE ID";
			this->Load += gcnew System::EventHandler(this, &bogieIDForm::bogieIDForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bogieIDForm_Load(System::Object^  sender, System::EventArgs^  e) 
			 {}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //label1
			 }
	
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //status label
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //submit button
			 textBox2->Clear();
			 msclr::interop::marshal_context str;
			 if (IsIntegersValue(str.marshal_as<string>(textBox1->Text)) && textBox1->Text->Length != 0 && System::Convert::ToInt32(textBox1->Text) != 0)
			 {
				 if (userChoice ==1)	//Add Bogie
				 {
					takeTempInt=System::Convert::ToInt32(textBox1->Text);
					if (!trainObj->SearchBogie(trainObj->GetEngine(),takeTempInt))
					{
						Bogie *bogie=new Bogie(takeTempInt);
						trainObj->AddBogie(bogie,trainObj->GetEngine());
					textBox2->Text =("Bogie has been Added");
					}
					else
					{
						textBox2->Text =("Bogie already exists!");
					}
				 }
				 else if (userChoice == 0)	//Remove Bogie
				 {
					takeTempInt=System::Convert::ToInt32(textBox1->Text);
					if (trainObj->SearchBogie(trainObj->GetEngine(),takeTempInt) && System::Convert::ToInt32(textBox1->Text) != 10001)
					{
						trainObj->RemoveBogie(trainObj->GetEngine(),takeTempInt);
					textBox2->Text =("Bogie has been Removed");
					}
					else if (System::Convert::ToInt32(textBox1->Text) == 10001)
						textBox2->Text =("You can't remove engine from!");
					else
					{
						textBox2->Text =("Bogie does not exists!");
					}
				 }
				 else if (userChoice == -1)		//Add Passenger
				 {
					takeTempInt=System::Convert::ToInt32(textBox1->Text);
					if (trainObj->SearchBogie(trainObj->GetEngine(),takeTempInt)&& System::Convert::ToInt32(textBox1->Text) != 10001)
					{
						if (trainObj->GetBogie(trainObj->GetEngine(),takeTempInt)->GetFamilyName() == "")
						{
							this->Hide();
							passengersDetails ^ formOpener = gcnew passengersDetails(trainObj,takeTempInt);
							formOpener->ShowDialog();
							this->Close();
						}
						else 
							textBox2->Text =("Another family has already in this bogie!");
					}
					else if (System::Convert::ToInt32(textBox1->Text) == 10001)
					{
						textBox2->Text =("You can't add passenger in engine bogie!");
					}
					else
					{
						textBox2->Text =("Bogie does not exists!");
					}
				 }
				 else if (userChoice == -2)	//Print Bogie
				 {
					takeTempInt=System::Convert::ToInt32(textBox1->Text);
					if (trainObj->SearchBogie(trainObj->GetEngine(),takeTempInt))
					{
						this->Hide();
						bogieDetails ^ formOpener = gcnew bogieDetails(trainObj->GetBogie(trainObj->GetEngine(),takeTempInt));
						formOpener->ShowDialog();
						this->Close();
					}
					else
					{
						textBox2->Text =("Bogie does not exists!");
					}
				 }
				 else if (userChoice == -3)	//Remove Passenger Bogie
				 {
					takeTempInt=System::Convert::ToInt32(textBox1->Text);
					if (trainObj->SearchBogie(trainObj->GetEngine(),takeTempInt))
					{
						if (trainObj->GetBogie(trainObj->GetEngine(),takeTempInt)->GetFamilyName() != "")
						{
							trainObj->RemovePassengers(takeTempInt,trainObj->GetEngine());
							textBox2->Text =("Passengers has been removed!");
						}
						else
						{
							textBox2->Text = "There is no Passenger in this Bogie!";
						}
					}
					else
					{
						textBox2->Text = ("Bogie does not exists!");
					}
				 }
			 }
			 if (textBox1->Text->Length == 0 || !IsIntegersValue(str.marshal_as<string>(textBox1->Text)) || System::Convert::ToInt32(textBox1->Text) == 0)
				 textBox2->Text =("Please enter valid Bogie ID!");
		 }
		 
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 //textBox1
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //textBox2
		 }
};
}
