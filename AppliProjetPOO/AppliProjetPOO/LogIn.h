#pragma once

#include "MenuPrincipal.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	private:
		MyForm^ mainForm = gcnew MyForm();

	public:
		LogIn(void)
		{
			InitializeComponent();
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblShowPass;
	private: System::Windows::Forms::PictureBox^ pctBoxPassVisible;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogIn::typeid));
			this->Connexion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblShowPass = (gcnew System::Windows::Forms::Label());
			this->pctBoxPassVisible = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBoxPassVisible))->BeginInit();
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
			this->textBoxUsername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LogIn::textBoxUsername_KeyPress);
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
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(350, 40);
			this->textBoxPassword->TabIndex = 4;
			this->textBoxPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LogIn::textBoxPassword_KeyPress);
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(200, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// lblShowPass
			// 
			this->lblShowPass->AutoSize = true;
			this->lblShowPass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->lblShowPass->Location = System::Drawing::Point(399, 404);
			this->lblShowPass->Name = L"lblShowPass";
			this->lblShowPass->Size = System::Drawing::Size(129, 19);
			this->lblShowPass->TabIndex = 8;
			this->lblShowPass->Text = L"Voir Mot de Passe";
			// 
			// pctBoxPassVisible
			// 
			this->pctBoxPassVisible->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pctBoxPassVisible->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctBoxPassVisible.Image")));
			this->pctBoxPassVisible->Location = System::Drawing::Point(534, 404);
			this->pctBoxPassVisible->Name = L"pctBoxPassVisible";
			this->pctBoxPassVisible->Size = System::Drawing::Size(40, 20);
			this->pctBoxPassVisible->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pctBoxPassVisible->TabIndex = 9;
			this->pctBoxPassVisible->TabStop = false;
			this->pctBoxPassVisible->Click += gcnew System::EventHandler(this, &LogIn::pictureBox2_Click);
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(584, 611);
			this->Controls->Add(this->pctBoxPassVisible);
			this->Controls->Add(this->lblShowPass);
			this->Controls->Add(this->pictureBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBoxPassVisible))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Bloc a Key

	private: void keypressed(System::Windows::Forms::KeyPressEventArgs^ e)
	{
		e->Handled = false;
		switch (e->KeyChar)
		{
		case (char)System::Windows::Forms::Keys::Enter:
			e->Handled = true;
			break;
		default:
			e->Handled = false;
			break;
		}
	}

#pragma endregion

	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void Connexion_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-P3RNDHD;Initial Catalog=TestBDDCon;Integrated Security=True");
		con->Open();
		String^  query = "SELECT *from Login Where Name = '" + textBoxUsername->Text + "' and Password = '" + textBoxPassword->Text +"'";
		SqlDataAdapter^ SDA = gcnew SqlDataAdapter(query, con);
		DataTable^ DT = gcnew DataTable();
		SDA->Fill(DT);

		if (DT->Rows->Count == 1)
		{	
			MessageBoxButtons::OK;
			MessageBox::Show("Your are Logged in !");
			this->Hide();
			mainForm->Show();
		}
		else
		{
			MessageBox::Show("Wrong Username or Password");
			textBoxUsername->Clear();
			textBoxPassword->Clear();
		}

		
	}

	private: System::Void checkBoxShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}

private: System::Void textBoxUsername_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	keypressed(e);
}
private: System::Void textBoxPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	keypressed(e);
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	if (textBoxPassword->UseSystemPasswordChar == true)
	{
		textBoxPassword->UseSystemPasswordChar = false;
		this->pctBoxPassVisible->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\passVisiblePink.png")));
		
	}
	else 
	{
		textBoxPassword->UseSystemPasswordChar = true;
		this->pctBoxPassVisible->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\passVisiblePurple.png")));
	}
}
};
}
