#pragma once
#using "system.dll"
#include "string"
#include <atlstr.h>
#include "sstream"

using namespace System;
using namespace System::IO;

namespace TCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Manage_Staff
	/// </summary>
	public ref class Manage_Staff : public System::Windows::Forms::Form
	{
	public:
		Manage_Staff(void)
		{
			InitializeComponent();
			deptinit();
			jobtitleinit();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manage_Staff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  search_btn;
	protected:

	protected:
	private: System::Windows::Forms::Button^  clear_btn;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::ComboBox^  comboBox9;







	private: System::Windows::Forms::Button^  modify_btn;












	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Button^  save_btn;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  gndr_txt;
	private: System::Windows::Forms::DateTimePicker^  dob_txt;
	private: System::Windows::Forms::DateTimePicker^  doj_txt;



	private: System::Windows::Forms::TextBox^  qualification_txt;

	private: System::Windows::Forms::TextBox^  phno_txt;
	private: System::Windows::Forms::TextBox^  addr_txt;
	private: System::Windows::Forms::TextBox^  name_txt;

	private: System::Windows::Forms::TextBox^  id_txt;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TextBox^  basicpay_txt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  dept_txt;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  basicpay_stxt;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  dept_stxt;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  gndr_stxt;
	private: System::Windows::Forms::DateTimePicker^  dob_stxt;
	private: System::Windows::Forms::DateTimePicker^  doj_stxt;

	private: System::Windows::Forms::TextBox^  qualification_stxt;
	private: System::Windows::Forms::TextBox^  phno_stxt;
	private: System::Windows::Forms::TextBox^  addr_stxt;
	private: System::Windows::Forms::TextBox^  name_stxt;
	private: System::Windows::Forms::TextBox^  id_stxt;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::GroupBox^  groupBox3;



private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  adddept_txt;
private: System::Windows::Forms::Button^  adddept_btn;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Button^  addtitle_btn;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  addtitle_txt;

private: System::Windows::Forms::ComboBox^  jobtitle_txt;
private: System::Windows::Forms::ComboBox^  jobtitle_stxt;




















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
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->modify_btn = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->addtitle_btn = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->addtitle_txt = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->adddept_btn = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->adddept_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->jobtitle_txt = (gcnew System::Windows::Forms::ComboBox());
			this->basicpay_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dept_txt = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->gndr_txt = (gcnew System::Windows::Forms::ComboBox());
			this->dob_txt = (gcnew System::Windows::Forms::DateTimePicker());
			this->doj_txt = (gcnew System::Windows::Forms::DateTimePicker());
			this->qualification_txt = (gcnew System::Windows::Forms::TextBox());
			this->phno_txt = (gcnew System::Windows::Forms::TextBox());
			this->addr_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->jobtitle_stxt = (gcnew System::Windows::Forms::ComboBox());
			this->basicpay_stxt = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dept_stxt = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->gndr_stxt = (gcnew System::Windows::Forms::ComboBox());
			this->dob_stxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->doj_stxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->qualification_stxt = (gcnew System::Windows::Forms::TextBox());
			this->phno_stxt = (gcnew System::Windows::Forms::TextBox());
			this->addr_stxt = (gcnew System::Windows::Forms::TextBox());
			this->name_stxt = (gcnew System::Windows::Forms::TextBox());
			this->id_stxt = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// search_btn
			// 
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->Location = System::Drawing::Point(78, 147);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(140, 41);
			this->search_btn->TabIndex = 43;
			this->search_btn->Text = L"SEARCH";
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::search_btn_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->AutoSize = true;
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_btn->Location = System::Drawing::Point(78, 288);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(140, 41);
			this->clear_btn->TabIndex = 40;
			this->clear_btn->Text = L"CLEAR";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Visible = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::clear_btn_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(7, 54);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(56, 13);
			this->label36->TabIndex = 11;
			this->label36->Text = L"Search for";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 25;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(7, 27);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(55, 13);
			this->label37->TabIndex = 10;
			this->label37->Text = L"Search by";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nalanda ID", L"Name", L"Contact Number" });
			this->comboBox9->Location = System::Drawing::Point(71, 24);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(173, 21);
			this->comboBox9->TabIndex = 42;
			// 
			// modify_btn
			// 
			this->modify_btn->AutoSize = true;
			this->modify_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modify_btn->Location = System::Drawing::Point(78, 194);
			this->modify_btn->Name = L"modify_btn";
			this->modify_btn->Size = System::Drawing::Size(140, 41);
			this->modify_btn->TabIndex = 41;
			this->modify_btn->Text = L"MODIFY";
			this->modify_btn->UseVisualStyleBackColor = true;
			this->modify_btn->Visible = false;
			this->modify_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::modify_btn_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(675, 408);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"VIEW ALL";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(273, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SHOW TABLE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Manage_Staff::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(1, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(660, 372);
			this->dataGridView1->TabIndex = 0;
			// 
			// save_btn
			// 
			this->save_btn->AutoSize = true;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->Location = System::Drawing::Point(78, 241);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(140, 41);
			this->save_btn->TabIndex = 39;
			this->save_btn->Text = L"SAVE";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Visible = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::save_btn_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->add_btn);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(675, 408);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ADD";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(378, 224);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(287, 29);
			this->label26->TabIndex = 30;
			this->label26->Text = L"ADD JOB TITLE";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->addtitle_btn);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->addtitle_txt);
			this->groupBox5->Location = System::Drawing::Point(378, 256);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(287, 99);
			this->groupBox5->TabIndex = 29;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Department Details";
			// 
			// addtitle_btn
			// 
			this->addtitle_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addtitle_btn->Location = System::Drawing::Point(5, 43);
			this->addtitle_btn->Name = L"addtitle_btn";
			this->addtitle_btn->Size = System::Drawing::Size(277, 39);
			this->addtitle_btn->TabIndex = 26;
			this->addtitle_btn->Text = L"ADD JOB TITLE";
			this->addtitle_btn->UseVisualStyleBackColor = true;
			this->addtitle_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::addtitle_btn_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(62, 13);
			this->label28->TabIndex = 25;
			this->label28->Text = L"Department";
			// 
			// addtitle_txt
			// 
			this->addtitle_txt->Location = System::Drawing::Point(74, 17);
			this->addtitle_txt->Name = L"addtitle_txt";
			this->addtitle_txt->Size = System::Drawing::Size(207, 20);
			this->addtitle_txt->TabIndex = 12;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(378, 50);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(287, 29);
			this->label25->TabIndex = 28;
			this->label25->Text = L"ADD DEPARTMENT";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->adddept_btn);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->adddept_txt);
			this->groupBox3->Location = System::Drawing::Point(378, 82);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(287, 99);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Department Details";
			// 
			// adddept_btn
			// 
			this->adddept_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adddept_btn->Location = System::Drawing::Point(5, 43);
			this->adddept_btn->Name = L"adddept_btn";
			this->adddept_btn->Size = System::Drawing::Size(277, 39);
			this->adddept_btn->TabIndex = 26;
			this->adddept_btn->Text = L"ADD DEPARTMENT";
			this->adddept_btn->UseVisualStyleBackColor = true;
			this->adddept_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::adddept_btn_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 20);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 13);
			this->label27->TabIndex = 25;
			this->label27->Text = L"Department";
			// 
			// adddept_txt
			// 
			this->adddept_txt->Location = System::Drawing::Point(74, 17);
			this->adddept_txt->Name = L"adddept_txt";
			this->adddept_txt->Size = System::Drawing::Size(207, 20);
			this->adddept_txt->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"ADD STAFF RECORD";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// add_btn
			// 
			this->add_btn->AutoSize = true;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(87, 361);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(208, 41);
			this->add_btn->TabIndex = 0;
			this->add_btn->Text = L"ADD RECORD";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &Manage_Staff::add_btn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->jobtitle_txt);
			this->groupBox1->Controls->Add(this->basicpay_txt);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->dept_txt);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->gndr_txt);
			this->groupBox1->Controls->Add(this->dob_txt);
			this->groupBox1->Controls->Add(this->doj_txt);
			this->groupBox1->Controls->Add(this->qualification_txt);
			this->groupBox1->Controls->Add(this->phno_txt);
			this->groupBox1->Controls->Add(this->addr_txt);
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->id_txt);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(7, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(365, 310);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Staff Details";
			// 
			// jobtitle_txt
			// 
			this->jobtitle_txt->FormattingEnabled = true;
			this->jobtitle_txt->Location = System::Drawing::Point(184, 253);
			this->jobtitle_txt->Name = L"jobtitle_txt";
			this->jobtitle_txt->Size = System::Drawing::Size(173, 21);
			this->jobtitle_txt->TabIndex = 29;
			// 
			// basicpay_txt
			// 
			this->basicpay_txt->Location = System::Drawing::Point(184, 280);
			this->basicpay_txt->Name = L"basicpay_txt";
			this->basicpay_txt->Size = System::Drawing::Size(173, 20);
			this->basicpay_txt->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Basic Pay";
			// 
			// dept_txt
			// 
			this->dept_txt->FormattingEnabled = true;
			this->dept_txt->Location = System::Drawing::Point(184, 226);
			this->dept_txt->Name = L"dept_txt";
			this->dept_txt->Size = System::Drawing::Size(173, 21);
			this->dept_txt->TabIndex = 26;
			this->dept_txt->SelectedIndexChanged += gcnew System::EventHandler(this, &Manage_Staff::dept_txt_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 229);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Department";
			// 
			// gndr_txt
			// 
			this->gndr_txt->FormattingEnabled = true;
			this->gndr_txt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_txt->Location = System::Drawing::Point(184, 95);
			this->gndr_txt->Name = L"gndr_txt";
			this->gndr_txt->Size = System::Drawing::Size(173, 21);
			this->gndr_txt->TabIndex = 24;
			// 
			// dob_txt
			// 
			this->dob_txt->CustomFormat = L"yyyy-MM-dd";
			this->dob_txt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_txt->Location = System::Drawing::Point(184, 122);
			this->dob_txt->Name = L"dob_txt";
			this->dob_txt->Size = System::Drawing::Size(173, 20);
			this->dob_txt->TabIndex = 23;
			this->dob_txt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// doj_txt
			// 
			this->doj_txt->CustomFormat = L"yyyy-MM-dd";
			this->doj_txt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->doj_txt->Location = System::Drawing::Point(184, 69);
			this->doj_txt->Name = L"doj_txt";
			this->doj_txt->Size = System::Drawing::Size(173, 20);
			this->doj_txt->TabIndex = 22;
			this->doj_txt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// qualification_txt
			// 
			this->qualification_txt->Location = System::Drawing::Point(184, 200);
			this->qualification_txt->Name = L"qualification_txt";
			this->qualification_txt->Size = System::Drawing::Size(173, 20);
			this->qualification_txt->TabIndex = 20;
			this->qualification_txt->TextChanged += gcnew System::EventHandler(this, &Manage_Staff::clss_txt_TextChanged);
			// 
			// phno_txt
			// 
			this->phno_txt->Location = System::Drawing::Point(184, 174);
			this->phno_txt->Name = L"phno_txt";
			this->phno_txt->Size = System::Drawing::Size(173, 20);
			this->phno_txt->TabIndex = 19;
			// 
			// addr_txt
			// 
			this->addr_txt->Location = System::Drawing::Point(184, 148);
			this->addr_txt->Name = L"addr_txt";
			this->addr_txt->Size = System::Drawing::Size(173, 20);
			this->addr_txt->TabIndex = 18;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(184, 43);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(173, 20);
			this->name_txt->TabIndex = 15;
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(184, 17);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(173, 20);
			this->id_txt->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 256);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Job Title";
			this->label11->Click += gcnew System::EventHandler(this, &Manage_Staff::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 203);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Qualification";
			this->label10->Click += gcnew System::EventHandler(this, &Manage_Staff::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 177);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Contact Number";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Date of Birth";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Date of Joining";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nalanda ID";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label37);
			this->groupBox4->Controls->Add(this->comboBox9);
			this->groupBox4->Location = System::Drawing::Point(9, 51);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(262, 81);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Search";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->search_btn);
			this->tabPage3->Controls->Add(this->modify_btn);
			this->tabPage3->Controls->Add(this->clear_btn);
			this->tabPage3->Controls->Add(this->save_btn);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(675, 408);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SEARCH/MODIFY";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->jobtitle_stxt);
			this->groupBox2->Controls->Add(this->basicpay_stxt);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->dept_stxt);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->gndr_stxt);
			this->groupBox2->Controls->Add(this->dob_stxt);
			this->groupBox2->Controls->Add(this->doj_stxt);
			this->groupBox2->Controls->Add(this->qualification_stxt);
			this->groupBox2->Controls->Add(this->phno_stxt);
			this->groupBox2->Controls->Add(this->addr_stxt);
			this->groupBox2->Controls->Add(this->name_stxt);
			this->groupBox2->Controls->Add(this->id_stxt);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(285, 51);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(365, 310);
			this->groupBox2->TabIndex = 44;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Details";
			// 
			// jobtitle_stxt
			// 
			this->jobtitle_stxt->FormattingEnabled = true;
			this->jobtitle_stxt->Location = System::Drawing::Point(184, 253);
			this->jobtitle_stxt->Name = L"jobtitle_stxt";
			this->jobtitle_stxt->Size = System::Drawing::Size(173, 21);
			this->jobtitle_stxt->TabIndex = 30;
			// 
			// basicpay_stxt
			// 
			this->basicpay_stxt->Location = System::Drawing::Point(184, 280);
			this->basicpay_stxt->Name = L"basicpay_stxt";
			this->basicpay_stxt->Size = System::Drawing::Size(173, 20);
			this->basicpay_stxt->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 283);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Basic Pay";
			// 
			// dept_stxt
			// 
			this->dept_stxt->FormattingEnabled = true;
			this->dept_stxt->Location = System::Drawing::Point(184, 226);
			this->dept_stxt->Name = L"dept_stxt";
			this->dept_stxt->Size = System::Drawing::Size(173, 21);
			this->dept_stxt->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 229);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Department";
			// 
			// gndr_stxt
			// 
			this->gndr_stxt->FormattingEnabled = true;
			this->gndr_stxt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_stxt->Location = System::Drawing::Point(184, 95);
			this->gndr_stxt->Name = L"gndr_stxt";
			this->gndr_stxt->Size = System::Drawing::Size(173, 21);
			this->gndr_stxt->TabIndex = 24;
			// 
			// dob_stxt
			// 
			this->dob_stxt->CustomFormat = L"yyyy-MM-dd";
			this->dob_stxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_stxt->Location = System::Drawing::Point(184, 122);
			this->dob_stxt->Name = L"dob_stxt";
			this->dob_stxt->Size = System::Drawing::Size(173, 20);
			this->dob_stxt->TabIndex = 23;
			this->dob_stxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// doj_stxt
			// 
			this->doj_stxt->CustomFormat = L"yyyy-MM-dd";
			this->doj_stxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->doj_stxt->Location = System::Drawing::Point(184, 69);
			this->doj_stxt->Name = L"doj_stxt";
			this->doj_stxt->Size = System::Drawing::Size(173, 20);
			this->doj_stxt->TabIndex = 22;
			this->doj_stxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// qualification_stxt
			// 
			this->qualification_stxt->Location = System::Drawing::Point(184, 200);
			this->qualification_stxt->Name = L"qualification_stxt";
			this->qualification_stxt->Size = System::Drawing::Size(173, 20);
			this->qualification_stxt->TabIndex = 20;
			// 
			// phno_stxt
			// 
			this->phno_stxt->Location = System::Drawing::Point(184, 174);
			this->phno_stxt->Name = L"phno_stxt";
			this->phno_stxt->Size = System::Drawing::Size(173, 20);
			this->phno_stxt->TabIndex = 19;
			// 
			// addr_stxt
			// 
			this->addr_stxt->Location = System::Drawing::Point(184, 148);
			this->addr_stxt->Name = L"addr_stxt";
			this->addr_stxt->Size = System::Drawing::Size(173, 20);
			this->addr_stxt->TabIndex = 18;
			// 
			// name_stxt
			// 
			this->name_stxt->Location = System::Drawing::Point(184, 43);
			this->name_stxt->Name = L"name_stxt";
			this->name_stxt->Size = System::Drawing::Size(173, 20);
			this->name_stxt->TabIndex = 15;
			// 
			// id_stxt
			// 
			this->id_stxt->Enabled = false;
			this->id_stxt->Location = System::Drawing::Point(184, 17);
			this->id_stxt->Name = L"id_stxt";
			this->id_stxt->Size = System::Drawing::Size(173, 20);
			this->id_stxt->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 256);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Job Title";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 203);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Qualification";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 177);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Contact Number";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 151);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Address";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 125);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(66, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Date of Birth";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(4, 98);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Gender";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(4, 46);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 13);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Name";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(4, 71);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(78, 13);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Date of Joining";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(4, 20);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(61, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Nalanda ID";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(9, 14);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(641, 34);
			this->label23->TabIndex = 32;
			this->label23->Text = L"SEARCH/MODIFY STAFF RECORD";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(683, 434);
			this->tabControl1->TabIndex = 26;
			// 
			// Manage_Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 429);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Manage_Staff";
			this->Text = L"Manage Staff";
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void jobtitleinit(void)
{
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`job_title`;", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();

		while (reader->Read()) {
			jobtitle_txt->Items->Add(reader->GetString("title"));
			jobtitle_stxt->Items->Add(reader->GetString("title"));
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void deptinit(void)
{
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`department`;", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();

		while (reader->Read()) {
			dept_txt->Items->Add(reader->GetString("dept"));
			dept_stxt->Items->Add(reader->GetString("dept"));
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void clss_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void sec_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`staff` (`NalandaID`,`StaffName`,`Gender`,`DOB`,`Address`,`PhNo`,`DOJ`,`Qualification`,`Department`,`JobTitle`,`BasicPay`) values ('" + this->id_txt->Text + "','" + this->name_txt->Text + "','" + this->gndr_txt->Text + "','" + this->dob_txt->Text + "','" + this->addr_txt->Text + "','" + this->phno_txt->Text + "','" + this->doj_txt->Text + "','" + this->qualification_txt->Text + "','" + this->dept_txt->Text + "','" + this->jobtitle_txt->Text + "','" + this->basicpay_txt->Text + "');", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Record Added Successfully");

		while (reader->Read()) {

		}
		id_txt->Text = "";
		name_txt->Text = "";
		gndr_txt->Text = "";
		addr_txt->Text = "";
		phno_txt->Text = "";
		qualification_txt->Text = "";
		dept_txt->Text = "";
		jobtitle_txt->Text = "";
		basicpay_txt->Text = "";
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void adddept_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`department` (`dept`) values ('" + this->adddept_txt->Text + "');", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Department Added Successfully");

		while (reader->Read()) {

		}
		adddept_txt->Text = "";
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void addtitle_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`job_title` (`title`) values ('" + this->addtitle_txt->Text + "');", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Job Title Added Successfully");

		while (reader->Read()) {

		}
		addtitle_txt->Text = "";
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	if (comboBox9->Text == "Nalanda ID")
	{

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`staff` WHERE `NalandaID` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				id_stxt->Text = reader->GetInt32("NalandaID").ToString();
				doj_stxt->Value = reader->GetDateTime("DOJ");
				name_stxt->Text = reader->GetString("StaffName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				phno_stxt->Text = reader->GetDouble("PhNo").ToString();
				qualification_stxt->Text = reader->GetString("Qualification");
				dept_stxt->Text = reader->GetString("Department");
				jobtitle_stxt->Text = reader->GetString("JobTitle");
				basicpay_stxt->Text = reader->GetDecimal("BasicPay").ToString();
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (comboBox9->Text == "Name")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`staff` WHERE `StaffName` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				id_stxt->Text = reader->GetInt32("NalandaID").ToString();
				doj_stxt->Value = reader->GetDateTime("DOJ");
				name_stxt->Text = reader->GetString("StaffName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				phno_stxt->Text = reader->GetDouble("PhNo").ToString();
				qualification_stxt->Text = reader->GetString("Qualification");
				dept_stxt->Text = reader->GetString("Department");
				jobtitle_stxt->Text = reader->GetString("JobTitle");
				basicpay_stxt->Text = reader->GetDecimal ("BasicPay").ToString();
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (comboBox9->Text == "Contact Number")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`staff` WHERE `PhNo` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				id_stxt->Text = reader->GetInt32("NalandaID").ToString();
				doj_stxt->Value = reader->GetDateTime("DOJ");
				name_stxt->Text = reader->GetString("StaffName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				phno_stxt->Text = reader->GetDouble("PhNo").ToString();
				qualification_stxt->Text = reader->GetString("Qualification");
				dept_stxt->Text = reader->GetString("Department");
				jobtitle_stxt->Text = reader->GetString("JobTitle");
				basicpay_stxt->Text = reader->GetDecimal("BasicPay").ToString();
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void modify_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (id_stxt->Text == "" || id_stxt->Text == " ")
		MessageBox::Show("Please select a record from search first!");
	else
	{
		groupBox2->Enabled = "True";
		save_btn->Visible = "True";
		clear_btn->Visible = "True";
	}
}
private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `database`.`staff` SET `StaffName`='" + this->name_stxt->Text + "',`DOJ`='" + this->doj_stxt->Text + "',`Gender`='" + this->gndr_stxt->Text + "',`DOB`='" + this->dob_stxt->Text + "',`Address`='" + this->addr_stxt->Text + "',`PhNo`='" + System::Convert::ToDouble(this->phno_stxt->Text) + "',`Qualification`='" + this->qualification_stxt->Text + "',`Department`='" + this->dept_stxt->Text + "',`JobTitle`='" + this->jobtitle_stxt->Text + "',`BasicPay`='" + System::Convert::ToDecimal (this->basicpay_stxt->Text) + "' WHERE `NalandaID`='" + System::Convert::ToInt32(this->id_stxt->Text) + "';", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Record Modified Successfully");
		while (reader->Read()) {

		}
		id_stxt->Text = "";
		name_stxt->Text = "";
		gndr_stxt->Text = "";
		addr_stxt->Text = "";
		phno_stxt->Text = "";
		qualification_stxt->Text = "";
		dept_stxt->Text = "";
		jobtitle_stxt->Text = "";
		basicpay_stxt->Text = "";
		comboBox9->Text = "";
		textBox1->Text = "";
		save_btn->Visible = false;
		clear_btn->Visible = false;
		modify_btn->Visible = false;
		groupBox3->Enabled = false;
	}

	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void clear_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	id_stxt->Text = "";
	name_stxt->Text = "";
	gndr_stxt->Text = "";
	addr_stxt->Text = "";
	phno_stxt->Text = "";
	qualification_stxt->Text = "";
	dept_stxt->Text = "";
	jobtitle_stxt->Text = "";
	basicpay_stxt->Text = "";
	comboBox9->Text = "";
	textBox1->Text = "";
	save_btn->Visible = false;
	clear_btn->Visible = false;
	modify_btn->Visible = false;
	groupBox3->Enabled = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`staff`", conDataBase);
	MySqlDataReader^ reader;
	try {
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable ^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource ^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dept_txt_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}