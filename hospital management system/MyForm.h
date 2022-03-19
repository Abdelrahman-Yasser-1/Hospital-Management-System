#pragma once
#include <iostream>
#include<string>
#include<string.h>
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"MyForm4.h"
#include"MyForm5.h"
#include"MyForm6.h"

//Functions
bool login(System::String^ filename);

namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_login;
	protected:
	private: System::Windows::Forms::Button^  btn_login;
	private: System::Windows::Forms::Button^  btn_exit;
	private: System::Windows::Forms::Button^  btn_regest;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_login_pass;
	private: System::Windows::Forms::TextBox^  txt_login_id;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel_regest;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
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
			this->panel_login = (gcnew System::Windows::Forms::Panel());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_regest = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_login_pass = (gcnew System::Windows::Forms::TextBox());
			this->txt_login_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_regest = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_login->SuspendLayout();
			this->panel_regest->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_login
			// 
			this->panel_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel_login->Controls->Add(this->btn_login);
			this->panel_login->Controls->Add(this->btn_exit);
			this->panel_login->Controls->Add(this->btn_regest);
			this->panel_login->Controls->Add(this->label5);
			this->panel_login->Controls->Add(this->txt_login_pass);
			this->panel_login->Controls->Add(this->txt_login_id);
			this->panel_login->Controls->Add(this->label4);
			this->panel_login->Controls->Add(this->label3);
			this->panel_login->Controls->Add(this->label2);
			this->panel_login->Controls->Add(this->label1);
			this->panel_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_login->Location = System::Drawing::Point(0, 0);
			this->panel_login->Name = L"panel_login";
			this->panel_login->Size = System::Drawing::Size(382, 707);
			this->panel_login->TabIndex = 1;
			// 
			// btn_login
			// 
			this->btn_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->ForeColor = System::Drawing::Color::White;
			this->btn_login->Location = System::Drawing::Point(63, 486);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(248, 37);
			this->btn_login->TabIndex = 10;
			this->btn_login->Text = L"login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &MyForm::btn_login_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exit->FlatAppearance->BorderSize = 0;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::Color::White;
			this->btn_exit->Location = System::Drawing::Point(326, 3);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(57, 34);
			this->btn_exit->TabIndex = 9;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// btn_regest
			// 
			this->btn_regest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_regest->FlatAppearance->BorderSize = 0;
			this->btn_regest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_regest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_regest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_regest->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_regest->ForeColor = System::Drawing::Color::IndianRed;
			this->btn_regest->Location = System::Drawing::Point(182, 556);
			this->btn_regest->Name = L"btn_regest";
			this->btn_regest->Size = System::Drawing::Size(78, 42);
			this->btn_regest->TabIndex = 8;
			this->btn_regest->Text = L"regist";
			this->btn_regest->UseVisualStyleBackColor = true;
			this->btn_regest->Click += gcnew System::EventHandler(this, &MyForm::btn_regest_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(59, 569);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"New member\?";
			// 
			// txt_login_pass
			// 
			this->txt_login_pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_login_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_login_pass->Location = System::Drawing::Point(63, 396);
			this->txt_login_pass->Name = L"txt_login_pass";
			this->txt_login_pass->PasswordChar = '*';
			this->txt_login_pass->Size = System::Drawing::Size(248, 30);
			this->txt_login_pass->TabIndex = 5;
			// 
			// txt_login_id
			// 
			this->txt_login_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_login_id->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_login_id->Location = System::Drawing::Point(63, 297);
			this->txt_login_id->Name = L"txt_login_id";
			this->txt_login_id->Size = System::Drawing::Size(248, 30);
			this->txt_login_id->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(57, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(57, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(153, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-2, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"               Welcome To \r\n Hospital Management System";
			// 
			// panel_regest
			// 
			this->panel_regest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel_regest->Controls->Add(this->button5);
			this->panel_regest->Controls->Add(this->label6);
			this->panel_regest->Controls->Add(this->button3);
			this->panel_regest->Controls->Add(this->button1);
			this->panel_regest->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_regest->Location = System::Drawing::Point(0, 0);
			this->panel_regest->Name = L"panel_regest";
			this->panel_regest->Size = System::Drawing::Size(382, 707);
			this->panel_regest->TabIndex = 11;
			this->panel_regest->Visible = false;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(94, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 40);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Registration";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(107, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 54);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Patient";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(107, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Manager";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 707);
			this->Controls->Add(this->panel_login);
			this->Controls->Add(this->panel_regest);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel_login->ResumeLayout(false);
			this->panel_login->PerformLayout();
			this->panel_regest->ResumeLayout(false);
			this->panel_regest->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Functions
		/**********/
		/*A function that check id and password of the person who login by giving it 
		the file name in which id and password will be searched*/
		bool login(System::String^ filename)
		{
			bool found = false;
			if (txt_login_id->Text->Trim() != "" & txt_login_pass->Text->Trim() != "")
			{
				StreamReader file(filename,true);
				System::String^line = "";

				do
				{
					line = file.ReadLine();
					if (!String::IsNullOrEmpty(line))
					{
						cli::array<String^>^ arrline = line->Split(';');
						if (arrline[0] == txt_login_id->Text & arrline[1] == txt_login_pass->Text)
						{
							found = true;
							break;
						}

					}
				} while (!String::IsNullOrEmpty(line));
				file.Close();
			}
			return found;
		}

private: System::Void btn_regest_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel_login->Visible = false;
				 panel_regest->Visible = true;
	}
private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel_login->Visible = true;
			 panel_regest->Visible = false;
}
private: System::Void btn_login_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (login("Doctors_id_pass.txt"))
			 {
				 MyForm2^ form = gcnew MyForm2();
				 MyForm::Hide();
				 form->Show();
			 }
			 else if (login("Manager_id_pass.txt"))
			 {
				 MyForm1^ form = gcnew MyForm1();
				 MyForm::Hide();
				 form->Show();
			 }
			 else if (login("Patients_id_pass.txt"))
			 {
				 MyForm3^ form = gcnew MyForm3();
				 MyForm::Hide();
				 form->Show();
			 }
			 else if (login("nurse_id_pass.txt"))
			 {
				 MyForm4^ form = gcnew MyForm4();
				 MyForm::Hide();
				 form->Show();
			 }
			 else if (txt_login_id->Text == "" || txt_login_pass->Text == "")
			 {
				 MessageBox::Show("Enter your id & password");
			 }
			 else if ((login("Manager_id_pass.txt") == false) & (login("Doctors_id_pass.txt") == false)& (login("Patients_id_pass.txt") == false)& (login("nurse_id_pass.txt") == false))
			 {
				 MessageBox::Show("Make sure from your id and password");
			 }
			
			 
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm5^ form = gcnew MyForm5();
			 MyForm::Hide();
			 form->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm6^ form = gcnew MyForm6();
			 MyForm::Hide();
			 form->Show();
}
};
}
