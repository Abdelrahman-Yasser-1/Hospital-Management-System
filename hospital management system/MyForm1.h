#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<stdio.h>
#include<msclr\marshal_cppstd.h>

//functions
/*********/
void addnewdoctor(void);
void viewalldoctors(void);
void removedoctor(void);
void edit_managerdata(void);


namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main_manager;
	protected:
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  manager_panel;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel_addnewdoctor;
	private: System::Windows::Forms::TextBox^  txt_dr_gender;
	private: System::Windows::Forms::Button^  button6;
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
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel_removedoctor;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  btn_remove_doctor;
	private: System::Windows::Forms::TextBox^  txt_dr_id_r;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel_edit_manager_data;
	private: System::Windows::Forms::TextBox^  txt_m_gender;
	private: System::Windows::Forms::Button^  button7;
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
	private: System::Windows::Forms::Panel^  panel_viewalldoctors;

	private: System::Windows::Forms::DataGridView^  dataGridView1;







	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  txt_manager_id;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dr_specialization;












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
			this->panel_main_manager = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->manager_panel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txt_manager_id = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_addnewdoctor = (gcnew System::Windows::Forms::Panel());
			this->txt_dr_gender = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_removedoctor = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_remove_doctor = (gcnew System::Windows::Forms::Button());
			this->txt_dr_id_r = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel_edit_manager_data = (gcnew System::Windows::Forms::Panel());
			this->txt_m_gender = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
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
			this->panel_viewalldoctors = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dr_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dr_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dr_age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dr_gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dr_address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dr_specialization = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_main_manager->SuspendLayout();
			this->manager_panel->SuspendLayout();
			this->panel_addnewdoctor->SuspendLayout();
			this->panel_removedoctor->SuspendLayout();
			this->panel_edit_manager_data->SuspendLayout();
			this->panel_viewalldoctors->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_main_manager
			// 
			this->panel_main_manager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel_main_manager->Controls->Add(this->panel4);
			this->panel_main_manager->Controls->Add(this->panel3);
			this->panel_main_manager->Controls->Add(this->panel1);
			this->panel_main_manager->Controls->Add(this->panel2);
			this->panel_main_manager->Controls->Add(this->button4);
			this->panel_main_manager->Controls->Add(this->button3);
			this->panel_main_manager->Controls->Add(this->button2);
			this->panel_main_manager->Controls->Add(this->button1);
			this->panel_main_manager->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_main_manager->Location = System::Drawing::Point(0, 0);
			this->panel_main_manager->Name = L"panel_main_manager";
			this->panel_main_manager->Size = System::Drawing::Size(294, 636);
			this->panel_main_manager->TabIndex = 2;
			this->panel_main_manager->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(17, 434);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(6, 57);
			this->panel4->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(17, 331);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(6, 57);
			this->panel3->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(17, 227);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(6, 57);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(17, 123);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(6, 57);
			this->panel2->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(29, 434);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(239, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Edit data";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(29, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Remove doctor";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(29, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View all doctors";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(29, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add new doctor";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// manager_panel
			// 
			this->manager_panel->BackColor = System::Drawing::Color::White;
			this->manager_panel->Controls->Add(this->label17);
			this->manager_panel->Controls->Add(this->button8);
			this->manager_panel->Controls->Add(this->txt_manager_id);
			this->manager_panel->Controls->Add(this->label18);
			this->manager_panel->Controls->Add(this->label1);
			this->manager_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->manager_panel->Location = System::Drawing::Point(0, 0);
			this->manager_panel->Name = L"manager_panel";
			this->manager_panel->Size = System::Drawing::Size(951, 636);
			this->manager_panel->TabIndex = 9;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(468, 295);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(306, 24);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Please enter id to show available options\r\n";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::IndianRed;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(519, 427);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(220, 41);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Check";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// txt_manager_id
			// 
			this->txt_manager_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_manager_id->Location = System::Drawing::Point(489, 339);
			this->txt_manager_id->Name = L"txt_manager_id";
			this->txt_manager_id->Size = System::Drawing::Size(281, 30);
			this->txt_manager_id->TabIndex = 6;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(457, 342);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(402, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(438, 80);
			this->label1->TabIndex = 4;
			this->label1->Text = L"           Welcome Manger\r\nIn Hospital Management System";
			// 
			// panel_addnewdoctor
			// 
			this->panel_addnewdoctor->BackColor = System::Drawing::Color::White;
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_gender);
			this->panel_addnewdoctor->Controls->Add(this->button6);
			this->panel_addnewdoctor->Controls->Add(this->label8);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_specialization);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_address);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_age);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_password);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_id);
			this->panel_addnewdoctor->Controls->Add(this->txt_dr_name);
			this->panel_addnewdoctor->Controls->Add(this->label7);
			this->panel_addnewdoctor->Controls->Add(this->label6);
			this->panel_addnewdoctor->Controls->Add(this->label5);
			this->panel_addnewdoctor->Controls->Add(this->label4);
			this->panel_addnewdoctor->Controls->Add(this->label3);
			this->panel_addnewdoctor->Controls->Add(this->label2);
			this->panel_addnewdoctor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_addnewdoctor->Location = System::Drawing::Point(0, 0);
			this->panel_addnewdoctor->Name = L"panel_addnewdoctor";
			this->panel_addnewdoctor->Size = System::Drawing::Size(951, 636);
			this->panel_addnewdoctor->TabIndex = 9;
			this->panel_addnewdoctor->Visible = false;
			// 
			// txt_dr_gender
			// 
			this->txt_dr_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_dr_gender->Location = System::Drawing::Point(533, 394);
			this->txt_dr_gender->Name = L"txt_dr_gender";
			this->txt_dr_gender->Size = System::Drawing::Size(359, 30);
			this->txt_dr_gender->TabIndex = 17;
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
			this->button6->Location = System::Drawing::Point(503, 537);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(220, 41);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Add";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(352, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 23);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Specialization";
			// 
			// txt_dr_specialization
			// 
			this->txt_dr_specialization->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_specialization->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_specialization->Location = System::Drawing::Point(533, 327);
			this->txt_dr_specialization->Name = L"txt_dr_specialization";
			this->txt_dr_specialization->Size = System::Drawing::Size(359, 30);
			this->txt_dr_specialization->TabIndex = 12;
			// 
			// txt_dr_address
			// 
			this->txt_dr_address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_address->Location = System::Drawing::Point(533, 268);
			this->txt_dr_address->Name = L"txt_dr_address";
			this->txt_dr_address->Size = System::Drawing::Size(359, 30);
			this->txt_dr_address->TabIndex = 11;
			// 
			// txt_dr_age
			// 
			this->txt_dr_age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_age->Location = System::Drawing::Point(533, 209);
			this->txt_dr_age->Name = L"txt_dr_age";
			this->txt_dr_age->Size = System::Drawing::Size(359, 30);
			this->txt_dr_age->TabIndex = 9;
			// 
			// txt_dr_password
			// 
			this->txt_dr_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_password->Location = System::Drawing::Point(533, 150);
			this->txt_dr_password->Name = L"txt_dr_password";
			this->txt_dr_password->Size = System::Drawing::Size(359, 30);
			this->txt_dr_password->TabIndex = 8;
			// 
			// txt_dr_id
			// 
			this->txt_dr_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_id->Location = System::Drawing::Point(533, 91);
			this->txt_dr_id->Name = L"txt_dr_id";
			this->txt_dr_id->Size = System::Drawing::Size(359, 30);
			this->txt_dr_id->TabIndex = 7;
			// 
			// txt_dr_name
			// 
			this->txt_dr_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_name->Location = System::Drawing::Point(533, 32);
			this->txt_dr_name->Name = L"txt_dr_name";
			this->txt_dr_name->Size = System::Drawing::Size(359, 30);
			this->txt_dr_name->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(352, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 23);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Address";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(352, 394);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 23);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(352, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 23);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Age";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(352, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(352, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"ID";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(352, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name ";
			// 
			// panel_removedoctor
			// 
			this->panel_removedoctor->BackColor = System::Drawing::Color::White;
			this->panel_removedoctor->Controls->Add(this->label10);
			this->panel_removedoctor->Controls->Add(this->btn_remove_doctor);
			this->panel_removedoctor->Controls->Add(this->txt_dr_id_r);
			this->panel_removedoctor->Controls->Add(this->label9);
			this->panel_removedoctor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_removedoctor->Location = System::Drawing::Point(0, 0);
			this->panel_removedoctor->Name = L"panel_removedoctor";
			this->panel_removedoctor->Size = System::Drawing::Size(951, 636);
			this->panel_removedoctor->TabIndex = 18;
			this->panel_removedoctor->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(405, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(387, 23);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Enter id of doctor that you want to remove \r\n";
			// 
			// btn_remove_doctor
			// 
			this->btn_remove_doctor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_remove_doctor->BackColor = System::Drawing::Color::IndianRed;
			this->btn_remove_doctor->FlatAppearance->BorderSize = 0;
			this->btn_remove_doctor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_remove_doctor->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_remove_doctor->ForeColor = System::Drawing::Color::White;
			this->btn_remove_doctor->Location = System::Drawing::Point(515, 341);
			this->btn_remove_doctor->Name = L"btn_remove_doctor";
			this->btn_remove_doctor->Size = System::Drawing::Size(183, 37);
			this->btn_remove_doctor->TabIndex = 2;
			this->btn_remove_doctor->Text = L"Remove";
			this->btn_remove_doctor->UseVisualStyleBackColor = false;
			this->btn_remove_doctor->Click += gcnew System::EventHandler(this, &MyForm1::btn_remove_doctor_Click);
			// 
			// txt_dr_id_r
			// 
			this->txt_dr_id_r->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_dr_id_r->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dr_id_r->Location = System::Drawing::Point(480, 262);
			this->txt_dr_id_r->Name = L"txt_dr_id_r";
			this->txt_dr_id_r->Size = System::Drawing::Size(249, 30);
			this->txt_dr_id_r->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(436, 264);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 29);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ID";
			// 
			// panel_edit_manager_data
			// 
			this->panel_edit_manager_data->BackColor = System::Drawing::Color::White;
			this->panel_edit_manager_data->Controls->Add(this->txt_m_gender);
			this->panel_edit_manager_data->Controls->Add(this->button7);
			this->panel_edit_manager_data->Controls->Add(this->txt_m_address);
			this->panel_edit_manager_data->Controls->Add(this->txt_m_age);
			this->panel_edit_manager_data->Controls->Add(this->txt_m_password);
			this->panel_edit_manager_data->Controls->Add(this->txt_m_id);
			this->panel_edit_manager_data->Controls->Add(this->txt_m_name);
			this->panel_edit_manager_data->Controls->Add(this->label11);
			this->panel_edit_manager_data->Controls->Add(this->label12);
			this->panel_edit_manager_data->Controls->Add(this->label13);
			this->panel_edit_manager_data->Controls->Add(this->label14);
			this->panel_edit_manager_data->Controls->Add(this->label15);
			this->panel_edit_manager_data->Controls->Add(this->label16);
			this->panel_edit_manager_data->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_edit_manager_data->Location = System::Drawing::Point(0, 0);
			this->panel_edit_manager_data->Name = L"panel_edit_manager_data";
			this->panel_edit_manager_data->Size = System::Drawing::Size(951, 636);
			this->panel_edit_manager_data->TabIndex = 4;
			this->panel_edit_manager_data->Visible = false;
			// 
			// txt_m_gender
			// 
			this->txt_m_gender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt_m_gender->Location = System::Drawing::Point(533, 364);
			this->txt_m_gender->Name = L"txt_m_gender";
			this->txt_m_gender->Size = System::Drawing::Size(359, 30);
			this->txt_m_gender->TabIndex = 32;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::IndianRed;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(513, 493);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(201, 38);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Edit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// txt_m_address
			// 
			this->txt_m_address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_address->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_address->Location = System::Drawing::Point(533, 291);
			this->txt_m_address->Name = L"txt_m_address";
			this->txt_m_address->Size = System::Drawing::Size(359, 30);
			this->txt_m_address->TabIndex = 26;
			// 
			// txt_m_age
			// 
			this->txt_m_age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_age->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_age->Location = System::Drawing::Point(533, 232);
			this->txt_m_age->Name = L"txt_m_age";
			this->txt_m_age->Size = System::Drawing::Size(359, 30);
			this->txt_m_age->TabIndex = 25;
			// 
			// txt_m_password
			// 
			this->txt_m_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_password->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_password->Location = System::Drawing::Point(533, 173);
			this->txt_m_password->Name = L"txt_m_password";
			this->txt_m_password->Size = System::Drawing::Size(359, 30);
			this->txt_m_password->TabIndex = 24;
			// 
			// txt_m_id
			// 
			this->txt_m_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_id->Location = System::Drawing::Point(533, 114);
			this->txt_m_id->Name = L"txt_m_id";
			this->txt_m_id->Size = System::Drawing::Size(359, 30);
			this->txt_m_id->TabIndex = 23;
			// 
			// txt_m_name
			// 
			this->txt_m_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_m_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_name->Location = System::Drawing::Point(533, 55);
			this->txt_m_name->Name = L"txt_m_name";
			this->txt_m_name->Size = System::Drawing::Size(359, 30);
			this->txt_m_name->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(352, 291);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 23);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Address";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(352, 364);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 23);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Gender";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(352, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 23);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Age";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(352, 173);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 23);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Password";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(352, 114);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 23);
			this->label15->TabIndex = 17;
			this->label15->Text = L"ID";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(352, 55);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 23);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Name ";
			// 
			// panel_viewalldoctors
			// 
			this->panel_viewalldoctors->BackColor = System::Drawing::Color::White;
			this->panel_viewalldoctors->Controls->Add(this->dataGridView1);
			this->panel_viewalldoctors->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_viewalldoctors->Location = System::Drawing::Point(0, 0);
			this->panel_viewalldoctors->Name = L"panel_viewalldoctors";
			this->panel_viewalldoctors->Size = System::Drawing::Size(951, 636);
			this->panel_viewalldoctors->TabIndex = 33;
			this->panel_viewalldoctors->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dr_id,
					this->dr_name, this->dr_age, this->dr_gender, this->dr_address, this->dr_specialization
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(316, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(635, 636);
			this->dataGridView1->TabIndex = 0;
			// 
			// dr_id
			// 
			this->dr_id->HeaderText = L"Id";
			this->dr_id->Name = L"dr_id";
			this->dr_id->ReadOnly = true;
			this->dr_id->Width = 200;
			// 
			// dr_name
			// 
			this->dr_name->HeaderText = L"Name";
			this->dr_name->Name = L"dr_name";
			this->dr_name->ReadOnly = true;
			this->dr_name->Width = 200;
			// 
			// dr_age
			// 
			this->dr_age->HeaderText = L"Age";
			this->dr_age->Name = L"dr_age";
			this->dr_age->ReadOnly = true;
			this->dr_age->Width = 50;
			// 
			// dr_gender
			// 
			this->dr_gender->HeaderText = L"Gender";
			this->dr_gender->Name = L"dr_gender";
			// 
			// dr_address
			// 
			this->dr_address->HeaderText = L"Address";
			this->dr_address->Name = L"dr_address";
			this->dr_address->ReadOnly = true;
			this->dr_address->Width = 200;
			// 
			// dr_specialization
			// 
			this->dr_specialization->HeaderText = L"Specialization";
			this->dr_specialization->Name = L"dr_specialization";
			this->dr_specialization->ReadOnly = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(951, 636);
			this->Controls->Add(this->panel_main_manager);
			this->Controls->Add(this->manager_panel);
			this->Controls->Add(this->panel_viewalldoctors);
			this->Controls->Add(this->panel_edit_manager_data);
			this->Controls->Add(this->panel_removedoctor);
			this->Controls->Add(this->panel_addnewdoctor);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Manager";
			this->panel_main_manager->ResumeLayout(false);
			this->manager_panel->ResumeLayout(false);
			this->manager_panel->PerformLayout();
			this->panel_addnewdoctor->ResumeLayout(false);
			this->panel_addnewdoctor->PerformLayout();
			this->panel_removedoctor->ResumeLayout(false);
			this->panel_removedoctor->PerformLayout();
			this->panel_edit_manager_data->ResumeLayout(false);
			this->panel_edit_manager_data->PerformLayout();
			this->panel_viewalldoctors->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Functions
		/**********/
		//A function to add new doctor if his id is didn't exist before. 
		void addnewdoctor(void)
		{
			bool found = false;
			if (txt_dr_id->Text->Trim() != "")
			{
				StreamReader file("Doctors_data.txt");
				System::String^line = "";

				do
				{
					line = file.ReadLine();
					if (!String::IsNullOrEmpty(line))
					{
						cli::array<String^>^ arrline = line->Split(';');
						if (arrline[0] == txt_dr_id->Text)
						{
							found = true;
							break;
						}
						else
						{
							found = false;
						}

					}
				} while (!String::IsNullOrEmpty(line));
				file.Close();
			}
			if (found)
			{
				MessageBox::Show("Try anther id Because this id is exist!");
			}
			else
			{
				String^dr_data = txt_dr_id->Text + ";"
					+ txt_dr_name->Text + ";"
					+ txt_dr_age->Text + ";"
					+ txt_dr_gender->Text + ";"
					+ txt_dr_address->Text + ";"
					+ txt_dr_specialization->Text;

				String^dr_ip = txt_dr_id->Text + ";"
					+ txt_dr_password->Text;

				txt_dr_id->Text = "";
				txt_dr_name->Text = "";
				txt_dr_age->Text = "";
				txt_dr_gender->Text = "";
				txt_dr_address->Text = "";
				txt_dr_specialization->Text = "";
				txt_dr_password->Text = "";

				StreamWriter doctor("Doctors_id_pass.txt", true);
				doctor.WriteLine(dr_ip);
				doctor.Close();

				StreamWriter doctors("Doctors_Data.txt", true);
				doctors.WriteLine(dr_data);
				doctors.Close();
				MessageBox::Show("Doctor is added...");
			}
		}
		//A function to view all doctors.
		void viewalldoctors(void)
		{
			StreamReader file("Doctors_Data.txt");
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
		//A function to remove doctor.
		void removedoctor(void)
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
					if (arrline[0] == txt_dr_id_r->Text)
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
			temb2.Close();
			DeleteFile(L"temb.txt");
			file2.Close();
			MessageBox::Show("Done..");
		}
		//A function to edit manager data.
		void edit_managerdata(void)
		{
			int i = 0;
			StreamReader file1("Manager_Data.txt", true);
			StreamWriter temb1("temb.txt", true);
			System::String^line = "";

			do
			{
				line = file1.ReadLine();
				if (!String::IsNullOrEmpty(line))
				{
					cli::array<String^>^ arrline = line->Split(';');
					if (arrline[0] == txt_m_id->Text)
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
			DeleteFile(L"Manager_Data.txt");
			i++;
			StreamWriter file2("Manager_Data.txt", true);
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
			String^edit;
			edit = txt_m_id->Text + ";"
				+ txt_m_name->Text + ";"
				+ txt_m_age->Text + ";"
				+ txt_m_gender->Text + ";"
				+ txt_m_address->Text + ";"
				+ txt_m_password->Text;
			file2.WriteLine(edit);
			file2.Close();
			temb2.Close();
			DeleteFile(L"temb.txt");
			MessageBox::Show("Done..");
		}
/**************************************************************************************/

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txt_manager_id->Text->Trim() != "" )
				 {
					
					 StreamReader file("Manager_Data.txt", true);
					 System::String^line = "";
					 do
					 {
						 line = file.ReadLine();
						 if (!String::IsNullOrEmpty(line))
						 {
							 cli::array<String^>^ arrline = line->Split(';');
							 if (arrline[0] == txt_manager_id->Text )
							 {
								 panel_main_manager->Visible = true;
								 txt_m_id->Text = arrline[0];
								 txt_m_name->Text = arrline[1];
								 txt_m_age->Text = arrline[2];
								 txt_m_gender->Text = arrline[3];
								 txt_m_address->Text = arrline[4];
								 txt_m_password->Text = arrline[5];
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
				 else if (txt_manager_id->Text->Trim() == "")
				 {
					 MessageBox::Show("Enter your id");
				 }
				 else
				 {
					 MessageBox::Show("Make sure from your id.");
				 }
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 manager_panel->Visible = false;
			 panel_removedoctor->Visible = false;
			 panel_edit_manager_data->Visible = false;
			 panel_viewalldoctors->Visible = false;
			 panel_addnewdoctor->Visible = true;
			 button2->ForeColor = System::Drawing::Color::White;
			 button3->ForeColor = System::Drawing::Color::White;
			 button4->ForeColor = System::Drawing::Color::White;
			 button1->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel4->BackColor = System::Drawing::Color::White;
			 this->panel1->BackColor = System::Drawing::Color::White;
			 this->panel3->BackColor = System::Drawing::Color::White;
			 this->panel2->BackColor = System::Drawing::Color::IndianRed;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 manager_panel->Visible = false;
			 panel_addnewdoctor->Visible = false;
			 panel_removedoctor->Visible = false;
			 panel_edit_manager_data->Visible = false;
			 panel_viewalldoctors->Visible = true;
			 button1->ForeColor = System::Drawing::Color::White;
			 button3->ForeColor = System::Drawing::Color::White;
			 button4->ForeColor = System::Drawing::Color::White;
			 button2->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel4->BackColor = System::Drawing::Color::White;
			 this->panel2->BackColor = System::Drawing::Color::White;
			 this->panel3->BackColor = System::Drawing::Color::White;
			 this->panel1->BackColor = System::Drawing::Color::IndianRed;
			
			 viewalldoctors();
		
			/* std::string id[20];
			 std::string name[20];
			 std::string age[20];
			 std::string gender[20];
			 std::string address[20];
			 std::string sp[20];
			 std::ifstream file ("Doctors_Data.txt");
			 for (int i = 0; i < 20; i++)
			 {
			 getline(file, id[i], ';');
			 getline(file, name[i], ';');
			 getline(file, age[i], ';');
			 getline(file, gender[i], ';');
			 getline(file, address[i], ';');
			 getline(file, sp[i], '\n');
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(id[i]);
			 dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(name[i]);
			 dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(age[i]);
			 dataGridView1->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(gender[i]);
			 dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(address[i]);
			 dataGridView1->Rows[i]->Cells[5]->Value = msclr::interop::marshal_as<String^>(sp[i]);
			 }
			 file.close();*/
			 

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 manager_panel->Visible = false;
			 panel_addnewdoctor->Visible = false;
			 panel_edit_manager_data->Visible = false;
			 panel_viewalldoctors->Visible = false;
			 panel_removedoctor->Visible = true;
			 button1->ForeColor = System::Drawing::Color::White;
			 button2->ForeColor = System::Drawing::Color::White;
			 button4->ForeColor = System::Drawing::Color::White;
			 button3->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel4->BackColor = System::Drawing::Color::White;
			 this->panel2->BackColor = System::Drawing::Color::White;
			 this->panel1->BackColor = System::Drawing::Color::White;
			 this->panel3->BackColor = System::Drawing::Color::IndianRed;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 manager_panel->Visible = false;
			 panel_addnewdoctor->Visible = false;
			 panel_removedoctor->Visible = false;
			 panel_viewalldoctors->Visible = false;
			 panel_edit_manager_data->Visible = true;
			 button1->ForeColor = System::Drawing::Color::White;
			 button2->ForeColor = System::Drawing::Color::White;
			 button3->ForeColor = System::Drawing::Color::White;
			 button4->ForeColor = System::Drawing::Color::IndianRed;
			 this->panel2->BackColor = System::Drawing::Color::White;
			 this->panel1->BackColor = System::Drawing::Color::White;
			 this->panel3->BackColor = System::Drawing::Color::White;
			 this->panel4->BackColor = System::Drawing::Color::IndianRed;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 addnewdoctor();
}
private: System::Void btn_remove_doctor_Click(System::Object^  sender, System::EventArgs^  e) {
			 void removedoctor();
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 edit_managerdata();
}
};
}
