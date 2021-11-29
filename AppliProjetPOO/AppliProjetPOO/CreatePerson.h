#pragma once

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreatePerson
	/// </summary>
	public ref class CreatePerson : public System::Windows::Forms::Form
	{
	public:
		CreatePerson(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			labelLivraison->Visible = false;
			labelFacturation->Visible = false;
			labelPersonnelle->Visible = false;

			textBoxAdresseLivraison->Visible = false;
			textBoxAdresseFacturation->Visible = false;
			textBoxAdressePersonnelle->Visible = false;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CreatePerson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxClient;
	private: System::Windows::Forms::CheckBox^ checkBoxEmploye;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Label^ labelGenre;



	private: System::Windows::Forms::ComboBox^ comboBoxGenre;

	private: System::Windows::Forms::TextBox^ textBoxPrenom;

	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxAdresseMail;
	private: System::Windows::Forms::TextBox^ textBoxNumTelephone;
	private: System::Windows::Forms::Label^ labelNumTelephone;
	private: System::Windows::Forms::Label^ labelAdresseMail;




	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ labelFacturation;



	private: System::Windows::Forms::Label^ labelLivraison;


	private: System::Windows::Forms::Label^ labelPersonnelle;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxClient = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEmploye = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->labelGenre = (gcnew System::Windows::Forms::Label());
			this->comboBoxGenre = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseMail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumTelephone = (gcnew System::Windows::Forms::TextBox());
			this->labelNumTelephone = (gcnew System::Windows::Forms::Label());
			this->labelAdresseMail = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelFacturation = (gcnew System::Windows::Forms::Label());
			this->labelLivraison = (gcnew System::Windows::Forms::Label());
			this->labelPersonnelle = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(29, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(517, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ajout d\'une personne";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 153);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Statut de la personne";
			// 
			// checkBoxClient
			// 
			this->checkBoxClient->AutoSize = true;
			this->checkBoxClient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxClient->ForeColor = System::Drawing::Color::White;
			this->checkBoxClient->Location = System::Drawing::Point(39, 207);
			this->checkBoxClient->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxClient->Name = L"checkBoxClient";
			this->checkBoxClient->Size = System::Drawing::Size(103, 34);
			this->checkBoxClient->TabIndex = 2;
			this->checkBoxClient->Text = L"Client";
			this->checkBoxClient->UseVisualStyleBackColor = true;
			this->checkBoxClient->CheckedChanged += gcnew System::EventHandler(this, &CreatePerson::checkBoxClient_CheckedChanged);
			// 
			// checkBoxEmploye
			// 
			this->checkBoxEmploye->AutoSize = true;
			this->checkBoxEmploye->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmploye->ForeColor = System::Drawing::Color::White;
			this->checkBoxEmploye->Location = System::Drawing::Point(39, 245);
			this->checkBoxEmploye->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmploye->Name = L"checkBoxEmploye";
			this->checkBoxEmploye->Size = System::Drawing::Size(136, 34);
			this->checkBoxEmploye->TabIndex = 3;
			this->checkBoxEmploye->Text = L"Employé";
			this->checkBoxEmploye->UseVisualStyleBackColor = true;
			this->checkBoxEmploye->CheckedChanged += gcnew System::EventHandler(this, &CreatePerson::checkBoxEmploye_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(33, 332);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(374, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Informations personnelles";
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->ForeColor = System::Drawing::Color::White;
			this->labelNom->Location = System::Drawing::Point(34, 379);
			this->labelNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(120, 30);
			this->labelNom->TabIndex = 5;
			this->labelNom->Text = L"Nom      :";
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrenom->ForeColor = System::Drawing::Color::White;
			this->labelPrenom->Location = System::Drawing::Point(34, 421);
			this->labelPrenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(119, 30);
			this->labelPrenom->TabIndex = 6;
			this->labelPrenom->Text = L"Prénom :";
			// 
			// labelGenre
			// 
			this->labelGenre->AutoSize = true;
			this->labelGenre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGenre->ForeColor = System::Drawing::Color::White;
			this->labelGenre->Location = System::Drawing::Point(34, 461);
			this->labelGenre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelGenre->Name = L"labelGenre";
			this->labelGenre->Size = System::Drawing::Size(123, 30);
			this->labelGenre->TabIndex = 7;
			this->labelGenre->Text = L"Genre    :";
			// 
			// comboBoxGenre
			// 
			this->comboBoxGenre->FormattingEnabled = true;
			this->comboBoxGenre->Location = System::Drawing::Point(161, 466);
			this->comboBoxGenre->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxGenre->Name = L"comboBoxGenre";
			this->comboBoxGenre->Size = System::Drawing::Size(246, 25);
			this->comboBoxGenre->TabIndex = 8;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(161, 421);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Multiline = true;
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(246, 30);
			this->textBoxPrenom->TabIndex = 9;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(161, 379);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Multiline = true;
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(246, 30);
			this->textBoxNom->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(704, 153);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 36);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Communication";
			// 
			// textBoxAdresseMail
			// 
			this->textBoxAdresseMail->Location = System::Drawing::Point(1003, 207);
			this->textBoxAdresseMail->Margin = System::Windows::Forms::Padding(2);
			this->textBoxAdresseMail->Multiline = true;
			this->textBoxAdresseMail->Name = L"textBoxAdresseMail";
			this->textBoxAdresseMail->Size = System::Drawing::Size(246, 30);
			this->textBoxAdresseMail->TabIndex = 15;
			// 
			// textBoxNumTelephone
			// 
			this->textBoxNumTelephone->Location = System::Drawing::Point(1003, 249);
			this->textBoxNumTelephone->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNumTelephone->Multiline = true;
			this->textBoxNumTelephone->Name = L"textBoxNumTelephone";
			this->textBoxNumTelephone->Size = System::Drawing::Size(246, 30);
			this->textBoxNumTelephone->TabIndex = 14;
			// 
			// labelNumTelephone
			// 
			this->labelNumTelephone->AutoSize = true;
			this->labelNumTelephone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumTelephone->ForeColor = System::Drawing::Color::White;
			this->labelNumTelephone->Location = System::Drawing::Point(705, 249);
			this->labelNumTelephone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNumTelephone->Name = L"labelNumTelephone";
			this->labelNumTelephone->Size = System::Drawing::Size(293, 30);
			this->labelNumTelephone->TabIndex = 13;
			this->labelNumTelephone->Text = L"Numéro de téléphone :";
			// 
			// labelAdresseMail
			// 
			this->labelAdresseMail->AutoSize = true;
			this->labelAdresseMail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdresseMail->ForeColor = System::Drawing::Color::White;
			this->labelAdresseMail->Location = System::Drawing::Point(709, 207);
			this->labelAdresseMail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAdresseMail->Name = L"labelAdresseMail";
			this->labelAdresseMail->Size = System::Drawing::Size(290, 30);
			this->labelAdresseMail->TabIndex = 12;
			this->labelAdresseMail->Text = L"Adresse mail                 :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(704, 332);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 36);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Adresse";
			// 
			// labelFacturation
			// 
			this->labelFacturation->AutoSize = true;
			this->labelFacturation->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFacturation->ForeColor = System::Drawing::Color::White;
			this->labelFacturation->Location = System::Drawing::Point(707, 421);
			this->labelFacturation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelFacturation->Name = L"labelFacturation";
			this->labelFacturation->Size = System::Drawing::Size(162, 30);
			this->labelFacturation->TabIndex = 18;
			this->labelFacturation->Text = L"Facturation :";
			// 
			// labelLivraison
			// 
			this->labelLivraison->AutoSize = true;
			this->labelLivraison->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLivraison->ForeColor = System::Drawing::Color::White;
			this->labelLivraison->Location = System::Drawing::Point(705, 379);
			this->labelLivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelLivraison->Name = L"labelLivraison";
			this->labelLivraison->Size = System::Drawing::Size(164, 30);
			this->labelLivraison->TabIndex = 17;
			this->labelLivraison->Text = L"Livraison      :";
			// 
			// labelPersonnelle
			// 
			this->labelPersonnelle->AutoSize = true;
			this->labelPersonnelle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPersonnelle->ForeColor = System::Drawing::Color::White;
			this->labelPersonnelle->Location = System::Drawing::Point(705, 466);
			this->labelPersonnelle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPersonnelle->Name = L"labelPersonnelle";
			this->labelPersonnelle->Size = System::Drawing::Size(164, 30);
			this->labelPersonnelle->TabIndex = 21;
			this->labelPersonnelle->Text = L"Personnelle :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(495, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 41);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePerson::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(935, 377);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 32);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(935, 419);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 32);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Ajouter";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(935, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 32);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Ajouter";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// CreatePerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1278, 596);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelPersonnelle);
			this->Controls->Add(this->labelFacturation);
			this->Controls->Add(this->labelLivraison);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxAdresseMail);
			this->Controls->Add(this->textBoxNumTelephone);
			this->Controls->Add(this->labelNumTelephone);
			this->Controls->Add(this->labelAdresseMail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->comboBoxGenre);
			this->Controls->Add(this->labelGenre);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBoxEmploye);
			this->Controls->Add(this->checkBoxClient);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"CreatePerson";
			this->Text = L"CreatePerson";
			this->Load += gcnew System::EventHandler(this, &CreatePerson::CreatePerson_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreatePerson_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Boolean checkIsNotVoid()
	{
		if (textBoxNom->Text == "" && textBoxPrenom->Text == "" && textBoxAdresseMail->Text == "" && textBoxNumTelephone->Text == "" && textBoxAdresseLivraison->Text == "" && textBoxAdresseFacturation->Text == "" && checkBoxClient->Checked)
			return true;
		else if (textBoxNom->Text == "" && textBoxPrenom->Text == "" && textBoxAdresseMail->Text == "" && textBoxNumTelephone->Text == "" && textBoxAdressePersonnelle->Text == "" && checkBoxEmploye->Checked)
			return true;
		else
			return false;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkIsNotVoid())
		{
			MessageBox::Show("Ok");
		}
		else
		{
			MessageBox::Show("Vous devez remplir tous les champs !");
		}
	}
	private: System::Void checkBoxClient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		labelLivraison->Visible = true;
		labelFacturation->Visible = true;
		labelPersonnelle->Visible = false;

		textBoxAdresseLivraison->Visible = true;
		textBoxAdresseFacturation->Visible = true;
		textBoxAdressePersonnelle->Visible = false;
	}

	private: System::Void checkBoxEmploye_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		labelLivraison->Visible = true;
		labelFacturation->Visible = true;
		labelPersonnelle->Visible = true;

		textBoxAdresseLivraison->Visible = true;
		textBoxAdresseFacturation->Visible = true;
		textBoxAdressePersonnelle->Visible = true;
	}
};
}
