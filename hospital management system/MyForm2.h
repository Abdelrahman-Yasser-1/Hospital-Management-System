#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<stdio.h>
#include<msclr\marshal_cppstd.h>

void editdata(void);
void viewpatients(void);

namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main_dr;
	protected:

	protected:
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btn_view_patients;

	private: System::Windows::Forms::Button^  btn_edit_data;

	private: System::Windows::Forms::Panel^  panel_doctor;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  txt_id;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel_viewpatients;
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Panel^  panel_editdata;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  txt_dr_gender;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txt_dr_specialization;
	private: System::Windows::Forms::TextBox^  txt_dr_address;
	private: System::Windows::Forms::TextBox^  txt_dr_age;
	private: System::Windows::Forms::TextBox^  txt_dr_password;
	private: System::Windows::Forms::TextBox^  txt_dr_id;
	private: System::Windows::Forms::TextBox^  txt_dr_name;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_genger;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_disease;

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
			this->panel_main_dr = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_view_patients = (gcnew System::Windows::Forms::Button());
			this->btn_edit_data = (gcnew System::Windows::Forms::Button());
			this->panel_doctor = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_viewpatients = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->patient_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_genger = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_disease = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_editdata = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txt_dr_gender = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_dr_specialization = (gcnew System::Windows::Forms::TextBox());
			this->txt_dr_address = (gcnew System::Windows::Forms::TextBox());
			this->txt_dr_age = (gcnew System::Windows::Forms::TextBox());
			this->txt_dr_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_dr_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_dr_name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel_main_dr->SuspendLayout();
			this->panel_doctor->SuspendLayout();
			this->panel_viewpatients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_editdata->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_main_dr
			// 
			this->panel_main_dr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel_main_dr->Controls->Add(this->panel3);
			this->panel_main_dr->Controls->Add(this->panel2);
			this->panel_main_dr->Controls->Add(this->btn_view_patients);
			this->panel_main_dr->Controls->Add(this->btn_edit_data);
			this->panel_main_dr->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_main_dr->Location = System::Drawing::Point(0, 0);
			this->panel_main_dr->Name = L"panel_main_dr";
			this->panel_main_dr->Size = System::Drawing::Size(294, 636);
			this->panel_main_dr->TabIndex = 1;
			this->panel_main_dr->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(22, 312);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(6, 57);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(22, 222);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(6, 57);
			this->panel2->TabIndex = 1;
			// 
			// btn_view_patients
			// 
			this->btn_view_patients->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_view_patients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_view_patients->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_view_patients->ForeColor = System::Drawing::Color::White;
			this->btn_view_patients->Location = System::Drawing::Point(34, 312);
			this->btn_view_patients->Name = L"btn_view_patients";
			this->btn_view_patients->Size = System::Drawing::Size(239, 57);
			this->btn_view_patients->TabIndex = 1;
			this->btn_view_patients->Text = L"View patients";
			this->btn_view_patients->UseVisualStyleBackColor = true;
			this->btn_view_patients->Click += gcnew System::EventHandler(this, &MyForm2::btn_view_patients_Click);
			// 
			// btn_edit_data
			// 
			this->btn_edit_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_edit_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_edit_data->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_edit_data->ForeColor = System::Drawing::Color::White;
			this->btn_edit_data->Location = System::Drawing::Point(34, 222);
			this->btn_edit_data->Name = L"btn_edit_data";
			this->btn_edit_data->Size = System::Drawing::Size(239, 57);
			this->btn_edit_data->TabIndex = 0;
			this->btn_edit_data->Text = L"Edit data";
			this->btn_edit_data->UseVisualStyleBackColor = true;
			this->btn_edit_data->Click += gcnew System::EventHandler(this, &MyForm2::btn_edit_data_Click);
			// 
			// panel_doctor
			// 
			this->panel_doctor->Controls->Add(this->label3);
			this->panel_doctor->Controls->Add(this->button3);
			this->panel_doctor->Controls->Add(this->txt_id);
			this->panel_doctor->Controls->Add(this->label2);
			this->panel_doctor->Controls->Add(this->label1);
			this->panel_doctor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_doctor->Location = System::Drawing::Point(0, 0);
			this->panel_doctor->Name = L"panel_doctor";
			this->panel_doctor->Size = System::Drawing::Size(951, 636);
			this->panel_doctor->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(469, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Please enter id to show available options\r\n";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(518, 431);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Check";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_id->Location = System::Drawing::Point(483, 343);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(281, 30);
			this->txt_id->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(454, 346);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(407, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(438, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"           Welcome Doctor\r\nIn Hospital Management System\r\n\r\n";
			// 
			// panel_viewpatients
			// 
			this->panel_viewpatients->BackColor = System::Drawing::Color::White;
			this->panel_viewpatients->Controls->Add(this->dataGridView1);
			this->panel_viewpatients->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_viewpatients->Location = System::Drawing::Point(0, 0);
			this->panel_viewpatients->Name = L"panel_viewpatients";
			this->panel_viewpatients->Size = System::Drawing::Size(951, 636);
			this->panel_viewpatients->TabIndex = 3;
			this->panel_viewpatients->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->patient_id,
					this->patient_name, this->patient_age, this->patient_genger, this->patient_address, this->patient_disease
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(341, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(610, 636);
			this->dataGridView1->TabIndex = 0;
			// 
			// patient_id
			// 
			this->patient_id->HeaderText = L"Id";
			this->patient_id->Name = L"patient_id";
			// 
			// patient_name
			// 
			this->patient_name->HeaderText = L"Name";
			this->patient_name->Name = L"patient_name";
			// 
			// patient_age
			// 
			this->patient_age->HeaderText = L"Age";
			this->patient_age->Name = L"patient_age";
			// 
			// patient_genger
			// 
			this->patient_genger->HeaderText = L"Gender";
			this->patient_genger->Name = L"patient_genger";
			// 
			// patient_address
			// 
			this->patient_address->HeaderText = L"Address";
			this->patient_address->Name = L"patient_address";
			// 
			// patient_disease
			// 
			this->patient_disease->HeaderText = L"Disease";
			this->patient_disease->Name = L"patient_disease";
			// 
			// panel_editdata
			// 
			this->panel_editdata->BackColor = System::Drawing::Color::White;
			this->panel_editdata->Controls->Add(this->button6);
			this->panel_editdata->Controls->Add(this->txt_dr_gender);
			this->panel_editdata->Controls->Add(this->label8);
			this->panel_editdata->Controls->Add(this->txt_dr_specialization);
			this->panel_editdata->Controls->Add(this->txt_dr_address);
			this->panel_editdata->Controls->Add(this->txt_dr_age);
			this->panel_editdata->Controls->Add(this->txt_dr_password);
			this->panel_editdata->Controls->Add(this->txt_dr_id);
			this->panel_editdata->Controls->Add(this->txt_dr_name);
			this->panel_editdata->Controls->Add(this->label7);
			this->panel_editdata->Controls->Add(this->label6);
			this->panel_editdata->Controls->Add(this->label5);
			this->panel_editdata->Controls->Add(this->label4);
			this->panel_editdata->Controls->Add(this->label9);
			this->panel_editdata->Controls->Add(this->label10);
			this->panel_editdata->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_editdata->Location = System::Drawing::Point(0, 0);
			this->panel_editdata->Name = L"panel_editdata";
			this->panel_editdata->Size = System::Drawing::Size(951, 636);
			this->panel_editdata->TabIndex = 4;
			this->panel_editdata->Visible = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::IndianRed;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::IndianRed;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(518, 518);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(220, 41);
			this->button6->TabIndex = 47;
			this->button6->Text = L"Edit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// txt_dr_gender
			// 
			this->txt_dr_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_dr_gender->Location = System::Drawing::Point(533, 399);
			this->txt_dr_gender->Name = L"txt_dr_gender";
			this->txt_dr_gender->Size = System::Drawing::Size(359, 30);
			this->txt_dr_gender->TabIndex = 46;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(352, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 23);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Specialization";
			// 
			// txt_dr_specialization
			// 
			this->txt_dr_specialization->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_specialization->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_specialization->Location = System::Drawing::Point(533, 332);
			this->txt_dr_specialization->Name = L"txt_dr_specialization";
			this->txt_dr_specialization->Size = System::Drawing::Size(359, 30);
			this->txt_dr_specialization->TabIndex = 44;
			// 
			// txt_dr_address
			// 
			this->txt_dr_address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_address->Location = System::Drawing::Point(533, 273);
			this->txt_dr_address->Name = L"txt_dr_address";
			this->txt_dr_address->Size = System::Drawing::Size(359, 30);
			this->txt_dr_address->TabIndex = 43;
			// 
			// txt_dr_age
			// 
			this->txt_dr_age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_age->Location = System::Drawing::Point(533, 214);
			this->txt_dr_age->Name = L"txt_dr_age";
			this->txt_dr_age->Size = System::Drawing::Size(359, 30);
			this->txt_dr_age->TabIndex = 42;
			// 
			// txt_dr_password
			// 
			this->txt_dr_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_password->Location = System::Drawing::Point(533, 155);
			this->txt_dr_password->Name = L"txt_dr_password";
			this->txt_dr_password->Size = System::Drawing::Size(359, 30);
			this->txt_dr_password->TabIndex = 41;
			// 
			// txt_dr_id
			// 
			this->txt_dr_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_id->Location = System::Drawing::Point(533, 96);
			this->txt_dr_id->Name = L"txt_dr_id";
			this->txt_dr_id->Size = System::Drawing::Size(359, 30);
			this->txt_dr_id->TabIndex = 40;
			// 
			// txt_dr_name
			// 
			this->txt_dr_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_name->Location = System::Drawing::Point(533, 37);
			this->txt_dr_name->Name = L"txt_dr_name";
			this->txt_dr_name->Size = System::Drawing::Size(359, 30);
			this->txt_dr_name->TabIndex = 39;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(352, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 23);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Address";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(352, 399);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 23);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(352, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 23);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Age";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(352, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 23);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Password";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(352, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 23);
			this->label9->TabIndex = 34;
			this->label9->Text = L"ID";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(352, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 23);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Name ";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(951, 636);
			this->Controls->Add(this->panel_main_dr);
			this->Controls->Add(this->panel_doctor);
			this->Controls->Add(this->panel_editdata);
			this->Controls->Add(this->panel_viewpatients);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Doctor";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel_main_dr->ResumeLayout(false);
			this->panel_doctor->ResumeLayout(false);
			this->panel_doctor->PerformLayout();
			this->panel_viewpatients->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_editdata->ResumeLayout(false);
			this->panel_editdata->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void editdata(void)
		{
			int i = 0;
			StreamReader file1("Doctors_Data.txt", true);
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
			DeleteFile(L"Doctors_Data.txt");
			i++;
			StreamWriter file2("Doctors_Data.txt", true);
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
			String^edit = txt_dr_id->Text + ";"
				+ txt_dr_name->Text + ";"
				+ txt_dr_age->Text + ";"
				+ txt_dr_gender->Text + ";"
				+ txt_dr_address->Text + ";"
				+ txt_dr_specialization->Text;
			file2.WriteLine(edit);
			file2.Close();
			temb2.Close();
			DeleteFile(L"temb.txt");
			MessageBox::Show("Done..");
		}
		void viewpatients(void)
		{
			StreamReader file("Patients_Data.txt");
			System::String^ line;
			for (int i = 0;; i++)
			{
				line = file.ReadLine();

				if (!String::IsNullOrEmpty(line))
				{
					//cli::array<String^>^ arrline = line->Split(';');
					array<String^>^arrline = line->Split(';');

					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = arrline[0];
					dataGridView1->Rows[i]->Cells[1]->Value = arrline[1];
					dataGridView1->Rows[i]->Cells[2]->Value = arrline[2];
					dataGridView1->Rows[i]->Cells[3]->Value = arrline[3];
					dataGridView1->Rows[i]->Cells[4]->Value = arrline[4];
					dataGridView1->Rows[i]->Cells[5]->Value = arrline[5];
				}
				else if (String::IsNullOrEmpty(line))
				{
					break;
				}
			}
			file.Close();
		}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txt_id->Text->Trim() != "")
				 {

					 StreamReader file("Doctors_Data.txt", true);
					 System::String^line = "";
					 do
					 {
						 line = file.ReadLine();
						 if (!String::IsNullOrEmpty(line))
						 {
							 cli::array<String^>^ arrline = line->Split(';');
							 if (arrline[0] == txt_id->Text)
							 {
								 panel_main_dr->Visible = true;
								 txt_dr_id->Text = arrline[0];
								 txt_dr_name->Text = arrline[1];
								 txt_dr_age->Text = arrline[2];
								 txt_dr_gender->Text = arrline[3];
								 txt_dr_address->Text = arrline[4];
								 txt_dr_specialization->Text = arrline[5];
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
private: System::Void btn_edit_data_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel_doctor->Visible = false;
			 panel_viewpatients->Visible = false;
			 panel_editdata->Visible = true;
			 btn_view_patients->ForeColor = System::Drawing::Color::White;
			 btn_edit_data->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel3->BackColor = System::Drawing::Color::White;
			 this->panel2->BackColor = System::Drawing::Color::IndianRed;

}
private: System::Void btn_view_patients_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel_doctor->Visible = false;
			 panel_editdata->Visible = false;
			 panel_viewpatients->Visible = true;
			 btn_edit_data->ForeColor = System::Drawing::Color::White;
			 btn_view_patients->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel2->BackColor = System::Drawing::Color::White;
			 this->panel3->BackColor = System::Drawing::Color::IndianRed;
			 /**************/
			 viewpatients();

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 editdata();
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
