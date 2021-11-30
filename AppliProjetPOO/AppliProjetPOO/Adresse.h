#pragma once

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Adresse
	/// </summary>
	public ref class Adresse : public System::Windows::Forms::Form
	{
	private:
		String^ ville, ^ rue, ^ numRue, ^ batiment, ^ etage, ^ numApp;
		bool liveApp;
	public:
		Adresse(void)
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
		~Adresse()
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
	private: System::Windows::Forms::TextBox^ tbRue;
	private: System::Windows::Forms::TextBox^ tbBatiment;
	private: System::Windows::Forms::TextBox^ tbEtage;
	private: System::Windows::Forms::TextBox^ tbNumRue;
	private: System::Windows::Forms::ComboBox^ cbVille;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbNumApp;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbRue = (gcnew System::Windows::Forms::TextBox());
			this->tbBatiment = (gcnew System::Windows::Forms::TextBox());
			this->tbEtage = (gcnew System::Windows::Forms::TextBox());
			this->tbNumRue = (gcnew System::Windows::Forms::TextBox());
			this->cbVille = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbNumApp = (gcnew System::Windows::Forms::TextBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(70, 46);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Création d\'une adresse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(34, 113);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ville          :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(34, 180);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Rue           :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(34, 300);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Batiment :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(34, 358);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Etage       :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(34, 235);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(243, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Numero de Rue  :";
			// 
			// tbRue
			// 
			this->tbRue->Location = System::Drawing::Point(218, 180);
			this->tbRue->Margin = System::Windows::Forms::Padding(6);
			this->tbRue->Multiline = true;
			this->tbRue->Name = L"tbRue";
			this->tbRue->Size = System::Drawing::Size(210, 33);
			this->tbRue->TabIndex = 7;
			// 
			// tbBatiment
			// 
			this->tbBatiment->Location = System::Drawing::Point(218, 300);
			this->tbBatiment->Margin = System::Windows::Forms::Padding(6);
			this->tbBatiment->Multiline = true;
			this->tbBatiment->Name = L"tbBatiment";
			this->tbBatiment->Size = System::Drawing::Size(210, 33);
			this->tbBatiment->TabIndex = 8;
			// 
			// tbEtage
			// 
			this->tbEtage->Location = System::Drawing::Point(218, 358);
			this->tbEtage->Margin = System::Windows::Forms::Padding(6);
			this->tbEtage->Multiline = true;
			this->tbEtage->Name = L"tbEtage";
			this->tbEtage->Size = System::Drawing::Size(210, 33);
			this->tbEtage->TabIndex = 9;
			// 
			// tbNumRue
			// 
			this->tbNumRue->Location = System::Drawing::Point(289, 235);
			this->tbNumRue->Margin = System::Windows::Forms::Padding(6);
			this->tbNumRue->Multiline = true;
			this->tbNumRue->Name = L"tbNumRue";
			this->tbNumRue->Size = System::Drawing::Size(159, 33);
			this->tbNumRue->TabIndex = 10;
			// 
			// cbVille
			// 
			this->cbVille->FormattingEnabled = true;
			this->cbVille->Location = System::Drawing::Point(218, 113);
			this->cbVille->Margin = System::Windows::Forms::Padding(6);
			this->cbVille->Name = L"cbVille";
			this->cbVille->Size = System::Drawing::Size(210, 33);
			this->cbVille->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(34, 412);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(242, 33);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Numero d\'App.   :";
			// 
			// tbNumApp
			// 
			this->tbNumApp->Location = System::Drawing::Point(289, 412);
			this->tbNumApp->Margin = System::Windows::Forms::Padding(6);
			this->tbNumApp->Multiline = true;
			this->tbNumApp->Name = L"tbNumApp";
			this->tbNumApp->Size = System::Drawing::Size(159, 33);
			this->tbNumApp->TabIndex = 13;
			// 
			// btnValider
			// 
			this->btnValider->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnValider->Location = System::Drawing::Point(209, 492);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(102, 29);
			this->btnValider->TabIndex = 14;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &Adresse::btnValider_Click);
			// 
			// Adresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(504, 552);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->tbNumApp);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cbVille);
			this->Controls->Add(this->tbNumRue);
			this->Controls->Add(this->tbEtage);
			this->Controls->Add(this->tbBatiment);
			this->Controls->Add(this->tbRue);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Adresse";
			this->Text = L"Adresse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			String^ getVille()
			{
				return ville;
			}
			String^ getRue()
			{
				return rue;
			}
			String^ getNumRue()
			{
				return numRue;
			}
			String^ getBatiment()
			{
				return batiment;
			}
			String^ getEtage()
			{
				return etage;
			}
			String^ getNumApp()
			{
				return numApp;
			}
			bool getTypeLocation()
			{
				return liveApp;
			}
	
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (cbVille->Text == "" || tbRue->Text == "" || tbNumRue->Text == "" || tbBatiment->Text == "" || tbEtage->Text == "" || tbNumApp->Text == "")
	{
		MessageBoxButtons::OK;
		MessageBoxIcon::Warning;
		MessageBox::Show("Erreur");
	}
}
};
}
