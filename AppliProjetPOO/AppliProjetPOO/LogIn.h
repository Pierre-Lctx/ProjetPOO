#pragma once

#include "MyForm1.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			MyForm^ mainForm;

			mainForm = gcnew MyForm();

			//textBoxUsername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(keypressed);
			//textBoxPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(keypressed);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Connexion;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxShowPassword;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Connexion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Connexion
			// 
			this->Connexion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Connexion->Location = System::Drawing::Point(100, 475);
			this->Connexion->Name = L"Connexion";
			this->Connexion->Size = System::Drawing::Size(400, 100);
			this->Connexion->TabIndex = 0;
			this->Connexion->Text = L"Connexion";
			this->Connexion->UseVisualStyleBackColor = true;
			this->Connexion->Click += gcnew System::EventHandler(this, &LogIn::Connexion_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(20, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username :";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(200, 250);
			this->textBoxUsername->Multiline = true;
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(350, 40);
			this->textBoxUsername->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(200, 350);
			this->textBoxPassword->Multiline = true;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(350, 40);
			this->textBoxPassword->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password  :";
			// 
			// checkBoxShowPassword
			// 
			this->checkBoxShowPassword->AutoSize = true;
			this->checkBoxShowPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxShowPassword->ForeColor = System::Drawing::Color::White;
			this->checkBoxShowPassword->Location = System::Drawing::Point(403, 396);
			this->checkBoxShowPassword->Name = L"checkBoxShowPassword";
			this->checkBoxShowPassword->Size = System::Drawing::Size(147, 25);
			this->checkBoxShowPassword->TabIndex = 5;
			this->checkBoxShowPassword->Text = L"Show Password";
			this->checkBoxShowPassword->UseVisualStyleBackColor = true;
			this->checkBoxShowPassword->CheckedChanged += gcnew System::EventHandler(this, &LogIn::checkBoxShowPassword_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(200, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(584, 611);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBoxShowPassword);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Connexion);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"LogIn";
			this->Text = L"LogIn";
			this->Load += gcnew System::EventHandler(this, &LogIn::LogIn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Suppression de la touche entrer

	private: void keypressed(System::Object^ o, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// The keypressed method uses the KeyChar property to check 
		// whether the ENTER key is pressed. 

		// If the ENTER key is pressed, the Handled property is set to true, 
		// to indicate the event is handled.
		if (e->KeyChar == (char)System::Windows::Forms::Keys::Return)
		{
			e->Handled = true;
		}
	}

#pragma endregion

	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void Connexion_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		MyForm().Show();
	}

	private: System::Void checkBoxShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}

};
}
