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
	/// Description résumée de Article
	/// </summary>
	public ref class Article : public System::Windows::Forms::Form
	{
	public: Connect^ conn;
	public:
		Article(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			conn = gcnew Connect();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Article()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxStock;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxSeuilAppro;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPrix;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxCouleur;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxNature;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxTVA;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnValider;

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
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStock = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSeuilAppro = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrix = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxNature = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom de l\'article";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(389, 127);
			this->textBoxNom->Multiline = true;
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(320, 30);
			this->textBoxNom->TabIndex = 1;
			// 
			// textBoxStock
			// 
			this->textBoxStock->Location = System::Drawing::Point(389, 191);
			this->textBoxStock->Multiline = true;
			this->textBoxStock->Name = L"textBoxStock";
			this->textBoxStock->Size = System::Drawing::Size(320, 30);
			this->textBoxStock->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(31, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Stocks associés ";
			// 
			// textBoxSeuilAppro
			// 
			this->textBoxSeuilAppro->Location = System::Drawing::Point(389, 322);
			this->textBoxSeuilAppro->Multiline = true;
			this->textBoxSeuilAppro->Name = L"textBoxSeuilAppro";
			this->textBoxSeuilAppro->Size = System::Drawing::Size(320, 30);
			this->textBoxSeuilAppro->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(31, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(329, 30);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Seuil d\'approvisionnement";
			// 
			// textBoxPrix
			// 
			this->textBoxPrix->Location = System::Drawing::Point(389, 258);
			this->textBoxPrix->Multiline = true;
			this->textBoxPrix->Name = L"textBoxPrix";
			this->textBoxPrix->Size = System::Drawing::Size(320, 30);
			this->textBoxPrix->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(31, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Prix de l\'article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(188, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(371, 44);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Création de l\'article";
			// 
			// textBoxCouleur
			// 
			this->textBoxCouleur->Location = System::Drawing::Point(389, 514);
			this->textBoxCouleur->Multiline = true;
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->Size = System::Drawing::Size(320, 30);
			this->textBoxCouleur->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(31, 514);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(240, 30);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Couleur de l\'article";
			// 
			// textBoxNature
			// 
			this->textBoxNature->Location = System::Drawing::Point(389, 450);
			this->textBoxNature->Multiline = true;
			this->textBoxNature->Name = L"textBoxNature";
			this->textBoxNature->Size = System::Drawing::Size(320, 30);
			this->textBoxNature->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(34, 450);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(225, 30);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Nature de l\'article";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(389, 383);
			this->textBoxTVA->Multiline = true;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(320, 30);
			this->textBoxTVA->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(31, 383);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(190, 30);
			this->label8->TabIndex = 9;
			this->label8->Text = L"TVA sur l\'article";
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(39, 610);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(670, 29);
			this->btnValider->TabIndex = 15;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &Article::btnValider_Click);
			// 
			// Article
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(767, 676);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->textBoxCouleur);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxNature);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxSeuilAppro);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPrix);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxStock);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label1);
			this->Name = L"Article";
			this->Text = L"Article";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Nom, ^ Stock, ^ Prix, ^ SeuilAppro, ^ TVA, ^ Nature, ^ Couleur;

		Nom = textBoxNom->Text;
		Stock = textBoxStock->Text;
		Prix = textBoxPrix->Text;
		SeuilAppro = textBoxSeuilAppro->Text;
		TVA = textBoxTVA->Text;
		Nature = textBoxNature->Text;
		Couleur = textBoxCouleur->Text;

		if (Nom != "" && Stock != "" && Prix != "" && SeuilAppro != "" && TVA != "" && Nature != "" && Couleur != "")
		{
			conn->openConnection();

			String^ query = "Udpate Article set NOM_ARTICLE = " + Nom + ", STOCK = " + Stock + ", PRIX_ARTICLE = " + Prix + ", SEUIL_APPROVISIONNEMENT = " + SeuilAppro + ", TVA = " + TVA + ", NATURE = " + Nature + ", COULEUR = " + Couleur + " WHERE NOM_ARTICLE = " + Nom;
			SqlCommand^ cmd = gcnew SqlCommand(query, conn->getConn());

			cmd->ExecuteNonQuery();

			conn->closeConnection();
		}
		else
		{
			MessageBox::Show("Un des champs n'est pas renseigner ! Merci de bien vouloir renseigner tous les champs !");
		}
	}
};
}
