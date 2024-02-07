#pragma once

namespace project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;




	private: System::Windows::Forms::Label^ label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(233, 259);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username: ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(589, 495);
			this->button1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 81);
			this->button1->TabIndex = 1;
			this->button1->Text = L" Giris Yap";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(233, 366);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 46);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxUsername->Location = System::Drawing::Point(454, 264);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(546, 41);
			this->textBoxUsername->TabIndex = 3;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxPassword->Location = System::Drawing::Point(454, 371);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(546, 41);
			this->textBoxPassword->TabIndex = 4;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(464, 678);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(537, 36);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Please enter a username and password";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1393, 881);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm";
			this->Text = L"Uygulama";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if(textBoxUsername->Text == "admin") {
			if (textBoxPassword->Text == "admin") {
				label3->Text = "Welcome admin";
			}
			else {
				label3->Text = "Invalid username or password";
			}
		}
		else if(textBoxUsername->Text == "user") {
			if (textBoxPassword->Text == "user") {
				label3->Text = "Welcome user";
			}
			else {
				label3->Text = "Invalid username or password";
			}
		}
		else{
			label3->Text = "Invalid username or password";
		}
	}
	private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		label3->Visible = true;
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
