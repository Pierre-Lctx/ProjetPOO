#pragma once

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
	/// Description résumée de CreateCommande
	/// </summary>
	public ref class CreateCommande : public System::Windows::Forms::Form
	{
	public: Connect^ conn;
	public:
		CreateCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			conn = gcnew Connect();

			conn->openConnection();

			String^ query = "select Commande.NUMERO_COMMANDE, Article.NOM_ARTICLE from DBProjet.dbo.Commande INNER JOIN DBProjet.dbo.Contenir ON Commande.ID_COMMANDE = Contenir.ID_COMMANDE INNER JOIN DBProjet.dbo.Paiement ON Paiement.ID_COMMANDE = Commande.ID_COMMANDE INNER JOIN DBProjet.dbo.Article ON Article.ID_ARTICLE = Contenir.ID_ARTICLE INNER JOIN DBProjet.dbo.Client ON Client.ID_PERSONNE = Commande.ID_CLIENT INNER JOIN DBProjet.dbo.Personne ON Client.ID_CLIENT = Personne.ID_PERSONNE;";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			SqlDataReader^ dr = cmd->ExecuteReader();

			while (dr->Read())
			{
				comboBoxNumeroCommande->Items->Add(dr["NUMERO_COMMANDE"]->ToString());
				comboBox1->Items->Add(dr["NOM_ARTICLE"]->ToString());
			}


			conn->closeConnection();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CreateCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxQuantite;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBoxNumeroCommande;

	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxQuantite = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBoxNumeroCommande = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(391, 135);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(320, 38);
			this->comboBox1->TabIndex = 74;
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(41, 266);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(670, 29);
			this->btnValider->TabIndex = 73;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &CreateCommande::btnValider_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(36, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 30);
			this->label7->TabIndex = 72;
			this->label7->Text = L"Quantité";
			// 
			// textBoxQuantite
			// 
			this->textBoxQuantite->Location = System::Drawing::Point(391, 205);
			this->textBoxQuantite->Multiline = true;
			this->textBoxQuantite->Name = L"textBoxQuantite";
			this->textBoxQuantite->Size = System::Drawing::Size(320, 30);
			this->textBoxQuantite->TabIndex = 71;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(36, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 30);
			this->label8->TabIndex = 70;
			this->label8->Text = L"Article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(117, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(501, 44);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Création de la commande";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(36, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(298, 30);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Numero de commande";
			// 
			// comboBoxNumeroCommande
			// 
			this->comboBoxNumeroCommande->FormattingEnabled = true;
			this->comboBoxNumeroCommande->Location = System::Drawing::Point(391, 69);
			this->comboBoxNumeroCommande->Name = L"comboBoxNumeroCommande";
			this->comboBoxNumeroCommande->Size = System::Drawing::Size(320, 38);
			this->comboBoxNumeroCommande->TabIndex = 76;
			// 
			// CreateCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(744, 316);
			this->Controls->Add(this->comboBoxNumeroCommande);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxQuantite);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"CreateCommande";
			this->Text = L"CreateCommande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		conn->openConnection();

		String^ query = "Update Commande set Commande.NUMERO_COMMANDE = '" + comboBoxNumeroCommande->Text + "'";
		String^ query1 = "Update Contenir set Contenir.ID_ARTICLE = (select Article.NOM_ARTICLE from Article INNER JOIN Contenir ON Contenir.ID_ARTICLE = Article.ID_ARTICLE WHERE Article.NOM_ARTICLE = " + comboBox1->Text + ") , QUANTITE = " + textBoxQuantite->Text;
		SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());
		SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

		cmd->ExecuteNonQuery();
		cmd1->ExecuteNonQuery();

		conn->closeConnection();
	}
};
}
