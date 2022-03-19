#pragma once

namespace hospitalmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main;
	protected:

	protected:
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel_view_p;
	private: System::Windows::Forms::Panel^  panel_edit_p;
	private: System::Windows::Forms::Panel^  panel_assign;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patient_type;


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
			this->panel_main = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel_view_p = (gcnew System::Windows::Forms::Panel());
			this->panel_edit_p = (gcnew System::Windows::Forms::Panel());
			this->panel_assign = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->patient_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patient_type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_main->SuspendLayout();
			this->panel_view_p->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel_main->Controls->Add(this->panel4);
			this->panel_main->Controls->Add(this->panel3);
			this->panel_main->Controls->Add(this->panel1);
			this->panel_main->Controls->Add(this->button4);
			this->panel_main->Controls->Add(this->button3);
			this->panel_main->Controls->Add(this->button2);
			this->panel_main->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_main->Location = System::Drawing::Point(0, 0);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(313, 633);
			this->panel_main->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(19, 420);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(6, 57);
			this->panel4->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(19, 257);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(6, 104);
			this->panel3->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(19, 150);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(6, 57);
			this->panel1->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(31, 420);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Edit  patient data ";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(31, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 104);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Assign each patient to a specific doctor ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(31, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(252, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View all  patients";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel_view_p
			// 
			this->panel_view_p->Controls->Add(this->dataGridView1);
			this->panel_view_p->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_view_p->Location = System::Drawing::Point(0, 0);
			this->panel_view_p->Name = L"panel_view_p";
			this->panel_view_p->Size = System::Drawing::Size(910, 633);
			this->panel_view_p->TabIndex = 4;
			this->panel_view_p->Visible = false;
			// 
			// panel_edit_p
			// 
			this->panel_edit_p->BackColor = System::Drawing::Color::White;
			this->panel_edit_p->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_edit_p->Location = System::Drawing::Point(0, 0);
			this->panel_edit_p->Name = L"panel_edit_p";
			this->panel_edit_p->Size = System::Drawing::Size(910, 633);
			this->panel_edit_p->TabIndex = 0;
			this->panel_edit_p->Visible = false;
			// 
			// panel_assign
			// 
			this->panel_assign->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_assign->Location = System::Drawing::Point(0, 0);
			this->panel_assign->Name = L"panel_assign";
			this->panel_assign->Size = System::Drawing::Size(910, 633);
			this->panel_assign->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->patient_id,
					this->patient_type
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(418, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(492, 633);
			this->dataGridView1->TabIndex = 0;
			// 
			// patient_id
			// 
			this->patient_id->HeaderText = L"Id";
			this->patient_id->Name = L"patient_id";
			// 
			// patient_type
			// 
			this->patient_type->HeaderText = L"Type";
			this->patient_type->Name = L"patient_type";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(910, 633);
			this->Controls->Add(this->panel_main);
			this->Controls->Add(this->panel_view_p);
			this->Controls->Add(this->panel_edit_p);
			this->Controls->Add(this->panel_assign);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nurse";
			this->panel_main->ResumeLayout(false);
			this->panel_view_p->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
