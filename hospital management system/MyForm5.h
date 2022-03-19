#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
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
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_regist;
	protected:

	private: System::Windows::Forms::TextBox^  txt_m_gender;
	private: System::Windows::Forms::TextBox^  txt_m_address;
	private: System::Windows::Forms::TextBox^  txt_m_age;
	private: System::Windows::Forms::TextBox^  txt_m_password;
	private: System::Windows::Forms::TextBox^  txt_m_id;
	private: System::Windows::Forms::TextBox^  txt_m_name;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
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
			this->btn_regist = (gcnew System::Windows::Forms::Button());
			this->txt_m_gender = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_address = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_age = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_name = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_regist
			// 
			this->btn_regist->BackColor = System::Drawing::Color::IndianRed;
			this->btn_regist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_regist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_regist->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_regist->ForeColor = System::Drawing::Color::White;
			this->btn_regist->Location = System::Drawing::Point(195, 433);
			this->btn_regist->Name = L"btn_regist";
			this->btn_regist->Size = System::Drawing::Size(173, 41);
			this->btn_regist->TabIndex = 0;
			this->btn_regist->Text = L"Regist";
			this->btn_regist->UseVisualStyleBackColor = false;
			this->btn_regist->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// txt_m_gender
			// 
			this->txt_m_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_m_gender->Location = System::Drawing::Point(175, 342);
			this->txt_m_gender->Name = L"txt_m_gender";
			this->txt_m_gender->Size = System::Drawing::Size(359, 30);
			this->txt_m_gender->TabIndex = 56;
			// 
			// txt_m_address
			// 
			this->txt_m_address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_address->Location = System::Drawing::Point(175, 269);
			this->txt_m_address->Name = L"txt_m_address";
			this->txt_m_address->Size = System::Drawing::Size(359, 30);
			this->txt_m_address->TabIndex = 55;
			// 
			// txt_m_age
			// 
			this->txt_m_age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_age->Location = System::Drawing::Point(175, 210);
			this->txt_m_age->Name = L"txt_m_age";
			this->txt_m_age->Size = System::Drawing::Size(359, 30);
			this->txt_m_age->TabIndex = 54;
			// 
			// txt_m_password
			// 
			this->txt_m_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_password->Location = System::Drawing::Point(175, 151);
			this->txt_m_password->Name = L"txt_m_password";
			this->txt_m_password->Size = System::Drawing::Size(359, 30);
			this->txt_m_password->TabIndex = 53;
			// 
			// txt_m_id
			// 
			this->txt_m_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_id->Location = System::Drawing::Point(175, 92);
			this->txt_m_id->Name = L"txt_m_id";
			this->txt_m_id->Size = System::Drawing::Size(359, 30);
			this->txt_m_id->TabIndex = 52;
			// 
			// txt_m_name
			// 
			this->txt_m_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_name->Location = System::Drawing::Point(175, 33);
			this->txt_m_name->Name = L"txt_m_name";
			this->txt_m_name->Size = System::Drawing::Size(359, 30);
			this->txt_m_name->TabIndex = 51;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 269);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 23);
			this->label11->TabIndex = 50;
			this->label11->Text = L"Address";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 342);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 23);
			this->label12->TabIndex = 49;
			this->label12->Text = L"Gender";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(26, 210);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 23);
			this->label13->TabIndex = 48;
			this->label13->Text = L"Age";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(26, 151);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 23);
			this->label14->TabIndex = 47;
			this->label14->Text = L"Password";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(26, 92);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 23);
			this->label15->TabIndex = 46;
			this->label15->Text = L"ID";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(26, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 23);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Name ";
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(572, 517);
			this->Controls->Add(this->txt_m_gender);
			this->Controls->Add(this->txt_m_address);
			this->Controls->Add(this->txt_m_age);
			this->Controls->Add(this->txt_m_password);
			this->Controls->Add(this->txt_m_id);
			this->Controls->Add(this->txt_m_name);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btn_regist);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^manager_data = txt_m_id->Text + ";"
					                 + txt_m_name->Text + ";"
					                 + txt_m_age->Text + ";"
					                 + txt_m_gender->Text + ";"
					                 + txt_m_address->Text + ";"
					                 + txt_m_password->Text;

				 String^manager_ip = txt_m_id->Text + ";"
					               + txt_m_password->Text;

				 StreamWriter doctor("Manager_id_pass.txt", true);
				 doctor.WriteLine(manager_ip);
				 doctor.Close();

				 StreamWriter doctors("Manager_Data.txt", true);
				 doctors.WriteLine(manager_data);
				 doctors.Close();
				 MessageBox::Show("Done");
				// Application::Restart();
	}
	};
}
