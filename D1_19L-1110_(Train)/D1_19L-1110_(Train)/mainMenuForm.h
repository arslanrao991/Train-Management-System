#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "bogieIDForm.h"
#include "Train.h"
#include "trainBogies.h"
namespace D1_19L1110_Train {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainMenuForm
	/// </summary>
	public ref class mainMenuForm : public System::Windows::Forms::Form
	{
		Train *train;
	public:
		mainMenuForm(void)
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
		~mainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Button^  button7;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(267, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TRAIN EXPRESS";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(47, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Bogie";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainMenuForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(47, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Remove Bogie";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainMenuForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(47, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Add Passesngers";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainMenuForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(47, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Remove Passengers";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &mainMenuForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(47, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Print Train";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &mainMenuForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Location = System::Drawing::Point(47, 277);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Print Bogie";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &mainMenuForm::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(302, 73);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(440, 192);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &mainMenuForm::listBox1_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(661, 370);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &mainMenuForm::button7_Click);
			// 
			// mainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 410);
			this->ControlBox = false;
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"mainMenuForm";
			this->Text = L"mainMenuForm";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &mainMenuForm::mainMenuForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainMenuForm_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 train=new Train;
				 Bogie* bogie=new Bogie; //This is adding engine
				 train->AddBogie(bogie,train->GetEngine());
				 listBox1->Items->Add("1- Add Bogie: Add the bogie if it is not exists.");
				 listBox1->Items->Add("2- Remove Bogie: Remove the given bogie if it ");
				 listBox1->Items->Add("    exists.");
				 listBox1->Items->Add("3- Add Passengers: Reserve the bogie for one");
				 listBox1->Items->Add("    family if it has not reserved by any other.");
				 listBox1->Items->Add("4- Remove Passengers: Remove the outgoing passengers");
				 listBox1->Items->Add("    from given bogie.");
				 listBox1->Items->Add("5- Print Train: Shows all bogies ID and thier");
				 listBox1->Items->Add("    current status.");
				 listBox1->Items->Add("6- Print Bogie: Print the details of given bogie.");
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Add Bogie
			 bogieIDForm ^ formOpener = gcnew bogieIDForm(train,1);
			 formOpener->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Remove Bogie
			 bogieIDForm ^ formOpener = gcnew bogieIDForm(train,0);
			 formOpener->ShowDialog();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Add Passenger
			 bogieIDForm ^ formOpener = gcnew bogieIDForm(train,-1);
			 formOpener->ShowDialog();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //print train
			 trainBogies ^ formOpener = gcnew trainBogies(train);
			 formOpener->ShowDialog();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Exit button
			delete train;
			this->Close();
		 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Print Bogie
			 bogieIDForm ^ formOpener = gcnew bogieIDForm(train,-2);
			 formOpener->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Remove Passengers
			 bogieIDForm ^ formOpener = gcnew bogieIDForm(train,-3);
			 formOpener->ShowDialog();
		 }
};
}
