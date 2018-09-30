#pragma once
#include "Student_Add.h"
#include "Manage_Staff.h"
#include "Manage_Result.h"
namespace TCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  adm_stf;
	private: System::Windows::Forms::Button^  adm_std;
	private: System::Windows::Forms::Button^  adm_res;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adm_stf = (gcnew System::Windows::Forms::Button());
			this->adm_std = (gcnew System::Windows::Forms::Button());
			this->adm_res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO ADMIN PORTAL";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Admin::label1_Click);
			// 
			// adm_stf
			// 
			this->adm_stf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_stf->Location = System::Drawing::Point(12, 51);
			this->adm_stf->Name = L"adm_stf";
			this->adm_stf->Size = System::Drawing::Size(156, 36);
			this->adm_stf->TabIndex = 1;
			this->adm_stf->Text = L"MANAGE STAFF";
			this->adm_stf->UseVisualStyleBackColor = true;
			this->adm_stf->Click += gcnew System::EventHandler(this, &Admin::adm_stf_Click);
			// 
			// adm_std
			// 
			this->adm_std->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_std->Location = System::Drawing::Point(174, 50);
			this->adm_std->Name = L"adm_std";
			this->adm_std->Size = System::Drawing::Size(156, 36);
			this->adm_std->TabIndex = 2;
			this->adm_std->Text = L"MANAGE STUDENTS";
			this->adm_std->UseVisualStyleBackColor = true;
			this->adm_std->Click += gcnew System::EventHandler(this, &Admin::adm_std_Click);
			// 
			// adm_res
			// 
			this->adm_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_res->Location = System::Drawing::Point(336, 50);
			this->adm_res->Name = L"adm_res";
			this->adm_res->Size = System::Drawing::Size(156, 36);
			this->adm_res->TabIndex = 3;
			this->adm_res->Text = L"MANAGE RESULTS";
			this->adm_res->UseVisualStyleBackColor = true;
			this->adm_res->Click += gcnew System::EventHandler(this, &Admin::adm_res_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 98);
			this->Controls->Add(this->adm_res);
			this->Controls->Add(this->adm_std);
			this->Controls->Add(this->adm_stf);
			this->Controls->Add(this->label1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void adm_std_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Student_Add studentaddform;
		studentaddform.ShowDialog();
		this->Show();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void adm_stf_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TCS::Manage_Staff managestaffform;
	managestaffform.ShowDialog();
	this->Show();
}
private: System::Void adm_res_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TCS::Manage_Result manageresultform;
	manageresultform.ShowDialog();
	this->Show();
}
};
}
