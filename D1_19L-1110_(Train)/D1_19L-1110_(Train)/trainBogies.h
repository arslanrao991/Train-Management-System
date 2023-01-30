#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "Train.h"

namespace D1_19L1110_Train {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for trainBogies
	/// </summary>
	public ref class trainBogies : public System::Windows::Forms::Form
	{
		Train* trainObj;
		Bogie* tempBogie;
		int bogieCounter;
	private: System::Windows::Forms::ListBox^  listBox1;
	public:
		trainBogies(Train* train)
		{
			trainObj=train;
			tempBogie=train->GetEngine();
			bogieCounter=0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		string IntToStr(int num)
		{
			int bogieCounter,tempNum=num;
			string str;
			if (num == 0)
			{
				str=" 0";
				return str;
			}
			for (int i=0;num!=0;num/=10)
				str+=((num%10)+48);
			str+=' ';
			ReverseStr(str);
			return str;
		}
		void ReverseStr(string& str) 
		{ 
			int n = str.length(); 
			for (int i = 0; i < n / 2; i++) 
				swap(str[i], str[n - i - 1]); 
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~trainBogies()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;





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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(161, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bogies In Train";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(46, 67);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(361, 258);
			this->listBox1->TabIndex = 4;
			// 
			// trainBogies
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 372);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"trainBogies";
			this->Text = L"TRAIN STATUS";
			this->Load += gcnew System::EventHandler(this, &trainBogies::trainBogies_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void trainBogies_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 string tempStr;
				 if (trainObj->totalBogies == 1)
					 listBox1->Items->Add("No bogies attached to this train!");
				 string bogieDetails;
				 String^ outputStr;
				 while (bogieCounter<trainObj->totalBogies-1)
				 {
					 bogieDetails="";
					 bogieDetails+=(bogieCounter+1)+48;
					 bogieDetails+="- Bogie ID = ";
					 bogieDetails+=IntToStr(tempBogie->GetNextBogie()->GetBogieID());
					 bogieDetails+= "	Aults = ";
					 bogieDetails+=IntToStr(tempBogie->GetNextBogie()->GetNoOfAdults());
					 bogieDetails+="	Kids = ";
					 bogieDetails+=IntToStr(tempBogie->GetNextBogie()->GetNoOfKids());
					 tempBogie=tempBogie->GetNextBogie();
					 outputStr = gcnew String(bogieDetails.c_str());
					 listBox1->Items->Add(outputStr);
					 bogieCounter++;
				 }
			 }
};
}
