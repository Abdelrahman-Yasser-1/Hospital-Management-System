#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<stdio.h>
#include<msclr\marshal_cppstd.h>
namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_editdata;
	protected:

	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_p_id;
	private: System::Windows::Forms::TextBox^  txt_p_name;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txt_p_password;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_p_age;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_p_gender;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txt_p_address;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txt_p_disease;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  txt_id;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

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
			this->btn_editdata = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_p_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_p_password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_p_age = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_p_gender = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_p_address = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_p_disease = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_editdata
			// 
			this->btn_editdata->BackColor = System::Drawing::Color::IndianRed;
			this->btn_editdata->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_editdata->FlatAppearance->BorderSize = 0;
			this->btn_editdata->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editdata->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_editdata->ForeColor = System::Drawing::Color::White;
			this->btn_editdata->Location = System::Drawing::Point(294, 553);
			this->btn_editdata->Name = L"btn_editdata";
			this->btn_editdata->Size = System::Drawing::Size(179, 44);
			this->btn_editdata->TabIndex = 0;
			this->btn_editdata->Text = L"Edit data";
			this->btn_editdata->UseVisualStyleBackColor = false;
			this->btn_editdata->Click += gcnew System::EventHandler(this, &MyForm3::btn_editdata_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(123, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(68, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(576, 40);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Welcome To HospitammanagementSystem";
			// 
			// txt_p_id
			// 
			this->txt_p_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_id->Location = System::Drawing::Point(231, 100);
			this->txt_p_id->Name = L"txt_p_id";
			this->txt_p_id->Size = System::Drawing::Size(367, 30);
			this->txt_p_id->TabIndex = 3;
			// 
			// txt_p_name
			// 
			this->txt_p_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_name->Location = System::Drawing::Point(231, 156);
			this->txt_p_name->Name = L"txt_p_name";
			this->txt_p_name->Size = System::Drawing::Size(367, 30);
			this->txt_p_name->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(123, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nmae";
			// 
			// txt_p_password
			// 
			this->txt_p_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_password->Location = System::Drawing::Point(231, 215);
			this->txt_p_password->Name = L"txt_p_password";
			this->txt_p_password->Size = System::Drawing::Size(367, 30);
			this->txt_p_password->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(123, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password";
			// 
			// txt_p_age
			// 
			this->txt_p_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_age->Location = System::Drawing::Point(231, 274);
			this->txt_p_age->Name = L"txt_p_age";
			this->txt_p_age->Size = System::Drawing::Size(367, 30);
			this->txt_p_age->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(123, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Age";
			// 
			// txt_p_gender
			// 
			this->txt_p_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_gender->Location = System::Drawing::Point(231, 342);
			this->txt_p_gender->Name = L"txt_p_gender";
			this->txt_p_gender->Size = System::Drawing::Size(367, 30);
			this->txt_p_gender->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(123, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 24);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Gender";
			// 
			// txt_p_address
			// 
			this->txt_p_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_address->Location = System::Drawing::Point(231, 404);
			this->txt_p_address->Name = L"txt_p_address";
			this->txt_p_address->Size = System::Drawing::Size(367, 30);
			this->txt_p_address->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(123, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Address";
			// 
			// txt_p_disease
			// 
			this->txt_p_disease->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_p_disease->Location = System::Drawing::Point(231, 465);
			this->txt_p_disease->Name = L"txt_p_disease";
			this->txt_p_disease->Size = System::Drawing::Size(367, 30);
			this->txt_p_disease->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(123, 468);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 24);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Disease";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->txt_id);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(757, 636);
			this->panel1->TabIndex = 16;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm3::panel1_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(160, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(438, 120);
			this->label11->TabIndex = 4;
			this->label11->Text = L"           Welcome Patient\r\nIn Hospital Management System\r\n\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->label10->Location = System::Drawing::Point(318, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 24);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Please enter id ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(304, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 47);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_id->Location = System::Drawing::Point(251, 271);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(257, 30);
			this->txt_id->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(221, 274);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ID";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(757, 636);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_editdata);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_p_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_p_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_p_password);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_p_age);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_p_gender);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_p_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_p_disease);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btn_editdata_Click(System::Object^  sender, System::EventArgs^  e) {

			 int i = 0;
			 StreamReader file1("Patients_Data.txt", true);
			 StreamWriter temb1("temb.txt", true);
			 System::String^line = "";

			 do
			 {
				 line = file1.ReadLine();
				 if (!String::IsNullOrEmpty(line))
				 {
					 cli::array<String^>^ arrline = line->Split(';');
					 if (arrline[0] == txt_id->Text)
					 {
						 continue;
					 }
					 else
					 {
						 temb1.WriteLine(line);
					 }
				 }
				 else if (String::IsNullOrEmpty(line))
				 {
					 break;
				 }
			 } while (!String::IsNullOrEmpty(line));
			 file1.Close();
			 temb1.Close();
			 DeleteFile(L"Patients_Data.txt");
			 i++;
			 StreamWriter file2("Patients_Data.txt", true);
			 StreamReader temb2("temb.txt", true);
			 do
			 {
				 line = temb2.ReadLine();
				 if (!String::IsNullOrEmpty(line))
				 {
					 file2.WriteLine(line);
				 }
				 else if (String::IsNullOrEmpty(line))
				 {
					 break;
				 }
			 } while (!String::IsNullOrEmpty(line));
			 String^edit = txt_p_id->Text + ";"
				 + txt_p_name->Text + ";"
				 + txt_p_age->Text + ";"
				 + txt_p_gender->Text + ";"
				 + txt_p_address->Text + ";"
				 + txt_p_disease->Text;
			 file2.WriteLine(edit);
			 file2.Close();
			 temb2.Close();
			 DeleteFile(L"temb.txt");
			 MessageBox::Show("Done..");
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (txt_id->Text->Trim() != "")
			 {

				 StreamReader file("Patients_Data.txt", true);
				 System::String^line = "";
				 do
				 {
					 line = file.ReadLine();
					 if (!String::IsNullOrEmpty(line))
					 {
						 cli::array<String^>^ arrline = line->Split(';');
						 if (arrline[0] == txt_id->Text)
						 {
							 panel1->Visible = false;
							 txt_p_id->Text = arrline[0];
							 txt_p_name->Text = arrline[1];
							 txt_p_age->Text = arrline[2];
							 txt_p_gender->Text = arrline[3];
							 txt_p_address->Text = arrline[4];
							 txt_p_disease->Text = arrline[5];
							 file.Close();
							 break;
						 }
						 else if (String::IsNullOrEmpty(line))
						 {
							 break;
						 }
					 }
				 } while (!String::IsNullOrEmpty(line));

				 file.Close();
			 }
			 else if (txt_id->Text->Trim() == "")
			 {
				 MessageBox::Show("Enter your id");
			 }
			 else
			 {
				 MessageBox::Show("Make sure from your id.");
			 }
}
};
}
