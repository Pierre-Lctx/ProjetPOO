#pragma once

#include "Adresse.h"
#include "Connection.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace connection;

	/// <summary>
	/// Description résumée de CreatePerson
	/// </summary>
	public ref class CreatePerson : public System::Windows::Forms::Form
	{
	private :
		bool changeClient = false;
		bool changeEmploye = false;
		bool adr1App,  adr2App;
		String^ typePerson;
		String^ ville1, ^ rue1, ^ numRue1, ^ batiment1, ^ etage1, ^ numApp1, ^ ville2, ^ rue2, ^ numRue2, ^ batiment2, ^ etage2, ^ numApp2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnlAdress;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;
	private: System::Windows::Forms::TextBox^ textBoxCodeClient;
	private: System::Windows::Forms::Label^ label2;


	public: Connect^ conn;
	public: Adresse^ adr1;
	private: System::Windows::Forms::Label^ labelMDP;
	public:
	private: System::Windows::Forms::Label^ labelEmbauche;
	private: System::Windows::Forms::TextBox^ textBoxMDP;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmbauche;
	private: System::Windows::Forms::Label^ labelResponsable;
	private: System::Windows::Forms::TextBox^ textBoxResponsable;
	private: System::Windows::Forms::Panel^ panelEmploye;
	public: Adresse^ adr2;

	
	public:
		CreatePerson(String^ type)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			typePerson = type;
			lblAdress1->Visible = false;
			lblAdress2->Visible = false;

			if (typePerson == "employe")
			{
				label1->Text = "Ajouter un Employer";
				lblAdress1->Visible = true;
				lblAdress1->Text = "Personnelle    :";
				lblAdress2->Visible = false;
				btnAdress2->Visible = false;
				pnlAdress->Size = System::Drawing::Size(372, 109);

			}
			if (typePerson == "client")
			{
				label1->Text = "Ajouter un Client";
				lblAdress1->Visible = true;
				lblAdress2->Visible = true;
				btnAdress2->Visible = true;
				pnlAdress->Size = System::Drawing::Size(372, 154);
			}
			
			conn = gcnew Connect();
			adr1 = gcnew Adresse();
			adr2 = gcnew Adresse();
			panelEmploye->Visible = false;

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Label^ labelGenre;

	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxAdresseMail;
	private: System::Windows::Forms::TextBox^ textBoxNumTelephone;
	private: System::Windows::Forms::Label^ labelNumTelephone;
	private: System::Windows::Forms::Label^ labelAdresseMail;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lblAdress2;
	private: System::Windows::Forms::Label^ lblAdress1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnAdress1;
	private: System::Windows::Forms::Button^ btnAdress2;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->labelGenre = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseMail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumTelephone = (gcnew System::Windows::Forms::TextBox());
			this->labelNumTelephone = (gcnew System::Windows::Forms::Label());
			this->labelAdresseMail = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblAdress2 = (gcnew System::Windows::Forms::Label());
			this->lblAdress1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAdress1 = (gcnew System::Windows::Forms::Button());
			this->btnAdress2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->pnlAdress = (gcnew System::Windows::Forms::Panel());
			this->textBoxCodeClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelMDP = (gcnew System::Windows::Forms::Label());
			this->labelEmbauche = (gcnew System::Windows::Forms::Label());
			this->textBoxMDP = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelResponsable = (gcnew System::Windows::Forms::Label());
			this->textBoxResponsable = (gcnew System::Windows::Forms::TextBox());
			this->panelEmploye = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->pnlAdress->SuspendLayout();
			this->panelEmploye->SuspendLayout();
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(2, 14);
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
			this->labelNom->Location = System::Drawing::Point(3, 67);
			this->labelNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(71, 30);
			this->labelNom->TabIndex = 5;
			this->labelNom->Text = L"Nom";
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrenom->ForeColor = System::Drawing::Color::White;
			this->labelPrenom->Location = System::Drawing::Point(4, 120);
			this->labelPrenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(105, 30);
			this->labelPrenom->TabIndex = 6;
			this->labelPrenom->Text = L"Prénom";
			// 
			// labelGenre
			// 
			this->labelGenre->AutoSize = true;
			this->labelGenre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGenre->ForeColor = System::Drawing::Color::White;
			this->labelGenre->Location = System::Drawing::Point(4, 179);
			this->labelGenre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelGenre->Name = L"labelGenre";
			this->labelGenre->Size = System::Drawing::Size(240, 30);
			this->labelGenre->TabIndex = 7;
			this->labelGenre->Text = L"Date de Naissance";
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(310, 129);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Multiline = true;
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(246, 30);
			this->textBoxPrenom->TabIndex = 9;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(310, 76);
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
			this->label7->Location = System::Drawing::Point(64, 411);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 36);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Communication";
			// 
			// textBoxAdresseMail
			// 
			this->textBoxAdresseMail->Location = System::Drawing::Point(266, 474);
			this->textBoxAdresseMail->Margin = System::Windows::Forms::Padding(2);
			this->textBoxAdresseMail->Multiline = true;
			this->textBoxAdresseMail->Name = L"textBoxAdresseMail";
			this->textBoxAdresseMail->Size = System::Drawing::Size(246, 30);
			this->textBoxAdresseMail->TabIndex = 15;
			// 
			// textBoxNumTelephone
			// 
			this->textBoxNumTelephone->Location = System::Drawing::Point(949, 474);
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
			this->labelNumTelephone->Location = System::Drawing::Point(632, 474);
			this->labelNumTelephone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNumTelephone->Name = L"labelNumTelephone";
			this->labelNumTelephone->Size = System::Drawing::Size(279, 30);
			this->labelNumTelephone->TabIndex = 13;
			this->labelNumTelephone->Text = L"Numéro de téléphone";
			// 
			// labelAdresseMail
			// 
			this->labelAdresseMail->AutoSize = true;
			this->labelAdresseMail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdresseMail->ForeColor = System::Drawing::Color::White;
			this->labelAdresseMail->Location = System::Drawing::Point(65, 474);
			this->labelAdresseMail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAdresseMail->Name = L"labelAdresseMail";
			this->labelAdresseMail->Size = System::Drawing::Size(164, 30);
			this->labelAdresseMail->TabIndex = 12;
			this->labelAdresseMail->Text = L"Adresse mail";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(14, 18);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 36);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Adresse";
			// 
			// lblAdress2
			// 
			this->lblAdress2->AutoSize = true;
			this->lblAdress2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdress2->ForeColor = System::Drawing::Color::White;
			this->lblAdress2->Location = System::Drawing::Point(15, 114);
			this->lblAdress2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAdress2->Name = L"lblAdress2";
			this->lblAdress2->Size = System::Drawing::Size(148, 30);
			this->lblAdress2->TabIndex = 18;
			this->lblAdress2->Text = L"Facturation";
			// 
			// lblAdress1
			// 
			this->lblAdress1->AutoSize = true;
			this->lblAdress1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdress1->ForeColor = System::Drawing::Color::White;
			this->lblAdress1->Location = System::Drawing::Point(15, 72);
			this->lblAdress1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAdress1->Name = L"lblAdress1";
			this->lblAdress1->Size = System::Drawing::Size(115, 30);
			this->lblAdress1->TabIndex = 17;
			this->lblAdress1->Text = L"Livraison";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(570, 529);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 41);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePerson::button1_Click);
			// 
			// btnAdress1
			// 
			this->btnAdress1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdress1->Location = System::Drawing::Point(191, 70);
			this->btnAdress1->Name = L"btnAdress1";
			this->btnAdress1->Size = System::Drawing::Size(181, 32);
			this->btnAdress1->TabIndex = 24;
			this->btnAdress1->Text = L"Ajouter";
			this->btnAdress1->UseVisualStyleBackColor = true;
			this->btnAdress1->Click += gcnew System::EventHandler(this, &CreatePerson::btnAdress1_Click);
			// 
			// btnAdress2
			// 
			this->btnAdress2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdress2->Location = System::Drawing::Point(191, 116);
			this->btnAdress2->Name = L"btnAdress2";
			this->btnAdress2->Size = System::Drawing::Size(181, 32);
			this->btnAdress2->TabIndex = 25;
			this->btnAdress2->Text = L"Ajouter";
			this->btnAdress2->UseVisualStyleBackColor = true;
			this->btnAdress2->Click += gcnew System::EventHandler(this, &CreatePerson::btnAdress2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dateTimePickerNaissance);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->labelNom);
			this->panel1->Controls->Add(this->labelPrenom);
			this->panel1->Controls->Add(this->labelGenre);
			this->panel1->Controls->Add(this->textBoxNom);
			this->panel1->Controls->Add(this->textBoxPrenom);
			this->panel1->Location = System::Drawing::Point(39, 111);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(603, 215);
			this->panel1->TabIndex = 27;
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(310, 187);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(246, 22);
			this->dateTimePickerNaissance->TabIndex = 11;
			// 
			// pnlAdress
			// 
			this->pnlAdress->Controls->Add(this->textBoxCodeClient);
			this->pnlAdress->Controls->Add(this->label2);
			this->pnlAdress->Controls->Add(this->label10);
			this->pnlAdress->Controls->Add(this->lblAdress1);
			this->pnlAdress->Controls->Add(this->lblAdress2);
			this->pnlAdress->Controls->Add(this->btnAdress2);
			this->pnlAdress->Controls->Add(this->btnAdress1);
			this->pnlAdress->Location = System::Drawing::Point(664, 111);
			this->pnlAdress->Name = L"pnlAdress";
			this->pnlAdress->Size = System::Drawing::Size(458, 199);
			this->pnlAdress->TabIndex = 28;
			// 
			// textBoxCodeClient
			// 
			this->textBoxCodeClient->Location = System::Drawing::Point(191, 159);
			this->textBoxCodeClient->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodeClient->Multiline = true;
			this->textBoxCodeClient->Name = L"textBoxCodeClient";
			this->textBoxCodeClient->Size = System::Drawing::Size(179, 30);
			this->textBoxCodeClient->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(15, 159);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 30);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Code Client";
			// 
			// labelMDP
			// 
			this->labelMDP->AutoSize = true;
			this->labelMDP->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMDP->ForeColor = System::Drawing::Color::White;
			this->labelMDP->Location = System::Drawing::Point(4, 25);
			this->labelMDP->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMDP->Name = L"labelMDP";
			this->labelMDP->Size = System::Drawing::Size(174, 30);
			this->labelMDP->TabIndex = 12;
			this->labelMDP->Text = L"Mot de passe";
			// 
			// labelEmbauche
			// 
			this->labelEmbauche->AutoSize = true;
			this->labelEmbauche->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmbauche->ForeColor = System::Drawing::Color::White;
			this->labelEmbauche->Location = System::Drawing::Point(389, 26);
			this->labelEmbauche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelEmbauche->Name = L"labelEmbauche";
			this->labelEmbauche->Size = System::Drawing::Size(214, 30);
			this->labelEmbauche->TabIndex = 13;
			this->labelEmbauche->Text = L"Date_Embauche";
			// 
			// textBoxMDP
			// 
			this->textBoxMDP->Location = System::Drawing::Point(182, 26);
			this->textBoxMDP->Margin = System::Windows::Forms::Padding(2);
			this->textBoxMDP->Multiline = true;
			this->textBoxMDP->Name = L"textBoxMDP";
			this->textBoxMDP->Size = System::Drawing::Size(203, 30);
			this->textBoxMDP->TabIndex = 15;
			// 
			// dateTimePickerEmbauche
			// 
			this->dateTimePickerEmbauche->Location = System::Drawing::Point(608, 33);
			this->dateTimePickerEmbauche->Name = L"dateTimePickerEmbauche";
			this->dateTimePickerEmbauche->Size = System::Drawing::Size(246, 22);
			this->dateTimePickerEmbauche->TabIndex = 12;
			// 
			// labelResponsable
			// 
			this->labelResponsable->AutoSize = true;
			this->labelResponsable->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelResponsable->ForeColor = System::Drawing::Color::White;
			this->labelResponsable->Location = System::Drawing::Point(873, 26);
			this->labelResponsable->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelResponsable->Name = L"labelResponsable";
			this->labelResponsable->Size = System::Drawing::Size(165, 30);
			this->labelResponsable->TabIndex = 29;
			this->labelResponsable->Text = L"Responsable";
			// 
			// textBoxResponsable
			// 
			this->textBoxResponsable->Location = System::Drawing::Point(1042, 26);
			this->textBoxResponsable->Margin = System::Windows::Forms::Padding(2);
			this->textBoxResponsable->Multiline = true;
			this->textBoxResponsable->Name = L"textBoxResponsable";
			this->textBoxResponsable->Size = System::Drawing::Size(210, 30);
			this->textBoxResponsable->TabIndex = 30;
			// 
			// panelEmploye
			// 
			this->panelEmploye->Controls->Add(this->dateTimePickerEmbauche);
			this->panelEmploye->Controls->Add(this->labelResponsable);
			this->panelEmploye->Controls->Add(this->textBoxMDP);
			this->panelEmploye->Controls->Add(this->textBoxResponsable);
			this->panelEmploye->Controls->Add(this->labelEmbauche);
			this->panelEmploye->Controls->Add(this->labelMDP);
			this->panelEmploye->Location = System::Drawing::Point(12, 332);
			this->panelEmploye->Name = L"panelEmploye";
			this->panelEmploye->Size = System::Drawing::Size(1254, 79);
			this->panelEmploye->TabIndex = 28;
			// 
			// CreatePerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1278, 596);
			this->Controls->Add(this->panelEmploye);
			this->Controls->Add(this->pnlAdress);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxAdresseMail);
			this->Controls->Add(this->textBoxNumTelephone);
			this->Controls->Add(this->labelNumTelephone);
			this->Controls->Add(this->labelAdresseMail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"CreatePerson";
			this->Text = L"CreatePerson";
			this->Load += gcnew System::EventHandler(this, &CreatePerson::CreatePerson_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnlAdress->ResumeLayout(false);
			this->pnlAdress->PerformLayout();
			this->panelEmploye->ResumeLayout(false);
			this->panelEmploye->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreatePerson_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
		   
	private: System::Boolean checkIsNotVoid()
	{
		if (textBoxNom->Text == "" && textBoxPrenom->Text == "" && textBoxAdresseMail->Text == "" && textBoxNumTelephone->Text == "")
			return true;
		else if (textBoxNom->Text == "" && textBoxPrenom->Text == "" && textBoxAdresseMail->Text == "" && textBoxNumTelephone->Text == "")
			return true;
		else
			return false;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkIsNotVoid())
		{
			if (typePerson == "employe")
			{
				panelEmploye->Visible = true;
				conn->openConnection();
			
				String^ query = "INSERT INTO Personne VALUES (" + textBoxNom->Text + ", " + textBoxPrenom->Text + ", " + textBoxNumTelephone->Text + ", " + textBoxAdresseMail->Text + ", " + dateTimePickerNaissance->Text + ")";
				String^ query1 = "INSERT INTO Personnel VALUES (" + dateTimePickerEmbauche->Text + ", '" + textBoxMDP->Text + "', (select ID_ADRESSE from Adresse where NUMERO_VOIE = '" + adr1->getNumRue() + "' and RUE = '" + adr1->getRue() + " and BATIMENT = '" + adr1->getBatiment() + "' and ETAGE = '" + adr1->getEtage() + "'), (select ID_ADRESSE from Adresse where NUMERO_VOIE = '" + adr2->getNumRue() + "' and RUE = '" + adr2->getRue() + " and BATIMENT = '" + adr2->getBatiment() + "' and ETAGE = '" + adr2->getEtage() + "'), (select ID_PERSONNE from Personne WHERE NOM_PERSONNE = '" + textBoxNom->Text + "' and PRENOM_PERSONNE = '" + textBoxPrenom->Text + "'))";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());
				SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

				conn->closeConnection();
			}
			if (typePerson == "client")
			{
				panelEmploye->Visible = false;
				conn->openConnection();

				String^ query = "INSERT INTO Personne VALUES (" + textBoxNom->Text + ", " + textBoxPrenom->Text + ", " + textBoxNumTelephone->Text + ", " + textBoxAdresseMail->Text + ", " + dateTimePickerNaissance->Text + ")";
				String^ query1 = "INSERT INTO Client VALUES (" + textBoxCodeClient->Text + ", (select ID_ADRESSE from Adresse where NUMERO_VOIE = '" + adr1->getNumRue() + "' and RUE = '" + adr1->getRue() + " and BATIMENT = '" + adr1->getBatiment() + "' and ETAGE = '" + adr1->getEtage() + "'), (select ID_ADRESSE from Adresse where NUMERO_VOIE = '" + adr2->getNumRue() + "' and RUE = '" + adr2->getRue() + " and BATIMENT = '" + adr2->getBatiment() + "' and ETAGE = '" + adr2->getEtage() + "'), (select ID_PERSONNE from Personne WHERE NOM_PERSONNE = '" + textBoxNom->Text + "' and PRENOM_PERSONNE = '" + textBoxPrenom->Text + "'))";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());
				SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

				conn->closeConnection();
			}
		}
		else
		{
			MessageBox::Show("Vous devez remplir tous les champs !");
		}
	}
