#pragma once

#include "CreateCommande.h"
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
	/// Description résumée de Commandes
	/// </summary>
	public ref class Commandes : public System::Windows::Forms::Form
	{
	public: Connect^ conn;
	public:
		Commandes(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->tbID->ReadOnly = true;
			this->tbNom->ReadOnly = true;

			conn = gcnew Connect();

			conn->openConnection();

			String^ query = "select Commande.ID_COMMANDE, Personne.NOM_PERSONNE, Personne.PRENOM_PERSONNE, Article.NOM_ARTICLE, Commande.NUMERO_COMMANDE, Commande.DATE_COMMANDE, Commande.DATE_EMISSION, Commande.DATE_LIVRAISON from DBProjet.dbo.Commande INNER JOIN DBProjet.dbo.Contenir ON Commande.ID_COMMANDE = Contenir.ID_COMMANDE INNER JOIN DBProjet.dbo.Paiement ON Paiement.ID_COMMANDE = Commande.ID_COMMANDE INNER JOIN DBProjet.dbo.Article ON Article.ID_ARTICLE = Contenir.ID_ARTICLE INNER JOIN DBProjet.dbo.Client ON Client.ID_PERSONNE = Commande.ID_CLIENT INNER JOIN DBProjet.dbo.Personne ON Client.ID_CLIENT = Personne.ID_PERSONNE;";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			SqlDataReader^ dr = cmd->ExecuteReader();

			while (dr->Read())
			{
				dataGridView1->Rows->Add(dr["ID_COMMANDE"], dr["NOM_PERSONNE"], dr["PRENOM_PERSONNE"], dr["NOM_ARTICLE"], dr["NUMERO_COMMANDE"], dr["DATE_COMMANDE"], dr["DATE_EMISSION"], dr["DATE_LIVRAISON"]);
			}

			conn->closeConnection();
		}

	private:
		Form^ active = nullptr;
		bool IDclick = false;
		bool NomClick = false;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Button^ buttonSupprimerValidation;
	private: System::Windows::Forms::TextBox^ textBoxIDSuppr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_COMMANDE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOM_PERSONNE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRENOM_PERSONNE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOM_ARTICLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NUMERO_COMMANDE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DATE_COMMANDE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DATE_EMISSION;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DATE_LIVRAISON;
		   bool PrenomClick = false;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Commandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlButtonChoix;
	protected:
	private: System::Windows::Forms::Button^ btnCreer;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Panel^ pnlFilter;

	private: System::Windows::Forms::TextBox^ tbNom;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::RadioButton^ rbNomPrenom;
	private: System::Windows::Forms::RadioButton^ rbID;
	private: System::Windows::Forms::Panel^ pnlTitle;
	private: System::Windows::Forms::Label^ label2;

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
			this->pnlButtonChoix = (gcnew System::Windows::Forms::Panel());
			this->btnCreer = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pnlFilter = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->rbNomPrenom = (gcnew System::Windows::Forms::RadioButton());
			this->rbID = (gcnew System::Windows::Forms::RadioButton());
			this->pnlTitle = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonSupprimerValidation = (gcnew System::Windows::Forms::Button());
			this->textBoxIDSuppr = (gcnew System::Windows::Forms::TextBox());
			this->ID_COMMANDE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOM_PERSONNE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRENOM_PERSONNE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOM_ARTICLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NUMERO_COMMANDE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DATE_COMMANDE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DATE_EMISSION = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DATE_LIVRAISON = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pnlButtonChoix->SuspendLayout();
			this->pnlMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pnlFilter->SuspendLayout();
			this->pnlTitle->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlButtonChoix
			// 
			this->pnlButtonChoix->Controls->Add(this->btnCreer);
			this->pnlButtonChoix->Controls->Add(this->btnSupprimer);
			this->pnlButtonChoix->Controls->Add(this->btnModifier);
			this->pnlButtonChoix->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlButtonChoix->Location = System::Drawing::Point(176, 510);
			this->pnlButtonChoix->Name = L"pnlButtonChoix";
			this->pnlButtonChoix->Size = System::Drawing::Size(927, 30);
			this->pnlButtonChoix->TabIndex = 8;
			// 
			// btnCreer
			// 
			this->btnCreer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnCreer->FlatAppearance->BorderSize = 0;
			this->btnCreer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreer->ForeColor = System::Drawing::Color::White;
			this->btnCreer->Location = System::Drawing::Point(0, 3);
			this->btnCreer->Name = L"btnCreer";
			this->btnCreer->Size = System::Drawing::Size(158, 23);
			this->btnCreer->TabIndex = 1;
			this->btnCreer->Text = L"Créer une commande";
			this->btnCreer->UseVisualStyleBackColor = false;
			this->btnCreer->Click += gcnew System::EventHandler(this, &Commandes::btnCreer_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnSupprimer->FlatAppearance->BorderSize = 0;
			this->btnSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupprimer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimer->ForeColor = System::Drawing::Color::White;
			this->btnSupprimer->Location = System::Drawing::Point(761, 3);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(166, 23);
			this->btnSupprimer->TabIndex = 3;
			this->btnSupprimer->Text = L"Supprimer une commande";
			this->btnSupprimer->UseVisualStyleBackColor = false;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &Commandes::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnModifier->FlatAppearance->BorderSize = 0;
			this->btnModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModifier->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifier->ForeColor = System::Drawing::Color::White;
			this->btnModifier->Location = System::Drawing::Point(412, 4);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(158, 23);
			this->btnModifier->TabIndex = 2;
			this->btnModifier->Text = L"Modifier une commande";
			this->btnModifier->UseVisualStyleBackColor = false;
			this->btnModifier->Click += gcnew System::EventHandler(this, &Commandes::btnModifier_Click);
			// 
			// pnlMain
			// 
			this->pnlMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->pnlMain->Controls->Add(this->dataGridView1);
			this->pnlMain->Controls->Add(this->pnlFilter);
			this->pnlMain->Controls->Add(this->pnlTitle);
			this->pnlMain->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlMain->Location = System::Drawing::Point(176, 57);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(927, 405);
			this->pnlMain->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ID_COMMANDE,
					this->NOM_PERSONNE, this->PRENOM_PERSONNE, this->NOM_ARTICLE, this->NUMERO_COMMANDE, this->DATE_COMMANDE, this->DATE_EMISSION,
					this->DATE_LIVRAISON
			});
			this->dataGridView1->Location = System::Drawing::Point(41, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->Size = System::Drawing::Size(844, 306);
			this->dataGridView1->TabIndex = 2;
			// 
			// pnlFilter
			// 
			this->pnlFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pnlFilter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlFilter->Controls->Add(this->dateTimePicker1);
			this->pnlFilter->Controls->Add(this->tbNom);
			this->pnlFilter->Controls->Add(this->tbID);
			this->pnlFilter->Controls->Add(this->rbNomPrenom);
			this->pnlFilter->Controls->Add(this->rbID);
			this->pnlFilter->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlFilter->Location = System::Drawing::Point(0, 50);
			this->pnlFilter->Name = L"pnlFilter";
			this->pnlFilter->Size = System::Drawing::Size(927, 46);
			this->pnlFilter->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(830, 12);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(91, 21);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// tbNom
			// 
			this->tbNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tbNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tbNom->Location = System::Drawing::Point(692, 12);
			this->tbNom->Name = L"tbNom";
			this->tbNom->Size = System::Drawing::Size(132, 21);
			this->tbNom->TabIndex = 3;
			this->tbNom->Text = L"Entrer le Nom...";
			// 
			// tbID
			// 
			this->tbID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tbID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tbID->Location = System::Drawing::Point(146, 12);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(81, 21);
			this->tbID->TabIndex = 2;
			this->tbID->Text = L"Entrer l\'ID...";
			// 
			// rbNomPrenom
			// 
			this->rbNomPrenom->AutoSize = true;
			this->rbNomPrenom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbNomPrenom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->rbNomPrenom->Location = System::Drawing::Point(251, 10);
			this->rbNomPrenom->Name = L"rbNomPrenom";
			this->rbNomPrenom->Size = System::Drawing::Size(390, 20);
			this->rbNomPrenom->TabIndex = 1;
			this->rbNomPrenom->TabStop = true;
			this->rbNomPrenom->Text = L"Recherche par Numéro de commande et Date de commande";
			this->rbNomPrenom->UseVisualStyleBackColor = true;
			// 
			// rbID
			// 
			this->rbID->AutoSize = true;
			this->rbID->FlatAppearance->BorderSize = 0;
			this->rbID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->rbID->Location = System::Drawing::Point(3, 10);
			this->rbID->Name = L"rbID";
			this->rbID->Size = System::Drawing::Size(129, 20);
			this->rbID->TabIndex = 0;
			this->rbID->TabStop = true;
			this->rbID->Text = L"Recherche par ID";
			this->rbID->UseVisualStyleBackColor = true;
			// 
			// pnlTitle
			// 
			this->pnlTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pnlTitle->Controls->Add(this->label2);
			this->pnlTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitle->Location = System::Drawing::Point(0, 0);
			this->pnlTitle->Name = L"pnlTitle";
			this->pnlTitle->Size = System::Drawing::Size(927, 50);
			this->pnlTitle->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label2->Location = System::Drawing::Point(436, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Commandes";
			// 
			// buttonSupprimerValidation
			// 
			this->buttonSupprimerValidation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonSupprimerValidation->FlatAppearance->BorderSize = 0;
			this->buttonSupprimerValidation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSupprimerValidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonSupprimerValidation->ForeColor = System::Drawing::Color::White;
			this->buttonSupprimerValidation->Location = System::Drawing::Point(1108, 546);
			this->buttonSupprimerValidation->Name = L"buttonSupprimerValidation";
			this->buttonSupprimerValidation->Size = System::Drawing::Size(158, 20);
			this->buttonSupprimerValidation->TabIndex = 9;
			this->buttonSupprimerValidation->Text = L"Supprimer";
			this->buttonSupprimerValidation->UseVisualStyleBackColor = false;
			this->buttonSupprimerValidation->Click += gcnew System::EventHandler(this, &Commandes::buttonSupprimerValidation_Click);
			// 
			// textBoxIDSuppr
			// 
			this->textBoxIDSuppr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBoxIDSuppr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIDSuppr->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->textBoxIDSuppr->Location = System::Drawing::Point(937, 546);
			this->textBoxIDSuppr->Name = L"textBoxIDSuppr";
			this->textBoxIDSuppr->Size = System::Drawing::Size(165, 20);
			this->textBoxIDSuppr->TabIndex = 10;
			this->textBoxIDSuppr->Text = L"Entrer l\'ID...";
			// 
			// ID_COMMANDE
			// 
			this->ID_COMMANDE->HeaderText = L"ID_COMMANDE";
			this->ID_COMMANDE->Name = L"ID_COMMANDE";
			// 
			// NOM_PERSONNE
			// 
			this->NOM_PERSONNE->HeaderText = L"NOM_PERSONNE";
			this->NOM_PERSONNE->Name = L"NOM_PERSONNE";
			// 
			// PRENOM_PERSONNE
			// 
			this->PRENOM_PERSONNE->HeaderText = L"PRENOM_PERSONNE";
			this->PRENOM_PERSONNE->Name = L"PRENOM_PERSONNE";
			// 
			// NOM_ARTICLE
			// 
			this->NOM_ARTICLE->HeaderText = L"NOM_ARTICLE";
			this->NOM_ARTICLE->Name = L"NOM_ARTICLE";
			// 
			// NUMERO_COMMANDE
			// 
			this->NUMERO_COMMANDE->HeaderText = L"NUMERO_COMMANDE";
			this->NUMERO_COMMANDE->Name = L"NUMERO_COMMANDE";
			// 
			// DATE_COMMANDE
			// 
			this->DATE_COMMANDE->HeaderText = L"DATE_COMMANDE";
			this->DATE_COMMANDE->Name = L"DATE_COMMANDE";
			// 
			// DATE_EMISSION
			// 
			this->DATE_EMISSION->HeaderText = L"DATE_EMISSION";
			this->DATE_EMISSION->Name = L"DATE_EMISSION";
			// 
			// DATE_LIVRAISON
			// 
			this->DATE_LIVRAISON->HeaderText = L"DATE_LIVRAISON";
			this->DATE_LIVRAISON->Name = L"DATE_LIVRAISON";
			// 
			// Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1278, 596);
			this->Controls->Add(this->buttonSupprimerValidation);
			this->Controls->Add(this->textBoxIDSuppr);
			this->Controls->Add(this->pnlButtonChoix);
			this->Controls->Add(this->pnlMain);
			this->Name = L"Commandes";
			this->Text = L"Commandes";
			this->pnlButtonChoix->ResumeLayout(false);
			this->pnlMain->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pnlFilter->ResumeLayout(false);
			this->pnlFilter->PerformLayout();
			this->pnlTitle->ResumeLayout(false);
			this->pnlTitle->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCreer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CreateCommande^ frmCommande = gcnew CreateCommande();
		active = frmCommande;
		frmCommande->ShowDialog();
	}

	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void btnCreer_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		active->Close();
	}

	private: System::Void rbID_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbID->ReadOnly = false;
		this->tbNom->ReadOnly = true;
	}

	private: System::Void rbNomPrenom_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbID->ReadOnly = true;
		this->tbNom->ReadOnly = false;
	}

	private: System::Void tbID_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbID->Text = "";
	}

	private: System::Void tbID_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (tbID->Text == "")
			this->tbID->Text = "Entrer l'ID...";

	}

	private: System::Void tbNom_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbNom->Text = "";
	}

	private: System::Void tbNom_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (tbNom->Text == "")
			this->tbNom->Text = "Entrer le Nom...";

	}
private: System::Void buttonSupprimerValidation_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
