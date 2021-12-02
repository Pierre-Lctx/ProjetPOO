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
	/// Description résumée de ModifCommande
	/// </summary>
	public ref class ModifCommande : public System::Windows::Forms::Form
	{
	public: Connect^ conn;
	public:
		ModifCommande(void)
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
		~ModifCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxNumeroCommande;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxQuantite;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;

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
			this->comboBoxNumeroCommande = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxQuantite = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBoxNumeroCommande
			// 
			this->comboBoxNumeroCommande->FormattingEnabled = true;
			this->comboBoxNumeroCommande->Location = System::Drawing::Point(388, 90);
			this->comboBoxNumeroCommande->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->comboBoxNumeroCommande->Name = L"comboBoxNumeroCommande";
			this->comboBoxNumeroCommande->Size = System::Drawing::Size(340, 38);
			this->comboBoxNumeroCommande->TabIndex = 84;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(30, 98);
			this->label6->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(298, 30);
			this->label6->TabIndex = 83;
			this->label6->Text = L"Numero de commande";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(388, 142);
			this->comboBox1->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(340, 38);
			this->comboBox1->TabIndex = 82;
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(16, 265);
			this->btnValider->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(712, 35);
			this->btnValider->TabIndex = 81;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &ModifCommande::btnValider_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(30, 197);
			this->label7->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 30);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Quantité";
			// 
			// textBoxQuantite
			// 
			this->textBoxQuantite->Location = System::Drawing::Point(388, 194);
			this->textBoxQuantite->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->textBoxQuantite->Multiline = true;
			this->textBoxQuantite->Name = L"textBoxQuantite";
			this->textBoxQuantite->Size = System::Drawing::Size(340, 32);
			this->textBoxQuantite->TabIndex = 79;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(30, 145);
			this->label8->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 30);
			this->label8->TabIndex = 78;
			this->label8->Text = L"Article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(93, 18);
			this->label5->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(570, 44);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Modification de la commande";
			// 
			// ModifCommande
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
			this->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->Name = L"ModifCommande";
			this->Text = L"ModifCommande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		conn->openConnection();

		String^ query = "Update Commande set Commande.NUMERO_COMMANDE = '" + comboBoxNumeroCommande->Text + "'";
		String^ query1 = "Update Contenir set Contenir.ID_ARTICLE = (select Article.ID_ARTICLE from Article INNER JOIN Contenir ON Contenir.ID_ARTICLE = Article.ID_ARTICLE WHERE Article.NOM_ARTICLE = '" + comboBox1->Text + "') , QUANTITE = " + textBoxQuantite->Text;
		SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());
		SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

		cmd->ExecuteNonQuery();
		cmd1->ExecuteNonQuery();

		conn->closeConnection();
	}
};
}