private: System::Void btnAdress1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (typePerson == "employe")
	{
		adr1->ShowDialog();
		adr1App = adr1->getTypeLocation();

		if (adr1App == true)
		{
			ville1 = adr1->getVille();
			rue1 = adr1->getRue();
			numRue1 = adr1->getNumRue();
			batiment1 = adr1->getBatiment();
			etage1 = adr1->getEtage();
			numApp1 = adr1->getCodePostal();
		}
		else
		{
			ville1 = adr1->getVille();
			rue1 = adr1->getRue();
			numRue1 = adr1->getNumRue();
		}
		
		adr1->Close();
	}
	if (typePerson == "client")
	{
		
		Adresse^ adr1 = gcnew Adresse();

		adr1->ShowDialog();
		adr1App = adr1->getTypeLocation();

		if (adr1App == true)
		{
			ville1 = adr1->getVille();
			rue1 = adr1->getRue();
			numRue1 = adr1->getNumRue();
			batiment1 = adr1->getBatiment();
			etage1 = adr1->getEtage();
			numApp1 = adr1->getCodePostal();
		}
		else
		{
			ville1 = adr1->getVille();
			rue1 = adr1->getRue();
			numRue1 = adr1->getNumRue();
		}

		adr1->Close();
	}
	
}
private: System::Void btnAdress2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (typePerson == "client")
	{

		

		adr2->ShowDialog();
		adr2App = adr2->getTypeLocation();

		if (adr2App == true)
		{
			ville2 = adr2->getVille();
			rue2 = adr2->getRue();
			numRue2 = adr2->getNumRue();
			batiment2 = adr2->getBatiment();
			etage2 = adr2->getEtage();
			numApp1 = adr2->getCodePostal();
		}
		else
		{
			ville2 = adr2->getVille();
			rue2 = adr2->getRue();
			numRue1 = adr2->getNumRue();
		}

		adr2->Close();
	}
}
};
}
