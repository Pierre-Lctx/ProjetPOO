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
	public: int idCommande = 0;
	public:
		CreateCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			conn = gcnew Connect();

			conn->openConnection();

			String^ query = "Select Commande.NUMERO_COMMANDE, Article.NOM_ARTICLE from DBProjet.dbo.Commande INNER JOIN DBProjet.dbo.Contenir ON Commande.ID_COMMANDE = Contenir.ID_COMMANDE INNER JOIN DBProjet.dbo.Article ON Article.ID_ARTICLE = Contenir.ID_ARTICLE";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			SqlDataReader^ dr = cmd->ExecuteReader();

			while (dr->Read())
			{
				comboBox1->Items->Add(dr["NOM_ARTICLE"]);
			}

			dr->Close();

			String^ query1 = "Select max(ID_COMMANDE) from Commande";
			SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

			SqlDataReader^ dr1 = cmd1->ExecuteReader();

			while (dr->Read())
			{
				idCommande = Convert::ToInt32(dr["ID_COMMANDE"]->ToString());
			}

			idCommande++;

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCommande;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmission;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerLivraison;



	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerCommande = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerEmission = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(391, 189);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(320, 38);
			this->comboBox1->TabIndex = 74;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateCommande::comboBox1_SelectedIndexChanged);
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(41, 493);
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
			this->label7->Location = System::Drawing::Point(36, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 30);
			this->label7->TabIndex = 72;
			this->label7->Text = L"Quantité";
			this->label7->Click += gcnew System::EventHandler(this, &CreateCommande::label7_Click);
			// 
			// textBoxQuantite
			// 
			this->textBoxQuantite->Location = System::Drawing::Point(391, 259);
			this->textBoxQuantite->Multiline = true;
			this->textBoxQuantite->Name = L"textBoxQuantite";
			this->textBoxQuantite->Size = System::Drawing::Size(320, 30);
			this->textBoxQuantite->TabIndex = 71;
			this->textBoxQuantite->TextChanged += gcnew System::EventHandler(this, &CreateCommande::textBoxQuantite_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(36, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 30);
			this->label8->TabIndex = 70;
			this->label8->Text = L"Article";
			this->label8->Click += gcnew System::EventHandler(this, &CreateCommande::label8_Click);
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
			this->label5->Click += gcnew System::EventHandler(this, &CreateCommande::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(36, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 30);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Nom du client";
			this->label6->Click += gcnew System::EventHandler(this, &CreateCommande::label6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(36, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 30);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Date de la commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(36, 442);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 30);
			this->label2->TabIndex = 79;
			this->label2->Text = L"Date de livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(36, 381);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 30);
			this->label3->TabIndex = 77;
			this->label3->Text = L"Date d\'émission";
			// 
			// dateTimePickerCommande
			// 
			this->dateTimePickerCommande->Location = System::Drawing::Point(391, 315);
			this->dateTimePickerCommande->Name = L"dateTimePickerCommande";
			this->dateTimePickerCommande->Size = System::Drawing::Size(320, 37);
			this->dateTimePickerCommande->TabIndex = 82;
			// 
			// dateTimePickerEmission
			// 
			this->dateTimePickerEmission->Location = System::Drawing::Point(391, 376);
			this->dateTimePickerEmission->Name = L"dateTimePickerEmission";
			this->dateTimePickerEmission->Size = System::Drawing::Size(320, 37);
			this->dateTimePickerEmission->TabIndex = 83;
			// 
			// dateTimePickerLivraison
			// 
			this->dateTimePickerLivraison->Location = System::Drawing::Point(391, 435);
			this->dateTimePickerLivraison->Name = L"dateTimePickerLivraison";
			this->dateTimePickerLivraison->Size = System::Drawing::Size(320, 37);
			this->dateTimePickerLivraison->TabIndex = 84;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(391, 74);
			this->textBoxNom->Multiline = true;
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(320, 30);
			this->textBoxNom->TabIndex = 85;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(391, 130);
			this->textBoxPrenom->Multiline = true;
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(320, 30);
			this->textBoxPrenom->TabIndex = 87;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(36, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 30);
			this->label4->TabIndex = 86;
			this->label4->Text = L"Prenom du client";
			// 
			// CreateCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(744, 545);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->dateTimePickerLivraison);
			this->Controls->Add(this->dateTimePickerEmission);
			this->Controls->Add(this->dateTimePickerCommande);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
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

		String^ query = "INSERT INTO Commande VALUES ( , '" + dateTimePickerLivraison->Text + "', '" + dateTimePickerEmission->Text + "', '" + dateTimePickerCommande->Text + ", (Select Client.ID_CLIENT from Client INNER JOIN Personne ON Personne.ID_PERSONNE = Client.ID_PERSONNE WHERE Personne.NOM_PERSONNE = " + textBoxNom->Text + " AND Personne.PRENOM_PERSONNE = " + textBoxPrenom->Text + ")";
		String^ query1 = "INSERT INTO Contenir VALUES (" + idCommande + ", (select ID_ARTICLE from Article where NOM_ARTICLE = " + comboBox1->Text +"), " + textBoxQuantite->Text + ")";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());
		SqlCommand^ cmd1 = gcnew SqlCommand(query1, conn->getConn());

		cmd->ExecuteNonQuery();
		cmd1->ExecuteNonQuery();

		conn->closeConnection();
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBoxNumeroCommande_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxQuantite_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
