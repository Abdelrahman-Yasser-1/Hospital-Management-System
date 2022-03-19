#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<msclr\marshal_cppstd.h>


void regist_patient(void);


namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label11;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_p_name;
	private: System::Windows::Forms::TextBox^  txt_p_id;
	private: System::Windows::Forms::TextBox^  txt_p_password;

	private: System::Windows::Forms::TextBox^  txt_p_age;
	private: System::Windows::Forms::TextBox^  txt_p_address;

	private: System::Windows::Forms::TextBox^  txt_p_gender;
	private: System::Windows::Forms::TextBox^  txt_p_disease;
	private: System::Windows::Forms::Button^  btn_regisr;










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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_p_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_age = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_address = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_gender = (gcnew System::Windows::Forms::TextBox());
			this->txt_p_disease = (gcnew System::Windows::Forms::TextBox());
			this->btn_regisr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(34, 276);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 23);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Address";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(34, 216);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 23);
			this->label13->TabIndex = 54;
			this->label13->Text = L"Age";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(34, 156);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 23);
			this->label14->TabIndex = 53;
			this->label14->Text = L"Password";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(34, 96);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 23);
			this->label15->TabIndex = 52;
			this->label15->Text = L"ID";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(34, 36);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 23);
			this->label16->TabIndex = 51;
			this->label16->Text = L"Name ";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(34, 336);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 23);
			this->label12->TabIndex = 55;
			this->label12->Text = L"Gender";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 396);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 23);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Disease";
			// 
			// txt_p_name
			// 
			this->txt_p_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_name->Location = System::Drawing::Point(237, 29);
			this->txt_p_name->Name = L"txt_p_name";
			this->txt_p_name->Size = System::Drawing::Size(299, 30);
			this->txt_p_name->TabIndex = 58;
			// 
			// txt_p_id
			// 
			this->txt_p_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_id->Location = System::Drawing::Point(237, 89);
			this->txt_p_id->Name = L"txt_p_id";
			this->txt_p_id->Size = System::Drawing::Size(299, 30);
			this->txt_p_id->TabIndex = 59;
			// 
			// txt_p_password
			// 
			this->txt_p_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_password->Location = System::Drawing::Point(237, 149);
			this->txt_p_password->Name = L"txt_p_password";
			this->txt_p_password->Size = System::Drawing::Size(299, 30);
			this->txt_p_password->TabIndex = 60;
			// 
			// txt_p_age
			// 
			this->txt_p_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_age->Location = System::Drawing::Point(237, 209);
			this->txt_p_age->Name = L"txt_p_age";
			this->txt_p_age->Size = System::Drawing::Size(299, 30);
			this->txt_p_age->TabIndex = 61;
			// 
			// txt_p_address
			// 
			this->txt_p_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_address->Location = System::Drawing::Point(237, 269);
			this->txt_p_address->Name = L"txt_p_address";
			this->txt_p_address->Size = System::Drawing::Size(299, 30);
			this->txt_p_address->TabIndex = 62;
			// 
			// txt_p_gender
			// 
			this->txt_p_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_gender->Location = System::Drawing::Point(237, 329);
			this->txt_p_gender->Name = L"txt_p_gender";
			this->txt_p_gender->Size = System::Drawing::Size(299, 30);
			this->txt_p_gender->TabIndex = 63;
			// 
			// txt_p_disease
			// 
			this->txt_p_disease->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_p_disease->Location = System::Drawing::Point(237, 389);
			this->txt_p_disease->Name = L"txt_p_disease";
			this->txt_p_disease->Size = System::Drawing::Size(299, 30);
			this->txt_p_disease->TabIndex = 64;
			// 
			// btn_regisr
			// 
			this->btn_regisr->BackColor = System::Drawing::Color::IndianRed;
			this->btn_regisr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_regisr->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->btn_regisr->ForeColor = System::Drawing::Color::White;
			this->btn_regisr->Location = System::Drawing::Point(212, 481);
			this->btn_regisr->Name = L"btn_regisr";
			this->btn_regisr->Size = System::Drawing::Size(167, 42);
			this->btn_regisr->TabIndex = 65;
			this->btn_regisr->Text = L"Regist";
			this->btn_regisr->UseVisualStyleBackColor = false;
			this->btn_regisr->Click += gcnew System::EventHandler(this, &MyForm6::btn_regisr_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(590, 564);
			this->Controls->Add(this->btn_regisr);
			this->Controls->Add(this->txt_p_disease);
			this->Controls->Add(this->txt_p_gender);
			this->Controls->Add(this->txt_p_address);
			this->Controls->Add(this->txt_p_age);
			this->Controls->Add(this->txt_p_password);
			this->Controls->Add(this->txt_p_id);
			this->Controls->Add(this->txt_p_name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void regist_patient(void)
		{
			String^patient_data = txt_p_id->Text + ";"
				+ txt_p_name->Text + ";"
				+ txt_p_age->Text + ";"
				+ txt_p_gender->Text + ";"
				+ txt_p_address->Text + ";"
				+ txt_p_disease->Text;

			String^patient_ip = txt_p_id->Text + ";"
				+ txt_p_password->Text;

			StreamWriter doctor("Patients_id_pass.txt", true);
			doctor.WriteLine(patient_ip);
			doctor.Close();

			StreamWriter doctors("Patients_Data.txt", true);
			doctors.WriteLine(patient_data);
			doctors.Close();
			MessageBox::Show("Done...");
		}

	private: System::Void btn_regisr_Click(System::Object^  sender, System::EventArgs^  e) {
				 regist_patient();
	}
};
}
