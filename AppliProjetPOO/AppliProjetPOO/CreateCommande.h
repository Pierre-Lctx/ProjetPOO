#pragma once

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreateCommande
	/// </summary>
	public ref class CreateCommande : public System::Windows::Forms::Form
	{
	public:
		CreateCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
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
	private: System::Windows::Forms::TextBox^ textBoxTVA;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxSeuilAppro;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPrix;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxStock;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSeuilAppro = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrix = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxStock = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(391, 390);
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
			this->btnValider->Location = System::Drawing::Point(308, 533);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(102, 29);
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
			this->label7->Location = System::Drawing::Point(36, 460);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 30);
			this->label7->TabIndex = 72;
			this->label7->Text = L"Quantité";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(391, 460);
			this->textBoxTVA->Multiline = true;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(320, 30);
			this->textBoxTVA->TabIndex = 71;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(33, 393);
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
			this->label5->Location = System::Drawing::Point(118, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(501, 44);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Création de la commande";
			// 
			// textBoxSeuilAppro
			// 
			this->textBoxSeuilAppro->Location = System::Drawing::Point(391, 332);
			this->textBoxSeuilAppro->Multiline = true;
			this->textBoxSeuilAppro->Name = L"textBoxSeuilAppro";
			this->textBoxSeuilAppro->Size = System::Drawing::Size(320, 30);
			this->textBoxSeuilAppro->TabIndex = 68;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(33, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 30);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Date de livraison";
			// 
			// textBoxPrix
			// 
			this->textBoxPrix->Location = System::Drawing::Point(391, 268);
			this->textBoxPrix->Multiline = true;
			this->textBoxPrix->Name = L"textBoxPrix";
			this->textBoxPrix->Size = System::Drawing::Size(320, 30);
			this->textBoxPrix->TabIndex = 66;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(33, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 30);
			this->label4->TabIndex = 65;
			this->label4->Text = L"Date d\'émission";
			// 
			// textBoxStock
			// 
			this->textBoxStock->Location = System::Drawing::Point(391, 201);
			this->textBoxStock->Multiline = true;
			this->textBoxStock->Name = L"textBoxStock";
			this->textBoxStock->Size = System::Drawing::Size(320, 30);
			this->textBoxStock->TabIndex = 64;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 30);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Prénom du client";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(391, 137);
			this->textBoxNom->Multiline = true;
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(320, 30);
			this->textBoxNom->TabIndex = 62;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(33, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 30);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Nom du client";
			// 
			// CreateCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(744, 611);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnValider);
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

	}
};
}
