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
	/// Summary for Student_Add
	/// </summary>
	public ref class Student_Add : public System::Windows::Forms::Form
	{
	public:
		Student_Add(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_Add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  add_btn;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  reg_txt;


	private: System::Windows::Forms::TextBox^  rno_txt;
	private: System::Windows::Forms::TextBox^  name_txt;


	private: System::Windows::Forms::TextBox^  addr_txt;
	private: System::Windows::Forms::TextBox^  phno_txt;
	private: System::Windows::Forms::TextBox^  clss_txt;
	private: System::Windows::Forms::TextBox^  sec_txt;
	private: System::Windows::Forms::DateTimePicker^  dor_txt;
	private: System::Windows::Forms::DateTimePicker^  dob_txt;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ComboBox^  gndr_txt;























	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DateTimePicker^  dob_stxt;


	private: System::Windows::Forms::DateTimePicker^  dor_stxt;
	private: System::Windows::Forms::TextBox^  sec_stxt;


	private: System::Windows::Forms::TextBox^  class_stxt;

	private: System::Windows::Forms::TextBox^  parphno_stxt;

	private: System::Windows::Forms::TextBox^  addr_stxt;

	private: System::Windows::Forms::TextBox^  name_stxt;


	private: System::Windows::Forms::TextBox^  rollno_stxt;

	private: System::Windows::Forms::TextBox^  regno_stxt;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::GroupBox^  groupBox4;








private: System::Windows::Forms::ComboBox^  gndr_stxt;









































private: System::Windows::Forms::TabPage^  tabPage4;

private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  save_btn;
private: System::Windows::Forms::Button^  clear_btn;



private: System::Windows::Forms::Button^  modify_btn;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;








	


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
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->reg_txt = (gcnew System::Windows::Forms::TextBox());
			this->rno_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->addr_txt = (gcnew System::Windows::Forms::TextBox());
			this->phno_txt = (gcnew System::Windows::Forms::TextBox());
			this->clss_txt = (gcnew System::Windows::Forms::TextBox());
			this->sec_txt = (gcnew System::Windows::Forms::TextBox());
			this->dor_txt = (gcnew System::Windows::Forms::DateTimePicker());
			this->dob_txt = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gndr_txt = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->modify_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->gndr_stxt = (gcnew System::Windows::Forms::ComboBox());
			this->dob_stxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->dor_stxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->sec_stxt = (gcnew System::Windows::Forms::TextBox());
			this->class_stxt = (gcnew System::Windows::Forms::TextBox());
			this->parphno_stxt = (gcnew System::Windows::Forms::TextBox());
			this->addr_stxt = (gcnew System::Windows::Forms::TextBox());
			this->name_stxt = (gcnew System::Windows::Forms::TextBox());
			this->rollno_stxt = (gcnew System::Windows::Forms::TextBox());
			this->regno_stxt = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// add_btn
			// 
			this->add_btn->AutoSize = true;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(146, 322);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(82, 41);
			this->add_btn->TabIndex = 0;
			this->add_btn->Text = L"ADD";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &Student_Add::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Registration Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Date of Admission / Registration";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Roll Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Gender";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Date of Birth";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 172);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Address";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 198);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Parent Phone Number";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Class";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 250);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Section";
			// 
			// reg_txt
			// 
			this->reg_txt->Location = System::Drawing::Point(183, 13);
			this->reg_txt->Name = L"reg_txt";
			this->reg_txt->Size = System::Drawing::Size(173, 20);
			this->reg_txt->TabIndex = 12;
			// 
			// rno_txt
			// 
			this->rno_txt->Location = System::Drawing::Point(183, 65);
			this->rno_txt->Name = L"rno_txt";
			this->rno_txt->Size = System::Drawing::Size(173, 20);
			this->rno_txt->TabIndex = 14;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(183, 91);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(173, 20);
			this->name_txt->TabIndex = 15;
			// 
			// addr_txt
			// 
			this->addr_txt->Location = System::Drawing::Point(183, 169);
			this->addr_txt->Name = L"addr_txt";
			this->addr_txt->Size = System::Drawing::Size(173, 20);
			this->addr_txt->TabIndex = 18;
			// 
			// phno_txt
			// 
			this->phno_txt->Location = System::Drawing::Point(183, 195);
			this->phno_txt->Name = L"phno_txt";
			this->phno_txt->Size = System::Drawing::Size(173, 20);
			this->phno_txt->TabIndex = 19;
			// 
			// clss_txt
			// 
			this->clss_txt->Location = System::Drawing::Point(183, 221);
			this->clss_txt->Name = L"clss_txt";
			this->clss_txt->Size = System::Drawing::Size(173, 20);
			this->clss_txt->TabIndex = 20;
			// 
			// sec_txt
			// 
			this->sec_txt->Location = System::Drawing::Point(183, 247);
			this->sec_txt->Name = L"sec_txt";
			this->sec_txt->Size = System::Drawing::Size(173, 20);
			this->sec_txt->TabIndex = 21;
			// 
			// dor_txt
			// 
			this->dor_txt->CustomFormat = L"yyyy-MM-dd";
			this->dor_txt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dor_txt->Location = System::Drawing::Point(183, 39);
			this->dor_txt->Name = L"dor_txt";
			this->dor_txt->Size = System::Drawing::Size(173, 20);
			this->dor_txt->TabIndex = 22;
			this->dor_txt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			this->dor_txt->ValueChanged += gcnew System::EventHandler(this, &Student_Add::dateTimePicker1_ValueChanged);
			// 
			// dob_txt
			// 
			this->dob_txt->CustomFormat = L"yyyy-MM-dd";
			this->dob_txt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_txt->Location = System::Drawing::Point(183, 143);
			this->dob_txt->Name = L"dob_txt";
			this->dob_txt->Size = System::Drawing::Size(173, 20);
			this->dob_txt->TabIndex = 23;
			this->dob_txt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->gndr_txt);
			this->groupBox1->Controls->Add(this->dob_txt);
			this->groupBox1->Controls->Add(this->dor_txt);
			this->groupBox1->Controls->Add(this->sec_txt);
			this->groupBox1->Controls->Add(this->clss_txt);
			this->groupBox1->Controls->Add(this->phno_txt);
			this->groupBox1->Controls->Add(this->addr_txt);
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->rno_txt);
			this->groupBox1->Controls->Add(this->reg_txt);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(6, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(365, 275);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Details";
			// 
			// gndr_txt
			// 
			this->gndr_txt->FormattingEnabled = true;
			this->gndr_txt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_txt->Location = System::Drawing::Point(183, 116);
			this->gndr_txt->Name = L"gndr_txt";
			this->gndr_txt->Size = System::Drawing::Size(173, 21);
			this->gndr_txt->TabIndex = 24;
			this->gndr_txt->SelectedIndexChanged += gcnew System::EventHandler(this, &Student_Add::comboBox1_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(669, 396);
			this->tabControl1->TabIndex = 25;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->add_btn);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(661, 370);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ADD";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Student_Add::tabPage1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"ADD STUDENT RECORD";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->modify_btn);
			this->tabPage3->Controls->Add(this->clear_btn);
			this->tabPage3->Controls->Add(this->save_btn);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(661, 370);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SEARCH/MODIFY";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Student_Add::tabPage3_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(77, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 41);
			this->button3->TabIndex = 43;
			this->button3->Text = L"SEARCH";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Student_Add::button3_Click_1);
			// 
			// modify_btn
			// 
			this->modify_btn->AutoSize = true;
			this->modify_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modify_btn->Location = System::Drawing::Point(77, 190);
			this->modify_btn->Name = L"modify_btn";
			this->modify_btn->Size = System::Drawing::Size(140, 41);
			this->modify_btn->TabIndex = 41;
			this->modify_btn->Text = L"MODIFY";
			this->modify_btn->UseVisualStyleBackColor = true;
			this->modify_btn->Visible = false;
			this->modify_btn->Click += gcnew System::EventHandler(this, &Student_Add::button4_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->AutoSize = true;
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_btn->Location = System::Drawing::Point(77, 284);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(140, 41);
			this->clear_btn->TabIndex = 40;
			this->clear_btn->Text = L"CLEAR";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Visible = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &Student_Add::clear_btn_Click);
			// 
			// save_btn
			// 
			this->save_btn->AutoSize = true;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->Location = System::Drawing::Point(77, 237);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(140, 41);
			this->save_btn->TabIndex = 39;
			this->save_btn->Text = L"SAVE";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Visible = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &Student_Add::save_btn_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label37);
			this->groupBox4->Controls->Add(this->comboBox9);
			this->groupBox4->Location = System::Drawing::Point(8, 47);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(262, 81);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Search";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(6, 50);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(56, 13);
			this->label36->TabIndex = 11;
			this->label36->Text = L"Search for";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 25;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Student_Add::textBox1_TextChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(6, 23);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(55, 13);
			this->label37->TabIndex = 10;
			this->label37->Text = L"Search by";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Registration Number", L"Roll Number", L"Name",
					L"Parent Phone Number"
			});
			this->comboBox9->Location = System::Drawing::Point(70, 20);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(173, 21);
			this->comboBox9->TabIndex = 42;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(8, 10);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(641, 34);
			this->label23->TabIndex = 32;
			this->label23->Text = L"SEARCH/MODIFY STUDENT RECORD";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->gndr_stxt);
			this->groupBox3->Controls->Add(this->dob_stxt);
			this->groupBox3->Controls->Add(this->dor_stxt);
			this->groupBox3->Controls->Add(this->sec_stxt);
			this->groupBox3->Controls->Add(this->class_stxt);
			this->groupBox3->Controls->Add(this->parphno_stxt);
			this->groupBox3->Controls->Add(this->addr_stxt);
			this->groupBox3->Controls->Add(this->name_stxt);
			this->groupBox3->Controls->Add(this->rollno_stxt);
			this->groupBox3->Controls->Add(this->regno_stxt);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Enabled = false;
			this->groupBox3->Location = System::Drawing::Point(284, 47);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(365, 275);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Student Details";
			// 
			// gndr_stxt
			// 
			this->gndr_stxt->FormattingEnabled = true;
			this->gndr_stxt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_stxt->Location = System::Drawing::Point(183, 116);
			this->gndr_stxt->Name = L"gndr_stxt";
			this->gndr_stxt->Size = System::Drawing::Size(173, 21);
			this->gndr_stxt->TabIndex = 24;
			// 
			// dob_stxt
			// 
			this->dob_stxt->CustomFormat = L"yyyy-MM-dd";
			this->dob_stxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_stxt->Location = System::Drawing::Point(183, 143);
			this->dob_stxt->Name = L"dob_stxt";
			this->dob_stxt->Size = System::Drawing::Size(173, 20);
			this->dob_stxt->TabIndex = 23;
			this->dob_stxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// dor_stxt
			// 
			this->dor_stxt->CustomFormat = L"yyyy-MM-dd";
			this->dor_stxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dor_stxt->Location = System::Drawing::Point(183, 39);
			this->dor_stxt->Name = L"dor_stxt";
			this->dor_stxt->Size = System::Drawing::Size(173, 20);
			this->dor_stxt->TabIndex = 22;
			this->dor_stxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// sec_stxt
			// 
			this->sec_stxt->Location = System::Drawing::Point(183, 247);
			this->sec_stxt->Name = L"sec_stxt";
			this->sec_stxt->Size = System::Drawing::Size(173, 20);
			this->sec_stxt->TabIndex = 21;
			// 
			// class_stxt
			// 
			this->class_stxt->Location = System::Drawing::Point(183, 221);
			this->class_stxt->Name = L"class_stxt";
			this->class_stxt->Size = System::Drawing::Size(173, 20);
			this->class_stxt->TabIndex = 20;
			// 
			// parphno_stxt
			// 
			this->parphno_stxt->Location = System::Drawing::Point(183, 195);
			this->parphno_stxt->Name = L"parphno_stxt";
			this->parphno_stxt->Size = System::Drawing::Size(173, 20);
			this->parphno_stxt->TabIndex = 19;
			// 
			// addr_stxt
			// 
			this->addr_stxt->Location = System::Drawing::Point(183, 169);
			this->addr_stxt->Name = L"addr_stxt";
			this->addr_stxt->Size = System::Drawing::Size(173, 20);
			this->addr_stxt->TabIndex = 18;
			// 
			// name_stxt
			// 
			this->name_stxt->Location = System::Drawing::Point(183, 91);
			this->name_stxt->Name = L"name_stxt";
			this->name_stxt->Size = System::Drawing::Size(173, 20);
			this->name_stxt->TabIndex = 15;
			// 
			// rollno_stxt
			// 
			this->rollno_stxt->Location = System::Drawing::Point(183, 65);
			this->rollno_stxt->Name = L"rollno_stxt";
			this->rollno_stxt->Size = System::Drawing::Size(173, 20);
			this->rollno_stxt->TabIndex = 14;
			// 
			// regno_stxt
			// 
			this->regno_stxt->Enabled = false;
			this->regno_stxt->Location = System::Drawing::Point(183, 13);
			this->regno_stxt->Name = L"regno_stxt";
			this->regno_stxt->Size = System::Drawing::Size(173, 20);
			this->regno_stxt->TabIndex = 12;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 250);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(43, 13);
			this->label24->TabIndex = 11;
			this->label24->Text = L"Section";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 224);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(32, 13);
			this->label25->TabIndex = 10;
			this->label25->Text = L"Class";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 198);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(112, 13);
			this->label26->TabIndex = 9;
			this->label26->Text = L"Parent Phone Number";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(3, 172);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(45, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"Address";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 147);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(66, 13);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Date of Birth";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 120);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(42, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Gender";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 94);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(35, 13);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Name";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(3, 68);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(65, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Roll Number";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(3, 41);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(159, 13);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Date of Admission / Registration";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(3, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(103, 13);
			this->label33->TabIndex = 2;
			this->label33->Text = L"Registration Number";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(661, 370);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"VIEW ALL";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &Student_Add::tabPage4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SHOW TABLE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Student_Add::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(660, 334);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Student_Add::dataGridView1_CellContentClick);
			// 
			// Student_Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 389);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Student_Add";
			this->Text = L"Manage Students";
			this->Load += gcnew System::EventHandler(this, &Student_Add::Student_Add_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Student_Add_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`student` (`RegNo`,`DOR`,`RollNo`,`StudName`,`Gender`,`DOB`,`Address`,`PhNo`,`Class`,`Section`) values ('"+this->reg_txt->Text+"','"+this->dor_txt->Text+"','"+this->rno_txt->Text+"','"+this->name_txt->Text+"','"+this->gndr_txt->Text+"','"+this->dob_txt->Text+"','"+this->addr_txt->Text+"','"+this->phno_txt->Text+"','"+this->clss_txt->Text+"','"+this->sec_txt->Text+"');", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Record Added Successfully");
			
			while (reader->Read()) {

			}
			reg_txt->Text = "";
			rno_txt->Text = "";
			name_txt->Text = "";
			gndr_txt->Text = "";
			addr_txt->Text = "";
			phno_txt->Text = "";
			clss_txt->Text = "";
			sec_txt->Text = "";
		}

		catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
		

	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student`", conDataBase);
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
	catch(Exception^ex){
		MessageBox::Show(ex->Message);
	}
}

private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (regno_stxt->Text == "" || regno_stxt->Text == " ")
		MessageBox::Show("Please select a record from search first!");
	else
	{
		groupBox3->Enabled = "True";
		save_btn->Visible = "True";
		clear_btn->Visible = "True";
	}
}
private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `database`.`student` SET `DOR`='" + this->dor_stxt->Text + "',`RollNo`='" + System::Convert::ToInt32(this->rollno_stxt->Text) + "',`StudName`='" + this->name_stxt->Text + "',`Gender`='" + this->gndr_stxt->Text + "',`DOB`='" + this->dob_stxt->Text + "',`Address`='" + this->addr_stxt->Text + "',`PhNo`='" + System::Convert::ToDouble(this->parphno_stxt->Text) + "',`Class`='" + this->class_stxt->Text + "',`Section`='" + this->sec_stxt->Text + "' WHERE `RegNo`='" + System::Convert::ToInt32(this->regno_stxt->Text) + "';", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Record Modified Successfully");
		while (reader->Read()) {

		}
		regno_stxt->Text = "";
		dor_stxt->Text = "";
		rollno_stxt->Text = "";
		name_stxt->Text = "";
		gndr_stxt->Text = "";
		dob_stxt->Text = "";
		addr_stxt->Text = "";
		parphno_stxt->Text = "";
		class_stxt->Text = "";
		sec_stxt->Text = "";
		comboBox9->Text = "";
		textBox1->Text = "";
		save_btn->Visible = false;
		clear_btn->Visible = false;
		modify_btn->Visible = false;
		groupBox3->Enabled = false;
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void clear_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	regno_stxt->Text = "";
	dor_stxt->Text = "";
	rollno_stxt->Text = "";
	name_stxt->Text = "";
	gndr_stxt->Text = "";
	dob_stxt->Text = "";
	addr_stxt->Text = "";
	parphno_stxt->Text = "";
	class_stxt->Text = "";
	sec_stxt->Text = "";
	comboBox9->Text = "";
	textBox1->Text = "";
	save_btn->Visible = false;
	clear_btn->Visible = false;
	modify_btn->Visible = false;
	groupBox3->Enabled = false;

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	if (comboBox9->Text == "Registration Number")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `RegNo` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				regno_stxt->Text = reader->GetInt32("RegNo").ToString();
				dor_stxt->Value = reader->GetDateTime("DOR");
				rollno_stxt->Text = reader->GetInt32("RollNo").ToString();
				name_stxt->Text = reader->GetString("StudName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				parphno_stxt->Text = reader->GetDouble("PhNo").ToString();
				class_stxt->Text = reader->GetString("Class");
				sec_stxt->Text = reader->GetString("Section");
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (comboBox9->Text == "Roll Number")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `RollNo` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				regno_stxt->Text = reader->GetInt32("RegNo").ToString();
				dor_stxt->Value = reader->GetDateTime("DOR");
				rollno_stxt->Text = reader->GetInt32("RollNo").ToString();
				name_stxt->Text = reader->GetString("StudName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				parphno_stxt->Text = reader->GetDouble("PhNo").ToString();
				class_stxt->Text = reader->GetString("Class");
				sec_stxt->Text = reader->GetString("Section");
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (comboBox9->Text == "Name")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `StudName` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				regno_stxt->Text = reader->GetInt32("RegNo").ToString();
				dor_stxt->Value = reader->GetDateTime("DOR");
				rollno_stxt->Text = reader->GetInt32("RollNo").ToString();
				name_stxt->Text = reader->GetString("StudName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				parphno_stxt->Text = reader->GetDouble("PhNo").ToString();
				class_stxt->Text = reader->GetString("Class");
				sec_stxt->Text = reader->GetString("Section");
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (comboBox9->Text == "Parent Phone Number")
	{
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `PhNo` LIKE '%" + textBox1->Text + "%';", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();
			if (reader->Read()) {
				modify_btn->Visible = true;
				regno_stxt->Text = reader->GetInt32("RegNo").ToString();
				dor_stxt->Value = reader->GetDateTime("DOR");
				rollno_stxt->Text = reader->GetInt32("RollNo").ToString();
				name_stxt->Text = reader->GetString("StudName");
				gndr_stxt->Text = reader->GetString("Gender");
				dob_stxt->Value = reader->GetDateTime("DOB");
				addr_stxt->Text = reader->GetString("Address");
				parphno_stxt->Text = reader->GetDouble("PhNo").ToString();
				class_stxt->Text = reader->GetString("Class");
				sec_stxt->Text = reader->GetString("Section");
			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}


	
}
};
}