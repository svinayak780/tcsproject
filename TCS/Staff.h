#pragma once
#include "Student_Add.h"
#include "Manage_Result.h"

namespace TCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Staff
	/// </summary>
	public ref class Staff : public System::Windows::Forms::Form
	{
	public:
		Staff(void)
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
		~Staff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  stf_res;

	private: System::Windows::Forms::Button^  stf_std;



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
			this->stf_res = (gcnew System::Windows::Forms::Button());
			this->stf_std = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(431, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME TO STAFF PORTAL";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// stf_res
			// 
			this->stf_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stf_res->Location = System::Drawing::Point(230, 60);
			this->stf_res->Name = L"stf_res";
			this->stf_res->Size = System::Drawing::Size(152, 36);
			this->stf_res->TabIndex = 5;
			this->stf_res->Text = L"MANAGE RESULTS";
			this->stf_res->UseVisualStyleBackColor = true;
			this->stf_res->Click += gcnew System::EventHandler(this, &Staff::stf_res_Click);
			// 
			// stf_std
			// 
			this->stf_std->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stf_std->Location = System::Drawing::Point(72, 60);
			this->stf_std->Name = L"stf_std";
			this->stf_std->Size = System::Drawing::Size(152, 36);
			this->stf_std->TabIndex = 4;
			this->stf_std->Text = L"MANAGE STUDENTS";
			this->stf_std->UseVisualStyleBackColor = true;
			this->stf_std->Click += gcnew System::EventHandler(this, &Staff::stf_std_Click);
			// 
			// Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 118);
			this->Controls->Add(this->stf_res);
			this->Controls->Add(this->stf_std);
			this->Controls->Add(this->label1);
			this->Name = L"Staff";
			this->Text = L"Staff";
			this->Load += gcnew System::EventHandler(this, &Staff::Staff_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Staff_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void stf_std_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Student_Add studentaddform;
		studentaddform.ShowDialog();
		this->Show();
	}
	private: System::Void stf_res_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Manage_Result manageresultform;
		manageresultform.ShowDialog();
		this->Show();
	}
};
}
