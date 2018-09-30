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
	/// Summary for Manage_Result
	/// </summary>
	public ref class Manage_Result : public System::Windows::Forms::Form
	{
	public:
		Manage_Result(void)
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
		~Manage_Result()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  addsub_btn;
	private: System::Windows::Forms::TextBox^  subname_txt;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::TextBox^  max_atxt;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  mark_atxt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  pass_atxt;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  sub_atxt;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  regno_atxt;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  res_txt;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  max_txt;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  mark_txt;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  pass_txt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  sub_txt;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  regno_txt;
	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::TextBox^  submax_txt;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  subpass_txt;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  search_abtn;
	private: System::Windows::Forms::TextBox^  regno_satxt;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ComboBox^  gndr_det;
	private: System::Windows::Forms::DateTimePicker^  dob_det;
	private: System::Windows::Forms::DateTimePicker^  dor_det;
	private: System::Windows::Forms::TextBox^  sec_det;
	private: System::Windows::Forms::TextBox^  class_det;
	private: System::Windows::Forms::TextBox^  parphno_det;
	private: System::Windows::Forms::TextBox^  addr_det;
	private: System::Windows::Forms::TextBox^  name_det;
	private: System::Windows::Forms::TextBox^  rollno_det;
	private: System::Windows::Forms::TextBox^  regno_det;
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
	private: System::Windows::Forms::Button^  clear_abtn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  clear_btn;
	private: System::Windows::Forms::Button^  search_btn;
	private: System::Windows::Forms::TextBox^  regno_stxt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  gndr_mstxt;
	private: System::Windows::Forms::DateTimePicker^  dob_mstxt;


	private: System::Windows::Forms::DateTimePicker^  dor_mstxt;
private: System::Windows::Forms::TextBox^  sec_mstxt;


private: System::Windows::Forms::TextBox^  class_mstxt;

private: System::Windows::Forms::TextBox^  parphno_mstxt;

private: System::Windows::Forms::TextBox^  addr_mstxt;

private: System::Windows::Forms::TextBox^  name_mstxt;

private: System::Windows::Forms::TextBox^  rollno_mstxt;

private: System::Windows::Forms::TextBox^  regno_mstxt;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  save_btn;

private: System::Windows::Forms::Button^  modify_btn;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Button^  show_subjects_btn;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::Button^  show_results_btn;
private: System::Windows::Forms::DataGridView^  dataGridView1;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->gndr_det = (gcnew System::Windows::Forms::ComboBox());
			this->dob_det = (gcnew System::Windows::Forms::DateTimePicker());
			this->dor_det = (gcnew System::Windows::Forms::DateTimePicker());
			this->sec_det = (gcnew System::Windows::Forms::TextBox());
			this->class_det = (gcnew System::Windows::Forms::TextBox());
			this->parphno_det = (gcnew System::Windows::Forms::TextBox());
			this->addr_det = (gcnew System::Windows::Forms::TextBox());
			this->name_det = (gcnew System::Windows::Forms::TextBox());
			this->rollno_det = (gcnew System::Windows::Forms::TextBox());
			this->regno_det = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->clear_abtn = (gcnew System::Windows::Forms::Button());
			this->search_abtn = (gcnew System::Windows::Forms::Button());
			this->regno_satxt = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->submax_txt = (gcnew System::Windows::Forms::TextBox());
			this->addsub_btn = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->subname_txt = (gcnew System::Windows::Forms::TextBox());
			this->subpass_txt = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->max_atxt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->mark_atxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pass_atxt = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->sub_atxt = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->regno_atxt = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->modify_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->regno_stxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->gndr_mstxt = (gcnew System::Windows::Forms::ComboBox());
			this->dob_mstxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->dor_mstxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->sec_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->class_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->parphno_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->addr_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->name_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->rollno_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->regno_mstxt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->res_txt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->max_txt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->mark_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sub_txt = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->regno_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->show_subjects_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->show_results_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(632, 411);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox6);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(624, 385);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ADD";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->gndr_det);
			this->groupBox6->Controls->Add(this->dob_det);
			this->groupBox6->Controls->Add(this->dor_det);
			this->groupBox6->Controls->Add(this->sec_det);
			this->groupBox6->Controls->Add(this->class_det);
			this->groupBox6->Controls->Add(this->parphno_det);
			this->groupBox6->Controls->Add(this->addr_det);
			this->groupBox6->Controls->Add(this->name_det);
			this->groupBox6->Controls->Add(this->rollno_det);
			this->groupBox6->Controls->Add(this->regno_det);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->label27);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Controls->Add(this->label30);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Enabled = false;
			this->groupBox6->Location = System::Drawing::Point(8, 102);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(365, 275);
			this->groupBox6->TabIndex = 32;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Student Details";
			// 
			// gndr_det
			// 
			this->gndr_det->FormattingEnabled = true;
			this->gndr_det->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_det->Location = System::Drawing::Point(183, 116);
			this->gndr_det->Name = L"gndr_det";
			this->gndr_det->Size = System::Drawing::Size(173, 21);
			this->gndr_det->TabIndex = 24;
			// 
			// dob_det
			// 
			this->dob_det->CustomFormat = L"yyyy-MM-dd";
			this->dob_det->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_det->Location = System::Drawing::Point(183, 143);
			this->dob_det->Name = L"dob_det";
			this->dob_det->Size = System::Drawing::Size(173, 20);
			this->dob_det->TabIndex = 23;
			this->dob_det->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// dor_det
			// 
			this->dor_det->CustomFormat = L"yyyy-MM-dd";
			this->dor_det->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dor_det->Location = System::Drawing::Point(183, 39);
			this->dor_det->Name = L"dor_det";
			this->dor_det->Size = System::Drawing::Size(173, 20);
			this->dor_det->TabIndex = 22;
			this->dor_det->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// sec_det
			// 
			this->sec_det->Location = System::Drawing::Point(183, 247);
			this->sec_det->Name = L"sec_det";
			this->sec_det->Size = System::Drawing::Size(173, 20);
			this->sec_det->TabIndex = 21;
			// 
			// class_det
			// 
			this->class_det->Location = System::Drawing::Point(183, 221);
			this->class_det->Name = L"class_det";
			this->class_det->Size = System::Drawing::Size(173, 20);
			this->class_det->TabIndex = 20;
			// 
			// parphno_det
			// 
			this->parphno_det->Location = System::Drawing::Point(183, 195);
			this->parphno_det->Name = L"parphno_det";
			this->parphno_det->Size = System::Drawing::Size(173, 20);
			this->parphno_det->TabIndex = 19;
			// 
			// addr_det
			// 
			this->addr_det->Location = System::Drawing::Point(183, 169);
			this->addr_det->Name = L"addr_det";
			this->addr_det->Size = System::Drawing::Size(173, 20);
			this->addr_det->TabIndex = 18;
			// 
			// name_det
			// 
			this->name_det->Location = System::Drawing::Point(183, 91);
			this->name_det->Name = L"name_det";
			this->name_det->Size = System::Drawing::Size(173, 20);
			this->name_det->TabIndex = 15;
			// 
			// rollno_det
			// 
			this->rollno_det->Location = System::Drawing::Point(183, 65);
			this->rollno_det->Name = L"rollno_det";
			this->rollno_det->Size = System::Drawing::Size(173, 20);
			this->rollno_det->TabIndex = 14;
			// 
			// regno_det
			// 
			this->regno_det->Enabled = false;
			this->regno_det->Location = System::Drawing::Point(183, 13);
			this->regno_det->Name = L"regno_det";
			this->regno_det->Size = System::Drawing::Size(173, 20);
			this->regno_det->TabIndex = 12;
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
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->clear_abtn);
			this->groupBox5->Controls->Add(this->search_abtn);
			this->groupBox5->Controls->Add(this->regno_satxt);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Location = System::Drawing::Point(8, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(365, 90);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Search";
			// 
			// clear_abtn
			// 
			this->clear_abtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_abtn->Location = System::Drawing::Point(187, 46);
			this->clear_abtn->Name = L"clear_abtn";
			this->clear_abtn->Size = System::Drawing::Size(96, 31);
			this->clear_abtn->TabIndex = 3;
			this->clear_abtn->Text = L"CLEAR";
			this->clear_abtn->UseVisualStyleBackColor = true;
			this->clear_abtn->Click += gcnew System::EventHandler(this, &Manage_Result::clear_abtn_Click);
			// 
			// search_abtn
			// 
			this->search_abtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_abtn->Location = System::Drawing::Point(85, 46);
			this->search_abtn->Name = L"search_abtn";
			this->search_abtn->Size = System::Drawing::Size(96, 31);
			this->search_abtn->TabIndex = 2;
			this->search_abtn->Text = L"SEARCH";
			this->search_abtn->UseVisualStyleBackColor = true;
			this->search_abtn->Click += gcnew System::EventHandler(this, &Manage_Result::search_abtn_Click);
			// 
			// regno_satxt
			// 
			this->regno_satxt->Location = System::Drawing::Point(183, 17);
			this->regno_satxt->Name = L"regno_satxt";
			this->regno_satxt->Size = System::Drawing::Size(173, 20);
			this->regno_satxt->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 20);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Registration Number";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->submax_txt);
			this->groupBox4->Controls->Add(this->addsub_btn);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->subname_txt);
			this->groupBox4->Controls->Add(this->subpass_txt);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Location = System::Drawing::Point(379, 237);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(238, 142);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Add Subject";
			// 
			// submax_txt
			// 
			this->submax_txt->Location = System::Drawing::Point(87, 69);
			this->submax_txt->Name = L"submax_txt";
			this->submax_txt->Size = System::Drawing::Size(145, 20);
			this->submax_txt->TabIndex = 35;
			// 
			// addsub_btn
			// 
			this->addsub_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addsub_btn->Location = System::Drawing::Point(46, 100);
			this->addsub_btn->Name = L"addsub_btn";
			this->addsub_btn->Size = System::Drawing::Size(148, 31);
			this->addsub_btn->TabIndex = 2;
			this->addsub_btn->Text = L"ADD SUBJECT";
			this->addsub_btn->UseVisualStyleBackColor = true;
			this->addsub_btn->Click += gcnew System::EventHandler(this, &Manage_Result::addsub_btn_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 72);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 13);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Maximum Mark";
			// 
			// subname_txt
			// 
			this->subname_txt->Location = System::Drawing::Point(87, 17);
			this->subname_txt->Name = L"subname_txt";
			this->subname_txt->Size = System::Drawing::Size(145, 20);
			this->subname_txt->TabIndex = 1;
			// 
			// subpass_txt
			// 
			this->subpass_txt->Location = System::Drawing::Point(87, 43);
			this->subpass_txt->Name = L"subpass_txt";
			this->subpass_txt->Size = System::Drawing::Size(145, 20);
			this->subpass_txt->TabIndex = 33;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 46);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Pass Mark";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 20);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Subject Name";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->add_btn);
			this->groupBox3->Controls->Add(this->max_atxt);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->mark_atxt);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->pass_atxt);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->sub_atxt);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->regno_atxt);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Location = System::Drawing::Point(379, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(238, 225);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Result Details";
			// 
			// add_btn
			// 
			this->add_btn->AutoSize = true;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(16, 165);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(208, 41);
			this->add_btn->TabIndex = 3;
			this->add_btn->Text = L"ADD RECORD";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Visible = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &Manage_Result::add_btn_Click);
			// 
			// max_atxt
			// 
			this->max_atxt->Location = System::Drawing::Point(115, 122);
			this->max_atxt->Name = L"max_atxt";
			this->max_atxt->ReadOnly = true;
			this->max_atxt->Size = System::Drawing::Size(117, 20);
			this->max_atxt->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 125);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Maximum Mark";
			// 
			// mark_atxt
			// 
			this->mark_atxt->Location = System::Drawing::Point(115, 96);
			this->mark_atxt->Name = L"mark_atxt";
			this->mark_atxt->Size = System::Drawing::Size(117, 20);
			this->mark_atxt->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Mark Obtained";
			// 
			// pass_atxt
			// 
			this->pass_atxt->Location = System::Drawing::Point(115, 70);
			this->pass_atxt->Name = L"pass_atxt";
			this->pass_atxt->ReadOnly = true;
			this->pass_atxt->Size = System::Drawing::Size(117, 20);
			this->pass_atxt->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Pass Mark";
			// 
			// sub_atxt
			// 
			this->sub_atxt->FormattingEnabled = true;
			this->sub_atxt->Location = System::Drawing::Point(115, 43);
			this->sub_atxt->Name = L"sub_atxt";
			this->sub_atxt->Size = System::Drawing::Size(117, 21);
			this->sub_atxt->TabIndex = 25;
			this->sub_atxt->SelectedIndexChanged += gcnew System::EventHandler(this, &Manage_Result::sub_atxt_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Subject";
			// 
			// regno_atxt
			// 
			this->regno_atxt->Location = System::Drawing::Point(115, 17);
			this->regno_atxt->Name = L"regno_atxt";
			this->regno_atxt->ReadOnly = true;
			this->regno_atxt->Size = System::Drawing::Size(117, 20);
			this->regno_atxt->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 20);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Registration Number";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->save_btn);
			this->tabPage2->Controls->Add(this->modify_btn);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(624, 385);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L" MANAGE";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// save_btn
			// 
			this->save_btn->AutoSize = true;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->Location = System::Drawing::Point(394, 239);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(208, 41);
			this->save_btn->TabIndex = 35;
			this->save_btn->Text = L"SAVE";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Visible = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &Manage_Result::save_btn_Click);
			// 
			// modify_btn
			// 
			this->modify_btn->AutoSize = true;
			this->modify_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modify_btn->Location = System::Drawing::Point(394, 191);
			this->modify_btn->Name = L"modify_btn";
			this->modify_btn->Size = System::Drawing::Size(208, 41);
			this->modify_btn->TabIndex = 34;
			this->modify_btn->Text = L"MODIFY";
			this->modify_btn->UseVisualStyleBackColor = true;
			this->modify_btn->Visible = false;
			this->modify_btn->Click += gcnew System::EventHandler(this, &Manage_Result::modify_btn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->clear_btn);
			this->groupBox1->Controls->Add(this->search_btn);
			this->groupBox1->Controls->Add(this->regno_stxt);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(365, 90);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Search";
			// 
			// clear_btn
			// 
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_btn->Location = System::Drawing::Point(187, 46);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(96, 31);
			this->clear_btn->TabIndex = 3;
			this->clear_btn->Text = L"CLEAR";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &Manage_Result::clear_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->Location = System::Drawing::Point(85, 46);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(96, 31);
			this->search_btn->TabIndex = 2;
			this->search_btn->Text = L"SEARCH";
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Manage_Result::search_btn_Click_1);
			// 
			// regno_stxt
			// 
			this->regno_stxt->Location = System::Drawing::Point(183, 17);
			this->regno_stxt->Name = L"regno_stxt";
			this->regno_stxt->Size = System::Drawing::Size(173, 20);
			this->regno_stxt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration Number";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->gndr_mstxt);
			this->groupBox7->Controls->Add(this->dob_mstxt);
			this->groupBox7->Controls->Add(this->dor_mstxt);
			this->groupBox7->Controls->Add(this->sec_mstxt);
			this->groupBox7->Controls->Add(this->class_mstxt);
			this->groupBox7->Controls->Add(this->parphno_mstxt);
			this->groupBox7->Controls->Add(this->addr_mstxt);
			this->groupBox7->Controls->Add(this->name_mstxt);
			this->groupBox7->Controls->Add(this->rollno_mstxt);
			this->groupBox7->Controls->Add(this->regno_mstxt);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label19);
			this->groupBox7->Controls->Add(this->label20);
			this->groupBox7->Controls->Add(this->label21);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->label34);
			this->groupBox7->Controls->Add(this->label35);
			this->groupBox7->Controls->Add(this->label36);
			this->groupBox7->Enabled = false;
			this->groupBox7->Location = System::Drawing::Point(6, 102);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(365, 272);
			this->groupBox7->TabIndex = 33;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Student Details";
			// 
			// gndr_mstxt
			// 
			this->gndr_mstxt->FormattingEnabled = true;
			this->gndr_mstxt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gndr_mstxt->Location = System::Drawing::Point(183, 116);
			this->gndr_mstxt->Name = L"gndr_mstxt";
			this->gndr_mstxt->Size = System::Drawing::Size(173, 21);
			this->gndr_mstxt->TabIndex = 24;
			// 
			// dob_mstxt
			// 
			this->dob_mstxt->CustomFormat = L"yyyy-MM-dd";
			this->dob_mstxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dob_mstxt->Location = System::Drawing::Point(183, 143);
			this->dob_mstxt->Name = L"dob_mstxt";
			this->dob_mstxt->Size = System::Drawing::Size(173, 20);
			this->dob_mstxt->TabIndex = 23;
			this->dob_mstxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// dor_mstxt
			// 
			this->dor_mstxt->CustomFormat = L"yyyy-MM-dd";
			this->dor_mstxt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dor_mstxt->Location = System::Drawing::Point(183, 39);
			this->dor_mstxt->Name = L"dor_mstxt";
			this->dor_mstxt->Size = System::Drawing::Size(173, 20);
			this->dor_mstxt->TabIndex = 22;
			this->dor_mstxt->Value = System::DateTime(2018, 9, 16, 0, 0, 0, 0);
			// 
			// sec_mstxt
			// 
			this->sec_mstxt->Location = System::Drawing::Point(183, 247);
			this->sec_mstxt->Name = L"sec_mstxt";
			this->sec_mstxt->Size = System::Drawing::Size(173, 20);
			this->sec_mstxt->TabIndex = 21;
			// 
			// class_mstxt
			// 
			this->class_mstxt->Location = System::Drawing::Point(183, 221);
			this->class_mstxt->Name = L"class_mstxt";
			this->class_mstxt->Size = System::Drawing::Size(173, 20);
			this->class_mstxt->TabIndex = 20;
			// 
			// parphno_mstxt
			// 
			this->parphno_mstxt->Location = System::Drawing::Point(183, 195);
			this->parphno_mstxt->Name = L"parphno_mstxt";
			this->parphno_mstxt->Size = System::Drawing::Size(173, 20);
			this->parphno_mstxt->TabIndex = 19;
			// 
			// addr_mstxt
			// 
			this->addr_mstxt->Location = System::Drawing::Point(183, 169);
			this->addr_mstxt->Name = L"addr_mstxt";
			this->addr_mstxt->Size = System::Drawing::Size(173, 20);
			this->addr_mstxt->TabIndex = 18;
			// 
			// name_mstxt
			// 
			this->name_mstxt->Location = System::Drawing::Point(183, 91);
			this->name_mstxt->Name = L"name_mstxt";
			this->name_mstxt->Size = System::Drawing::Size(173, 20);
			this->name_mstxt->TabIndex = 15;
			// 
			// rollno_mstxt
			// 
			this->rollno_mstxt->Location = System::Drawing::Point(183, 65);
			this->rollno_mstxt->Name = L"rollno_mstxt";
			this->rollno_mstxt->Size = System::Drawing::Size(173, 20);
			this->rollno_mstxt->TabIndex = 14;
			// 
			// regno_mstxt
			// 
			this->regno_mstxt->Enabled = false;
			this->regno_mstxt->Location = System::Drawing::Point(183, 13);
			this->regno_mstxt->Name = L"regno_mstxt";
			this->regno_mstxt->Size = System::Drawing::Size(173, 20);
			this->regno_mstxt->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Section";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 224);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Class";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 198);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(112, 13);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Parent Phone Number";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 172);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(45, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Address";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 147);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Date of Birth";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 120);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Gender";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 94);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 13);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Name";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(3, 68);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Roll Number";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(3, 41);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(159, 13);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Date of Admission / Registration";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(3, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(103, 13);
			this->label36->TabIndex = 2;
			this->label36->Text = L"Registration Number";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->res_txt);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->max_txt);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->mark_txt);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->pass_txt);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->sub_txt);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->regno_txt);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(380, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(238, 179);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Result Details";
			// 
			// res_txt
			// 
			this->res_txt->Location = System::Drawing::Point(115, 148);
			this->res_txt->Name = L"res_txt";
			this->res_txt->ReadOnly = true;
			this->res_txt->Size = System::Drawing::Size(117, 20);
			this->res_txt->TabIndex = 33;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Result";
			// 
			// max_txt
			// 
			this->max_txt->Location = System::Drawing::Point(115, 122);
			this->max_txt->Name = L"max_txt";
			this->max_txt->ReadOnly = true;
			this->max_txt->Size = System::Drawing::Size(117, 20);
			this->max_txt->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Maximum Mark";
			// 
			// mark_txt
			// 
			this->mark_txt->Enabled = false;
			this->mark_txt->Location = System::Drawing::Point(115, 96);
			this->mark_txt->Name = L"mark_txt";
			this->mark_txt->Size = System::Drawing::Size(117, 20);
			this->mark_txt->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Mark Obtained";
			// 
			// pass_txt
			// 
			this->pass_txt->Location = System::Drawing::Point(115, 70);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->ReadOnly = true;
			this->pass_txt->Size = System::Drawing::Size(117, 20);
			this->pass_txt->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Pass Mark";
			// 
			// sub_txt
			// 
			this->sub_txt->FormattingEnabled = true;
			this->sub_txt->Location = System::Drawing::Point(115, 43);
			this->sub_txt->Name = L"sub_txt";
			this->sub_txt->Size = System::Drawing::Size(117, 21);
			this->sub_txt->TabIndex = 25;
			this->sub_txt->SelectedIndexChanged += gcnew System::EventHandler(this, &Manage_Result::sub_txt_SelectedIndexChanged_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Subject";
			// 
			// regno_txt
			// 
			this->regno_txt->Location = System::Drawing::Point(115, 17);
			this->regno_txt->Name = L"regno_txt";
			this->regno_txt->ReadOnly = true;
			this->regno_txt->Size = System::Drawing::Size(117, 20);
			this->regno_txt->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Registration Number";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->show_subjects_btn);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->show_results_btn);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(624, 385);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"VIEW";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// show_subjects_btn
			// 
			this->show_subjects_btn->Location = System::Drawing::Point(263, 355);
			this->show_subjects_btn->Name = L"show_subjects_btn";
			this->show_subjects_btn->Size = System::Drawing::Size(118, 23);
			this->show_subjects_btn->TabIndex = 5;
			this->show_subjects_btn->Text = L"SHOW SUBJECTS";
			this->show_subjects_btn->UseVisualStyleBackColor = true;
			this->show_subjects_btn->Click += gcnew System::EventHandler(this, &Manage_Result::show_subjects_btn_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView2->Location = System::Drawing::Point(0, 228);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(621, 121);
			this->dataGridView2->TabIndex = 4;
			// 
			// show_results_btn
			// 
			this->show_results_btn->Location = System::Drawing::Point(263, 199);
			this->show_results_btn->Name = L"show_results_btn";
			this->show_results_btn->Size = System::Drawing::Size(118, 23);
			this->show_results_btn->TabIndex = 3;
			this->show_results_btn->Text = L"SHOW RESULTS";
			this->show_results_btn->UseVisualStyleBackColor = true;
			this->show_results_btn->Click += gcnew System::EventHandler(this, &Manage_Result::show_results_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(621, 193);
			this->dataGridView1->TabIndex = 2;
			// 
			// Manage_Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 403);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Manage_Result";
			this->Text = L"Manage_Result";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void sub_txt_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void addsub_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	add_subload();
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("ALTER TABLE `database`.`result` ADD COLUMN `"+subname_txt->Text+"` INT(11) NULL;", conDataBase);
	try {
		conDataBase->Open();
		int reader = cmdDataBase->ExecuteNonQuery();
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

	String^ constring3 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase3 = gcnew MySqlConnection(constring3);
	MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("INSERT INTO `database`.`subjects` (`subject`,`pass`,`maximum`) values ('" + this->subname_txt->Text + "','" + this->subpass_txt->Text + "','" + this->submax_txt->Text + "');", conDataBase3);
	MySqlDataReader^ reader3;
	try {
		conDataBase3->Open();
		reader3 = cmdDataBase3->ExecuteReader();
		MessageBox::Show("Subject Added Successfully");
		while (reader3->Read()) {

		}
		subname_txt->Text = "";
		subpass_txt->Text = "";
		submax_txt->Text = "";
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	clear_add();
	sub_atxt->Items->Clear();
}
private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	int counterx = 0;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`result`;", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();

		while (reader->Read()) {
			if (reader->GetInt32("RegNo").ToString() == regno_atxt->Text)
				counterx++;
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	reader->Close();
	if (counterx == 0) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`result` (`RegNo`) values ('" + this->regno_atxt->Text + "');", conDataBase);
		MySqlDataReader^ reader;
		try {
			conDataBase->Open();
			reader = cmdDataBase->ExecuteReader();

			while (reader->Read()) {

			}
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
		reader->Close();
	}
	String^ constring4 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase4 = gcnew MySqlConnection(constring4);
	MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("UPDATE `database`.`result` SET `"+sub_atxt->Text+"`='" + System::Convert::ToInt32(this->mark_atxt->Text) + "' WHERE `RegNo`='" + System::Convert::ToInt32(this->regno_atxt->Text) + "';", conDataBase);
	MySqlDataReader^ reader4;
	try {
		conDataBase4->Open();
		reader4 = cmdDataBase4->ExecuteReader();
		MessageBox::Show(sub_atxt->Text+" Marks Added Successfully");
		while (reader4->Read()) {

		}
		sub_atxt->Text = "";
		mark_atxt->Text = "";
		pass_atxt->Text = "";
		max_atxt->Text = "";
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	reader4->Close();
}
private:System::Void add_subload(void) {
	sub_atxt->Items->Clear();
	String^ constring5 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase5 = gcnew MySqlConnection(constring5);
	MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("SELECT * FROM `database`.`subjects`;", conDataBase5);
	MySqlDataReader^ reader5;
	try {
		conDataBase5->Open();
		reader5 = cmdDataBase5->ExecuteReader();
		sub_atxt->Items->Clear();
		sub_txt->Items->Clear();
		while (reader5->Read()) {
			sub_atxt->Items->Add(reader5->GetString("subject"));
			sub_txt->Items->Add(reader5->GetString("subject"));
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	reader5->Close();
}



private: System::Void search_abtn_Click(System::Object^  sender, System::EventArgs^  e) {
	add_subload();
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `RegNo` LIKE '%" + regno_satxt->Text + "%';", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		if (reader->Read()) {
			add_btn->Visible = true;
			regno_det->Text = reader->GetInt32("RegNo").ToString();
			regno_atxt->Text = reader->GetInt32("RegNo").ToString();
			dor_det->Value = reader->GetDateTime("DOR");
			rollno_det->Text = reader->GetInt32("RollNo").ToString();
			name_det->Text = reader->GetString("StudName");
			gndr_det->Text = reader->GetString("Gender");
			dob_det->Value = reader->GetDateTime("DOB");
			addr_det->Text = reader->GetString("Address");
			parphno_det->Text = reader->GetDouble("PhNo").ToString();
			class_det->Text = reader->GetString("Class");
			sec_det->Text = reader->GetString("Section");
		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void sub_atxt_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ constring6 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase6 = gcnew MySqlConnection(constring6);
	MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("SELECT * FROM `database`.`subjects` WHERE `subject`='" + sub_atxt->Text + "';", conDataBase6);
	MySqlDataReader^ reader6;
	try {
		conDataBase6->Open();
		reader6 = cmdDataBase6->ExecuteReader();

		if (reader6->Read()) {
			pass_atxt->Text = reader6->GetInt32("pass").ToString();
			max_atxt->Text = reader6->GetInt32("maximum").ToString();
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void clear_add(void) {
	add_btn->Visible = false;
	regno_atxt->Text = "";
	sub_atxt->Text = "";
	pass_atxt->Text = "";
	mark_atxt->Text = "";
	regno_satxt->Text = "";
	regno_det->Text = "";
	rollno_det->Text = "";
	name_det->Text = "";
	gndr_det->Text = "";
	addr_det->Text = "";
	parphno_det->Text = "";
	class_det->Text = "";
	sec_det->Text = "";
	subname_txt->Text = "";
	subpass_txt->Text = "";
	submax_txt->Text = "";
}
private: System::Void clear_abtn_Click(System::Object^  sender, System::EventArgs^  e) {
	clear_add();
}
private: System::Void modify_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox2->Enabled = true;
	save_btn->Visible = true;
}
private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `database`.`result` SET `" + sub_txt->Text + "`='" + System::Convert::ToInt32(this->mark_txt->Text) + "' WHERE `RegNo`='" + System::Convert::ToInt32(this->regno_txt->Text) + "';", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		MessageBox::Show(sub_txt->Text + " Marks Updated Successfully");
		while (reader->Read()) {

		}
		clear_modify();

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void clear_modify(void) {
	regno_mstxt->Text = "";
	dor_mstxt->Text = "";
	rollno_mstxt->Text = "";
	name_mstxt->Text = "";
	gndr_mstxt->Text = "";
	dob_mstxt->Text = "";
	addr_mstxt->Text = "";
	parphno_mstxt->Text = "";
	class_mstxt->Text = "";
	sec_mstxt->Text = "";
	sub_txt->Text = "";
	mark_txt->Text = "";
	pass_txt->Text = "";
	max_txt->Text = "";
	regno_txt->Text = "";
	res_txt->Text = "";
	regno_stxt->Text = "";
	modify_btn->Visible = false;
	save_btn->Visible = false;
	groupBox2->Enabled = false;
}
private: System::Void clear_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	clear_modify();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void show_results_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`result`", conDataBase);
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
private: System::Void show_subjects_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`subjects`", conDataBase);
	MySqlDataReader^ reader;
	try {
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable ^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource ^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		dataGridView2->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void search_btn_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ constring7 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase7 = gcnew MySqlConnection(constring7);
	MySqlCommand^ cmdDataBase7 = gcnew MySqlCommand("SELECT * FROM `database`.`student` WHERE `RegNo` LIKE '%" + regno_stxt->Text + "%';", conDataBase7);
	MySqlDataReader^ reader7;
	try {
		conDataBase7->Open();
		reader7 = cmdDataBase7->ExecuteReader();
		if (reader7->Read()) {
			modify_btn->Visible = true;
			regno_txt->Text = reader7->GetInt32("RegNo").ToString();
			regno_mstxt->Text = reader7->GetInt32("RegNo").ToString();
			dor_mstxt->Value = reader7->GetDateTime("DOR");
			rollno_mstxt->Text = reader7->GetInt32("RollNo").ToString();
			name_mstxt->Text = reader7->GetString("StudName");
			gndr_mstxt->Text = reader7->GetString("Gender");
			dob_mstxt->Value = reader7->GetDateTime("DOB");
			addr_mstxt->Text = reader7->GetString("Address");
			parphno_mstxt->Text = reader7->GetDouble("PhNo").ToString();
			class_mstxt->Text = reader7->GetString("Class");
			sec_mstxt->Text = reader7->GetString("Section");
		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	reader7->Close();
	add_subload();
}
private: System::Void sub_txt_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	String^ substring = sub_txt->Text;
	String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
	MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `database`.`subjects` WHERE `subject`='" + sub_txt->Text + "';", conDataBase1);
	MySqlDataReader^ reader1;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `database`.`result` WHERE `RegNo`='" + regno_txt->Text + "';", conDataBase);
	MySqlDataReader^ reader;
	try {
		conDataBase->Open();
		reader = cmdDataBase->ExecuteReader();
		conDataBase1->Open();
		reader1 = cmdDataBase1->ExecuteReader();

		if (reader->Read() && reader1->Read()) {
			pass_txt->Text = reader1->GetInt32("pass").ToString();
			max_txt->Text = reader1->GetInt32("maximum").ToString();
			mark_txt->Text = reader->GetInt32(substring).ToString();
			if (reader->GetInt32(substring) >= reader1->GetInt32("pass"))
				res_txt->Text = "PASS";
			else
				res_txt->Text = "FAIL";
			mark_txt->Enabled = true;
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}