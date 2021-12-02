#pragma once

#include "Connection.h"
#include "gestionPersonnel.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace connection;

	/// <summary>
	/// Description résumée de ModifierPersonnel
	/// </summary>
	public ref class ModifierPersonnel : public System::Windows::Forms::Form
	{
	public: Connect conn;
	
	public:
		ModifierPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			Connect^ conn = gcnew Connect();

			conn->openConnection();

			String^ query = "select Personne.ID_PERSONNE, Personne.NOM_PERSONNE, Personne.PRENOM_PERSONNE, Personne.TELEPHONE, Personne.ADRESSE_MAIL, Personne.DATE_NAISSANCE, Personnel.DATE_EMBAUCHE, Personnel.ID_PERSONNEL_GERER, Adresse.NUMERO_VOIE, Adresse.RUE, Adresse.BATIMENT, Adresse.ETAGE, Ville.NOM_VILLE from DBProjet.dbo.Personne INNER JOIN DBProjet.dbo.Personnel ON Personne.ID_PERSONNE = Personnel.ID_PERSONNE INNER JOIN DBProjet.dbo.Adresse ON Personnel.ID_ADRESSE = Adresse.ID_ADRESSE INNER JOIN DBProjet.dbo.Ville ON Adresse.ID_VILLE = Ville.ID_VILLE WHERE personne.ID_PERSONNE = 4;";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			SqlDataReader^ dr = cmd->ExecuteReader();

			while (dr->Read())
			{
				textBoxNom->Text = dr["NOM_PERSONNE"]->ToString();
				textBoxPrenom->Text = dr["PRENOM_PERSONNE"]->ToString(); 
				textBoxTelephone->Text = dr["TELEPHONE"]->ToString();
				textBoxAdresseMail->Text = dr["ADRESSE_MAIL"]->ToString();
				dateTimePickerNaissance->Text = dr["DATE_NAISSANCE"]->ToString();
				dateTimePickerEmbauche->Text = dr["DATE_EMBAUCHE"]->ToString();
				textBoxResponsable->Text = dr["ID_PERSONNEL_GERER"]->ToString();
				textBoxNumVoie->Text = dr["NUMERO_VOIE"]->ToString();
				textBoxRue->Text = dr["RUE"]->ToString(); 
				textBoxBatiment->Text = dr["BATIMENT"]->ToString();
				textBoxVille->Text = dr["NOM_VILLE"]->ToString();
			}

			String^ query1 = "select Personne.NOM_PERSONNE from DBProjet.dbo.Personne INNER JOIN DBProjet.dbo.Personnel ON Personne.ID_PERSONNE = Personnel.ID_PERSONNE WHERE Personnel.ID_PERSONNE = 4;";
			SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

			dr->Close();

			SqlDataReader^ dr1 = cmd1->ExecuteReader();

			while (dr1->Read())
			{
				textBoxResponsable->Text = dr1["NOM_PERSONNE"]->ToString();
			}

			dr1->Close();

			conn->closeConnection();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ModifierPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxTelephone;
	private: System::Windows::Forms::TextBox^ textBoxResponsable;




	private: System::Windows::Forms::TextBox^ textBoxAdresseMail;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxVille;

	private: System::Windows::Forms::TextBox^ textBoxCodePostal;

	private: System::Windows::Forms::TextBox^ textBoxBatiment;

	private: System::Windows::Forms::TextBox^ textBoxEtage;

	private: System::Windows::Forms::TextBox^ textBoxNumVoie;

	private: System::Windows::Forms::TextBox^ textBoxRue;

	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmbauche;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelephone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResponsable = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresseMail = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBatiment = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEtage = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumVoie = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(441, 21);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modifier un personnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(40, 100);
			this->label2->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(40, 156);
			this->label3->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(40, 380);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Date d\'embauche";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(40, 215);
			this->label5->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(237, 30);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Date de naissance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(675, 100);
			this->label6->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 30);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Rue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(40, 439);
			this->label7->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 30);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Responsable";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(41, 324);
			this->label8->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 30);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Adresse mail";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(40, 271);
			this->label9->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(140, 30);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Téléphone";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(312, 93);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(305, 37);
			this->textBoxNom->TabIndex = 9;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(312, 149);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(305, 37);
			this->textBoxPrenom->TabIndex = 10;
			// 
			// textBoxTelephone
			// 
			this->textBoxTelephone->Location = System::Drawing::Point(312, 264);
			this->textBoxTelephone->Name = L"textBoxTelephone";
			this->textBoxTelephone->Size = System::Drawing::Size(305, 37);
			this->textBoxTelephone->TabIndex = 12;
			// 
			// textBoxResponsable
			// 
			this->textBoxResponsable->Location = System::Drawing::Point(312, 432);
			this->textBoxResponsable->Name = L"textBoxResponsable";
			this->textBoxResponsable->Size = System::Drawing::Size(305, 37);
			this->textBoxResponsable->TabIndex = 15;
			// 
			// textBoxAdresseMail
			// 
			this->textBoxAdresseMail->Location = System::Drawing::Point(312, 317);
			this->textBoxAdresseMail->Name = L"textBoxAdresseMail";
			this->textBoxAdresseMail->Size = System::Drawing::Size(305, 37);
			this->textBoxAdresseMail->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(675, 156);
			this->label10->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(208, 30);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Numéro de voie";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(675, 215);
			this->label11->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 30);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Etage";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(675, 271);
			this->label12->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(120, 30);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Batiment";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(675, 376);
			this->label13->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 30);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Ville";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(675, 324);
			this->label14->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(158, 30);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Code Postal";
			// 
			// textBoxVille
			// 
			this->textBoxVille->Location = System::Drawing::Point(914, 377);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(305, 37);
			this->textBoxVille->TabIndex = 26;
			// 
			// textBoxCodePostal
			// 
			this->textBoxCodePostal->Location = System::Drawing::Point(914, 321);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(305, 37);
			this->textBoxCodePostal->TabIndex = 25;
			// 
			// textBoxBatiment
			// 
			this->textBoxBatiment->Location = System::Drawing::Point(914, 268);
			this->textBoxBatiment->Name = L"textBoxBatiment";
			this->textBoxBatiment->Size = System::Drawing::Size(305, 37);
			this->textBoxBatiment->TabIndex = 24;
			// 
			// textBoxEtage
			// 
			this->textBoxEtage->Location = System::Drawing::Point(914, 212);
			this->textBoxEtage->Name = L"textBoxEtage";
			this->textBoxEtage->Size = System::Drawing::Size(305, 37);
			this->textBoxEtage->TabIndex = 23;
			// 
			// textBoxNumVoie
			// 
			this->textBoxNumVoie->Location = System::Drawing::Point(914, 153);
			this->textBoxNumVoie->Name = L"textBoxNumVoie";
			this->textBoxNumVoie->Size = System::Drawing::Size(305, 37);
			this->textBoxNumVoie->TabIndex = 22;
			// 
			// textBoxRue
			// 
			this->textBoxRue->Location = System::Drawing::Point(914, 97);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(305, 37);
			this->textBoxRue->TabIndex = 21;
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(680, 442);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(539, 29);
			this->btnValider->TabIndex = 74;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &ModifierPersonnel::btnValider_Click);
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(312, 208);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(305, 37);
			this->dateTimePickerNaissance->TabIndex = 75;
			// 
			// dateTimePickerEmbauche
			// 
			this->dateTimePickerEmbauche->Location = System::Drawing::Point(312, 376);
			this->dateTimePickerEmbauche->Name = L"dateTimePickerEmbauche";
			this->dateTimePickerEmbauche->Size = System::Drawing::Size(305, 37);
			this->dateTimePickerEmbauche->TabIndex = 76;
			// 
			// ModifierPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1274, 512);
			this->Controls->Add(this->dateTimePickerEmbauche);
			this->Controls->Add(this->dateTimePickerNaissance);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->textBoxCodePostal);
			this->Controls->Add(this->textBoxBatiment);
			this->Controls->Add(this->textBoxEtage);
			this->Controls->Add(this->textBoxNumVoie);
			this->Controls->Add(this->textBoxRue);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxResponsable);
			this->Controls->Add(this->textBoxAdresseMail);
			this->Controls->Add(this->textBoxTelephone);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"ModifierPersonnel";
			this->Text = L"ModifierPersonnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		conn.openConnection();

		String^ query = "";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn.getConn());

		cmd->ExecuteNonQuery();

		conn.closeConnection();
	}
};
}
