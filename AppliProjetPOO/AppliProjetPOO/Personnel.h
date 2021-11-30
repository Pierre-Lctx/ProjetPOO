#pragma once
#include "Controleur.h"
#include "CreatePerson.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	private:
		Form^ active = nullptr;
		bool IDclick = false;
		bool NomClick = false;
		bool PrenomClick = false;
		
	public:
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->tbID->ReadOnly = true;
			this->tbNom->ReadOnly = true;
			this->tbPrenom->ReadOnly = true;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::Panel^ pnlTitle;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ pnlFilter;
	private: System::Windows::Forms::TextBox^ tbPrenom;


	private: System::Windows::Forms::TextBox^ tbNom;

	private: System::Windows::Forms::TextBox^ tbID;

	private: System::Windows::Forms::RadioButton^ rbNomPrenom;

	private: System::Windows::Forms::RadioButton^ rbID;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prenom_Personne;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telephone_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adresse_Mail_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date_Naissance_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateEmbauche_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adresse_Personnel;
	private: System::Windows::Forms::Button^ btnCreer;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnSupprimer;



	private: System::Windows::Forms::Panel^ pnlButtonChoix;








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
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prenom_Personne = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telephone_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse_Mail_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date_Naissance_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateEmbauche_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pnlFilter = (gcnew System::Windows::Forms::Panel());
			this->tbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->rbNomPrenom = (gcnew System::Windows::Forms::RadioButton());
			this->rbID = (gcnew System::Windows::Forms::RadioButton());
			this->pnlTitle = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCreer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->pnlButtonChoix = (gcnew System::Windows::Forms::Panel());
			this->pnlMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pnlFilter->SuspendLayout();
			this->pnlTitle->SuspendLayout();
			this->pnlButtonChoix->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlMain
			// 
			this->pnlMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->pnlMain->Controls->Add(this->dataGridView1);
			this->pnlMain->Controls->Add(this->pnlFilter);
			this->pnlMain->Controls->Add(this->pnlTitle);
			this->pnlMain->Location = System::Drawing::Point(176, 40);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(927, 405);
			this->pnlMain->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ID_Personnel,
					this->Nom_Personnel, this->Prenom_Personne, this->Telephone_Personnel, this->Adresse_Mail_Personnel, this->Date_Naissance_Personnel,
					this->DateEmbauche_Personnel, this->Adresse_Personnel
			});
			this->dataGridView1->Location = System::Drawing::Point(41, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->Size = System::Drawing::Size(844, 306);
			this->dataGridView1->TabIndex = 2;
			// 
			// ID_Personnel
			// 
			this->ID_Personnel->HeaderText = L"ID";
			this->ID_Personnel->Name = L"ID_Personnel";
			this->ID_Personnel->ReadOnly = true;
			// 
			// Nom_Personnel
			// 
			this->Nom_Personnel->HeaderText = L"Nom";
			this->Nom_Personnel->Name = L"Nom_Personnel";
			this->Nom_Personnel->ReadOnly = true;
			// 
			// Prenom_Personne
			// 
			this->Prenom_Personne->HeaderText = L"Prenom";
			this->Prenom_Personne->Name = L"Prenom_Personne";
			this->Prenom_Personne->ReadOnly = true;
			// 
			// Telephone_Personnel
			// 
			this->Telephone_Personnel->HeaderText = L"Telephone";
			this->Telephone_Personnel->Name = L"Telephone_Personnel";
			this->Telephone_Personnel->ReadOnly = true;
			// 
			// Adresse_Mail_Personnel
			// 
			this->Adresse_Mail_Personnel->HeaderText = L"Adresse Mail";
			this->Adresse_Mail_Personnel->Name = L"Adresse_Mail_Personnel";
			this->Adresse_Mail_Personnel->ReadOnly = true;
			// 
			// Date_Naissance_Personnel
			// 
			this->Date_Naissance_Personnel->HeaderText = L"Date de Naissance";
			this->Date_Naissance_Personnel->Name = L"Date_Naissance_Personnel";
			this->Date_Naissance_Personnel->ReadOnly = true;
			// 
			// DateEmbauche_Personnel
			// 
			this->DateEmbauche_Personnel->HeaderText = L"Date d\'Embauche";
			this->DateEmbauche_Personnel->Name = L"DateEmbauche_Personnel";
			this->DateEmbauche_Personnel->ReadOnly = true;
			// 
			// Adresse_Personnel
			// 
			this->Adresse_Personnel->HeaderText = L"Adresse";
			this->Adresse_Personnel->Name = L"Adresse_Personnel";
			this->Adresse_Personnel->ReadOnly = true;
			// 
			// pnlFilter
			// 
			this->pnlFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pnlFilter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlFilter->Controls->Add(this->tbPrenom);
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
			// tbPrenom
			// 
			this->tbPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tbPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPrenom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->tbPrenom->Location = System::Drawing::Point(692, 12);
			this->tbPrenom->Name = L"tbPrenom";
			this->tbPrenom->Size = System::Drawing::Size(136, 20);
			this->tbPrenom->TabIndex = 4;
			this->tbPrenom->Text = L"Entrer le Prénom...";
			this->tbPrenom->Click += gcnew System::EventHandler(this, &Personnel::tbPrenom_Click);
			this->tbPrenom->Leave += gcnew System::EventHandler(this, &Personnel::tbPrenom_Leave);
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
			this->tbNom->Size = System::Drawing::Size(132, 20);
			this->tbNom->TabIndex = 3;
			this->tbNom->Text = L"Entrer le Nom...";
			this->tbNom->Click += gcnew System::EventHandler(this, &Personnel::tbNom_Click);
			this->tbNom->Leave += gcnew System::EventHandler(this, &Personnel::tbNom_Leave);
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
			this->tbID->Size = System::Drawing::Size(81, 20);
			this->tbID->TabIndex = 2;
			this->tbID->Text = L"Entrer l\'ID...";
			this->tbID->Click += gcnew System::EventHandler(this, &Personnel::tbID_Click);
			this->tbID->Leave += gcnew System::EventHandler(this, &Personnel::tbID_Leave);
			// 
			// rbNomPrenom
			// 
			this->rbNomPrenom->AutoSize = true;
			this->rbNomPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbNomPrenom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->rbNomPrenom->Location = System::Drawing::Point(298, 11);
			this->rbNomPrenom->Name = L"rbNomPrenom";
			this->rbNomPrenom->Size = System::Drawing::Size(223, 19);
			this->rbNomPrenom->TabIndex = 1;
			this->rbNomPrenom->TabStop = true;
			this->rbNomPrenom->Text = L"Recherche par Nom et Prenom";
			this->rbNomPrenom->UseVisualStyleBackColor = true;
			this->rbNomPrenom->CheckedChanged += gcnew System::EventHandler(this, &Personnel::rbNomPrenom_CheckedChanged);
			// 
			// rbID
			// 
			this->rbID->AutoSize = true;
			this->rbID->FlatAppearance->BorderSize = 0;
			this->rbID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->rbID->Location = System::Drawing::Point(24, 11);
			this->rbID->Name = L"rbID";
			this->rbID->Size = System::Drawing::Size(137, 19);
			this->rbID->TabIndex = 0;
			this->rbID->TabStop = true;
			this->rbID->Text = L"Recherche par ID";
			this->rbID->UseVisualStyleBackColor = true;
			this->rbID->CheckedChanged += gcnew System::EventHandler(this, &Personnel::rbID_CheckedChanged);
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
			this->label2->Location = System::Drawing::Point(323, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rechercher un Membre du Personnel";
			// 
			// btnCreer
			// 
			this->btnCreer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnCreer->FlatAppearance->BorderSize = 0;
			this->btnCreer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreer->ForeColor = System::Drawing::Color::White;
			this->btnCreer->Location = System::Drawing::Point(0, 3);
			this->btnCreer->Name = L"btnCreer";
			this->btnCreer->Size = System::Drawing::Size(158, 23);
			this->btnCreer->TabIndex = 1;
			this->btnCreer->Text = L"Créer un personnel";
			this->btnCreer->UseVisualStyleBackColor = false;
			this->btnCreer->Click += gcnew System::EventHandler(this, &Personnel::btnCreer_Click);
			this->btnCreer->Leave += gcnew System::EventHandler(this, &Personnel::btnCreer_Leave);
			// 
			// btnModifier
			// 
			this->btnModifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnModifier->FlatAppearance->BorderSize = 0;
			this->btnModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifier->ForeColor = System::Drawing::Color::White;
			this->btnModifier->Location = System::Drawing::Point(412, 4);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(158, 23);
			this->btnModifier->TabIndex = 2;
			this->btnModifier->Text = L"Modifier un personnel";
			this->btnModifier->UseVisualStyleBackColor = false;
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnSupprimer->FlatAppearance->BorderSize = 0;
			this->btnSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimer->ForeColor = System::Drawing::Color::White;
			this->btnSupprimer->Location = System::Drawing::Point(769, 3);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(158, 23);
			this->btnSupprimer->TabIndex = 3;
			this->btnSupprimer->Text = L"Supprimer un personnel";
			this->btnSupprimer->UseVisualStyleBackColor = false;
			// 
			// pnlButtonChoix
			// 
			this->pnlButtonChoix->Controls->Add(this->btnCreer);
			this->pnlButtonChoix->Controls->Add(this->btnSupprimer);
			this->pnlButtonChoix->Controls->Add(this->btnModifier);
			this->pnlButtonChoix->Location = System::Drawing::Point(176, 493);
			this->pnlButtonChoix->Name = L"pnlButtonChoix";
			this->pnlButtonChoix->Size = System::Drawing::Size(927, 30);
			this->pnlButtonChoix->TabIndex = 4;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1294, 635);
			this->Controls->Add(this->pnlButtonChoix);
			this->Controls->Add(this->pnlMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->pnlMain->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pnlFilter->ResumeLayout(false);
			this->pnlFilter->PerformLayout();
			this->pnlTitle->ResumeLayout(false);
			this->pnlTitle->PerformLayout();
			this->pnlButtonChoix->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnCreer_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CreatePerson^ frmCreatePerson = gcnew CreatePerson("employe");
	active = frmCreatePerson;
	frmCreatePerson->ShowDialog();
	

}
private: System::Void btnCreer_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	active->Close();
}
private: System::Void rbID_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->tbID->ReadOnly = false;
	this->tbNom->ReadOnly = true;
	this->tbPrenom->ReadOnly = true;
}
private: System::Void rbNomPrenom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->tbID->ReadOnly = true;
	this->tbNom->ReadOnly = false;
	this->tbPrenom->ReadOnly = false;
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
	this->tbPrenom->Text = "";
}
private: System::Void tbPrenom_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	if (tbPrenom->Text == "")
		this->tbPrenom->Text = "Entrer le Prenom...";
	
}

};
}
