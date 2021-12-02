#pragma once

#include "Article.h"
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
	/// Description résumée de Stocks
	/// </summary>
	public ref class Stocks : public System::Windows::Forms::Form
	{

	public: Connect^ conn;

	public:
		Stocks(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->tbID->ReadOnly = true;
			this->tbNom->ReadOnly = true;
			this->tbType->ReadOnly = true;

			conn = gcnew Connect();

			conn->openConnection();

			String^ query = "select NOM_ARTICLE, STOCK, PRIX_ARTICLE, SEUIL_APPROVISIONNEMENT, TVA_ARTICLE, NATURE, COULEUR from DBProjet.dbo.Article;";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			SqlDataReader^ dr = cmd->ExecuteReader();

			while (dr->Read())
			{
				dataGridView1->Rows->Add(dr["NOM_ARTICLE"], dr["STOCK"], dr["PRIX_ARTICLE"], dr["SEUIL_APPROVISIONNEMENT"], dr["TVA_ARTICLE"], dr["NATURE"], dr["COULEUR"]);
			}

			conn->closeConnection();
		}

	private:
		Form^ active = nullptr;
		bool IDclick = false;
		bool NomClick = false;
	private: System::Windows::Forms::Button^ buttonSupprimerValidation;
	private: System::Windows::Forms::TextBox^ textBoxIDSuppr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOM_ARTICLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ STOCK;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRIX_ARTICLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SEUIL_APPROVISIONEMENT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA_ARTICLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NATURE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ COULEUR;
		   bool PrenomClick = false;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Stocks()
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
	private: System::Windows::Forms::TextBox^ tbType;

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
			this->tbType = (gcnew System::Windows::Forms::TextBox());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->rbNomPrenom = (gcnew System::Windows::Forms::RadioButton());
			this->rbID = (gcnew System::Windows::Forms::RadioButton());
			this->pnlTitle = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonSupprimerValidation = (gcnew System::Windows::Forms::Button());
			this->textBoxIDSuppr = (gcnew System::Windows::Forms::TextBox());
			this->NOM_ARTICLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->STOCK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRIX_ARTICLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SEUIL_APPROVISIONEMENT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA_ARTICLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NATURE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COULEUR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->pnlButtonChoix->TabIndex = 6;
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
			this->btnCreer->Text = L"Créer un article";
			this->btnCreer->UseVisualStyleBackColor = false;
			this->btnCreer->Click += gcnew System::EventHandler(this, &Stocks::btnCreer_Click);
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
			this->btnSupprimer->Location = System::Drawing::Point(769, 3);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(158, 23);
			this->btnSupprimer->TabIndex = 3;
			this->btnSupprimer->Text = L"Supprimer un article";
			this->btnSupprimer->UseVisualStyleBackColor = false;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &Stocks::btnSupprimer_Click);
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
			this->btnModifier->Text = L"Modifier un article";
			this->btnModifier->UseVisualStyleBackColor = false;
			this->btnModifier->Click += gcnew System::EventHandler(this, &Stocks::btnModifier_Click);
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
			this->pnlMain->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->NOM_ARTICLE,
					this->STOCK, this->PRIX_ARTICLE, this->SEUIL_APPROVISIONEMENT, this->TVA_ARTICLE, this->NATURE, this->COULEUR
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
			this->pnlFilter->Controls->Add(this->tbType);
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
			// tbType
			// 
			this->tbType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tbType->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tbType->Location = System::Drawing::Point(692, 12);
			this->tbType->Name = L"tbType";
			this->tbType->Size = System::Drawing::Size(136, 21);
			this->tbType->TabIndex = 4;
			this->tbType->Text = L"Entrer le Type...";
			// 
			// tbNom
			// 
			this->tbNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tbNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tbNom->Location = System::Drawing::Point(539, 12);
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
			this->tbID->Location = System::Drawing::Point(167, 12);
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
			this->rbNomPrenom->Location = System::Drawing::Point(298, 11);
			this->rbNomPrenom->Name = L"rbNomPrenom";
			this->rbNomPrenom->Size = System::Drawing::Size(191, 20);
			this->rbNomPrenom->TabIndex = 1;
			this->rbNomPrenom->TabStop = true;
			this->rbNomPrenom->Text = L"Recherche par Nom et Type";
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
			this->rbID->Location = System::Drawing::Point(24, 11);
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
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Stocks";
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
			this->buttonSupprimerValidation->Location = System::Drawing::Point(1108, 555);
			this->buttonSupprimerValidation->Name = L"buttonSupprimerValidation";
			this->buttonSupprimerValidation->Size = System::Drawing::Size(158, 20);
			this->buttonSupprimerValidation->TabIndex = 7;
			this->buttonSupprimerValidation->Text = L"Supprimer";
			this->buttonSupprimerValidation->UseVisualStyleBackColor = false;
			// 
			// textBoxIDSuppr
			// 
			this->textBoxIDSuppr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBoxIDSuppr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIDSuppr->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->textBoxIDSuppr->Location = System::Drawing::Point(945, 555);
			this->textBoxIDSuppr->Name = L"textBoxIDSuppr";
			this->textBoxIDSuppr->Size = System::Drawing::Size(158, 20);
			this->textBoxIDSuppr->TabIndex = 8;
			this->textBoxIDSuppr->Text = L"Entrer l\'ID...";
			// 
			// NOM_ARTICLE
			// 
			this->NOM_ARTICLE->HeaderText = L"NOM_ARTICLE";
			this->NOM_ARTICLE->Name = L"NOM_ARTICLE";
			// 
			// STOCK
			// 
			this->STOCK->HeaderText = L"STOCK";
			this->STOCK->Name = L"STOCK";
			// 
			// PRIX_ARTICLE
			// 
			this->PRIX_ARTICLE->HeaderText = L"PRIX_ARTICLE";
			this->PRIX_ARTICLE->Name = L"PRIX_ARTICLE";
			// 
			// SEUIL_APPROVISIONEMENT
			// 
			this->SEUIL_APPROVISIONEMENT->HeaderText = L"SEUIL_APPROVISIONEMENT";
			this->SEUIL_APPROVISIONEMENT->Name = L"SEUIL_APPROVISIONEMENT";
			// 
			// TVA_ARTICLE
			// 
			this->TVA_ARTICLE->HeaderText = L"TVA_ARTICLE";
			this->TVA_ARTICLE->Name = L"TVA_ARTICLE";
			// 
			// NATURE
			// 
			this->NATURE->HeaderText = L"NATURE";
			this->NATURE->Name = L"NATURE";
			// 
			// COULEUR
			// 
			this->COULEUR->HeaderText = L"COULEUR";
			this->COULEUR->Name = L"COULEUR";
			// 
			// Stocks
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
			this->Name = L"Stocks";
			this->Text = L"Stocks";
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
		Article^ frmArticle = gcnew Article();
		active = frmArticle;
		frmArticle->ShowDialog();
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
		this->tbType->ReadOnly = true;
	}

	private: System::Void rbNomPrenom_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbID->ReadOnly = true;
		this->tbNom->ReadOnly = false;
		this->tbType->ReadOnly = false;
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

	private: System::Void tbPrenom_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->tbType->Text = "";
	}

	private: System::Void tbPrenom_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (tbType->Text == "")
			this->tbType->Text = "Entrer le Type...";
	}
};
}
