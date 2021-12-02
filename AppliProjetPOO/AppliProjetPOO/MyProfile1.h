#pragma once

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyProfile
	/// </summary>
	public ref class MyProfile : public System::Windows::Forms::Form
	{
	public:
		MyProfile(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			// label
			//this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\user.png")));
			labelNom->Visible = true;
			labelPrenom->Visible = true;
			labelMatricule->Visible = true;
			labelDateEmbauche->Visible = true;
			labelEmail->Visible = true;
			labelTelephone->Visible = true;
			labelDateNaissance->Visible = true;
			labelSuperieur->Visible = true;

			// textBox
			textBoxNom->Visible = false;
			textBoxPrenom->Visible = false;
			textBoxMatricule->Visible = false;
			textBoxEmail->Visible = false;
			textBoxTelephone->Visible = false;


			// button

			buttonModifier->Visible = true;
			buttonAnnuler->Visible = false;
			buttonValider->Visible = false;

			// comboBox

			comboBoxSuperieur->Visible = false;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonModifier;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonValider;
	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::TextBox^ textBoxEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelMatricule;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ labelDateNaissance;
	private: System::Windows::Forms::Label^ labelDateEmbauche;
	private: System::Windows::Forms::Label^ labelSuperieur;
	private: System::Windows::Forms::ComboBox^ comboBoxSuperieur;
	private: System::Windows::Forms::Label^ labelTelephone;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::TextBox^ textBoxTelephone;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxMatricule;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyProfile::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelDateNaissance = (gcnew System::Windows::Forms::Label());
			this->labelDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->labelSuperieur = (gcnew System::Windows::Forms::Label());
			this->comboBoxSuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->labelTelephone = (gcnew System::Windows::Forms::Label());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->textBoxTelephone = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelMatricule = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMatricule = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonValider = (gcnew System::Windows::Forms::Button());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel3->Controls->Add(this->labelDateNaissance);
			this->panel3->Controls->Add(this->labelDateEmbauche);
			this->panel3->Controls->Add(this->labelSuperieur);
			this->panel3->Controls->Add(this->comboBoxSuperieur);
			this->panel3->Controls->Add(this->labelTelephone);
			this->panel3->Controls->Add(this->labelEmail);
			this->panel3->Controls->Add(this->textBoxTelephone);
			this->panel3->Controls->Add(this->dateTimePicker2);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->buttonModifier);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->buttonValider);
			this->panel3->Controls->Add(this->buttonAnnuler);
			this->panel3->Controls->Add(this->textBoxEmail);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1294, 635);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyProfile::panel3_Paint);
			// 
			// labelDateNaissance
			// 
			this->labelDateNaissance->BackColor = System::Drawing::Color::Transparent;
			this->labelDateNaissance->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateNaissance->ForeColor = System::Drawing::Color::White;
			this->labelDateNaissance->Location = System::Drawing::Point(955, 374);
			this->labelDateNaissance->Name = L"labelDateNaissance";
			this->labelDateNaissance->Size = System::Drawing::Size(244, 42);
			this->labelDateNaissance->TabIndex = 42;
			this->labelDateNaissance->Text = L"labelDateNaissance";
			// 
			// labelDateEmbauche
			// 
			this->labelDateEmbauche->BackColor = System::Drawing::Color::Transparent;
			this->labelDateEmbauche->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateEmbauche->ForeColor = System::Drawing::Color::White;
			this->labelDateEmbauche->Location = System::Drawing::Point(382, 278);
			this->labelDateEmbauche->Name = L"labelDateEmbauche";
			this->labelDateEmbauche->Size = System::Drawing::Size(222, 38);
			this->labelDateEmbauche->TabIndex = 21;
			this->labelDateEmbauche->Text = L"labelDateEmbauche";
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->BackColor = System::Drawing::Color::Transparent;
			this->labelSuperieur->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSuperieur->ForeColor = System::Drawing::Color::White;
			this->labelSuperieur->Location = System::Drawing::Point(385, 375);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(191, 35);
			this->labelSuperieur->TabIndex = 21;
			this->labelSuperieur->Text = L"labelSuperieur";
			this->labelSuperieur->Click += gcnew System::EventHandler(this, &MyProfile::labelSuperieur_Click);
			// 
			// comboBoxSuperieur
			// 
			this->comboBoxSuperieur->FormattingEnabled = true;
			this->comboBoxSuperieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sup 1", L"Sup 2" });
			this->comboBoxSuperieur->Location = System::Drawing::Point(386, 378);
			this->comboBoxSuperieur->Name = L"comboBoxSuperieur";
			this->comboBoxSuperieur->Size = System::Drawing::Size(132, 24);
			this->comboBoxSuperieur->TabIndex = 41;
			// 
			// labelTelephone
			// 
			this->labelTelephone->BackColor = System::Drawing::Color::Transparent;
			this->labelTelephone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelephone->ForeColor = System::Drawing::Color::White;
			this->labelTelephone->Location = System::Drawing::Point(960, 278);
			this->labelTelephone->Name = L"labelTelephone";
			this->labelTelephone->Size = System::Drawing::Size(198, 51);
			this->labelTelephone->TabIndex = 39;
			this->labelTelephone->Text = L"labelTelephone";
			// 
			// labelEmail
			// 
			this->labelEmail->BackColor = System::Drawing::Color::Transparent;
			this->labelEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmail->ForeColor = System::Drawing::Color::White;
			this->labelEmail->Location = System::Drawing::Point(385, 476);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(411, 29);
			this->labelEmail->TabIndex = 21;
			this->labelEmail->Text = L"labelEmail";
			// 
			// textBoxTelephone
			// 
			this->textBoxTelephone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxTelephone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTelephone->ForeColor = System::Drawing::SystemColors::Window;
			this->textBoxTelephone->Location = System::Drawing::Point(964, 282);
			this->textBoxTelephone->Name = L"textBoxTelephone";
			this->textBoxTelephone->Size = System::Drawing::Size(146, 22);
			this->textBoxTelephone->TabIndex = 37;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(959, 381);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(126, 22);
			this->dateTimePicker2->TabIndex = 36;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(386, 282);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 22);
			this->dateTimePicker1->TabIndex = 35;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->labelMatricule);
			this->panel1->Controls->Add(this->labelNom);
			this->panel1->Controls->Add(this->labelPrenom);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBoxNom);
			this->panel1->Controls->Add(this->textBoxPrenom);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBoxMatricule);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1294, 222);
			this->panel1->TabIndex = 32;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyProfile::panel1_Paint_1);
			// 
			// labelMatricule
			// 
			this->labelMatricule->BackColor = System::Drawing::Color::Transparent;
			this->labelMatricule->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMatricule->ForeColor = System::Drawing::Color::White;
			this->labelMatricule->Location = System::Drawing::Point(450, 157);
			this->labelMatricule->Name = L"labelMatricule";
			this->labelMatricule->Size = System::Drawing::Size(171, 34);
			this->labelMatricule->TabIndex = 20;
			this->labelMatricule->Text = L"labelMatricule";
			this->labelMatricule->Click += gcnew System::EventHandler(this, &MyProfile::labelMatricule_Click);
			// 
			// labelNom
			// 
			this->labelNom->BackColor = System::Drawing::Color::Transparent;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->ForeColor = System::Drawing::Color::White;
			this->labelNom->Location = System::Drawing::Point(450, 48);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(199, 36);
			this->labelNom->TabIndex = 19;
			this->labelNom->Text = L"labelNom";
			// 
			// labelPrenom
			// 
			this->labelPrenom->BackColor = System::Drawing::Color::Transparent;
			this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrenom->ForeColor = System::Drawing::Color::White;
			this->labelPrenom->Location = System::Drawing::Point(449, 101);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(172, 38);
			this->labelPrenom->TabIndex = 18;
			this->labelPrenom->Text = L"labelPrenom";
			this->labelPrenom->Click += gcnew System::EventHandler(this, &MyProfile::labelPrenom_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\user.png")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(222, 222);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label1->Location = System::Drawing::Point(245, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nom :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyProfile::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label2->Location = System::Drawing::Point(245, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 38);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Prénom :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyProfile::label2_Click);
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNom->ForeColor = System::Drawing::SystemColors::Window;
			this->textBoxNom->Location = System::Drawing::Point(453, 48);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(100, 22);
			this->textBoxNom->TabIndex = 8;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &MyProfile::textBox1_TextChanged);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::Window;
			this->textBoxPrenom->Location = System::Drawing::Point(453, 105);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(100, 22);
			this->textBoxPrenom->TabIndex = 9;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &MyProfile::textBox2_TextChanged);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label8->Location = System::Drawing::Point(245, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 38);
			this->label8->TabIndex = 0;
			this->label8->Text = L"N° Matricule :";
			this->label8->Click += gcnew System::EventHandler(this, &MyProfile::label8_Click);
			// 
			// textBoxMatricule
			// 
			this->textBoxMatricule->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxMatricule->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMatricule->ForeColor = System::Drawing::SystemColors::Window;
			this->textBoxMatricule->Location = System::Drawing::Point(453, 161);
			this->textBoxMatricule->Name = L"textBoxMatricule";
			this->textBoxMatricule->Size = System::Drawing::Size(103, 22);
			this->textBoxMatricule->TabIndex = 17;
			// 
			// buttonModifier
			// 
			this->buttonModifier->Location = System::Drawing::Point(1160, 594);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(111, 28);
			this->buttonModifier->TabIndex = 31;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &MyProfile::buttonModifier_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label10->Location = System::Drawing::Point(84, 370);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(302, 37);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Supérieur hiérarchique :";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label9->Location = System::Drawing::Point(84, 274);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(302, 42);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Date d\'embauche :";
			// 
			// buttonValider
			// 
			this->buttonValider->Location = System::Drawing::Point(999, 594);
			this->buttonValider->Name = L"buttonValider";
			this->buttonValider->Size = System::Drawing::Size(111, 28);
			this->buttonValider->TabIndex = 23;
			this->buttonValider->Text = L"Valider";
			this->buttonValider->UseVisualStyleBackColor = true;
			this->buttonValider->Click += gcnew System::EventHandler(this, &MyProfile::buttonValider_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Location = System::Drawing::Point(835, 594);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(111, 28);
			this->buttonAnnuler->TabIndex = 22;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &MyProfile::button5_Click);
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBoxEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxEmail->ForeColor = System::Drawing::SystemColors::Window;
			this->textBoxEmail->Location = System::Drawing::Point(389, 478);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(406, 22);
			this->textBoxEmail->TabIndex = 10;
			this->textBoxEmail->TextChanged += gcnew System::EventHandler(this, &MyProfile::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label5->Location = System::Drawing::Point(645, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 75);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Date de naissance :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyProfile::label5_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label4->Location = System::Drawing::Point(645, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 72);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Numéro de téléphone :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyProfile::label4_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label3->Location = System::Drawing::Point(84, 467);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 38);
			this->label3->TabIndex = 5;
			this->label3->Text = L"E-mail :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyProfile::label3_Click_1);
			// 
			// MyProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1294, 635);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyProfile::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)

	{
		// label

		labelNom->Visible = true;
		labelPrenom->Visible = true;
		labelMatricule->Visible = true;
		labelEmail->Visible = true;
		labelTelephone->Visible = true;
		labelDateEmbauche->Visible = true;
		labelDateNaissance->Visible = true;
		labelSuperieur->Visible = true;

		// textBox

		textBoxNom->Visible = false;
		textBoxPrenom->Visible = false;
		textBoxMatricule->Visible = false;
		textBoxEmail->Visible = false;
		textBoxTelephone->Visible = false;


		// button

		buttonModifier->Visible = true;
		buttonAnnuler->Visible = false;
		buttonValider->Visible = false;

		// comboBox

		comboBoxSuperieur->Visible = false;

		//Réinitialistion du texte

		textBoxNom->Text = "";
		textBoxPrenom->Text = "";
		textBoxMatricule->Text = "";
		textBoxEmail->Text = "";
		textBoxTelephone->Text = "";


	}

	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e)

	{
		// label
		labelNom->Visible = false;
		labelPrenom->Visible = false;
		labelMatricule->Visible = false;
		labelEmail->Visible = false;
		labelDateEmbauche->Visible = false;
		labelTelephone->Visible = false;
		labelDateNaissance->Visible = false;

		labelSuperieur->Visible = false;

		// textBox
		textBoxNom->Visible = true;
		textBoxPrenom->Visible = true;
		textBoxMatricule->Visible = true;
		textBoxEmail->Visible = true;
		textBoxTelephone->Visible = true;


		textBoxNom->Text = labelNom->Text;
		textBoxPrenom->Text = labelPrenom->Text;
		textBoxMatricule->Text = labelMatricule->Text;
		textBoxEmail->Text = labelEmail->Text;
		textBoxTelephone->Text = labelTelephone->Text;



		// button

		buttonModifier->Visible = false;
		buttonAnnuler->Visible = true;
		buttonValider->Visible = true;

		// comboBox

		comboBoxSuperieur->Visible = true;

	}


	private: System::Void labelPrenom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelMatricule_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonValider_Click(System::Object^ sender, System::EventArgs^ e)
	{

		// label
		labelNom->Visible = true;
		labelPrenom->Visible = true;
		labelMatricule->Visible = true;
		labelDateEmbauche->Visible = true;
		labelEmail->Visible = true;
		labelTelephone->Visible = true;
		labelDateNaissance->Visible = true;
		labelSuperieur->Visible = true;

		// textBox
		textBoxNom->Visible = false;
		textBoxPrenom->Visible = false;
		textBoxMatricule->Visible = false;
		textBoxEmail->Visible = false;
		textBoxTelephone->Visible = false;


		// button

		buttonModifier->Visible = true;
		buttonAnnuler->Visible = false;
		buttonValider->Visible = false;

		// comboBox

		comboBoxSuperieur->Visible = false;

		String^ Nom, ^ Prenom, ^ Matricule, ^ Email, ^ NumeroTelephone, ^ DateEmbauche, ^ DateNaissance;

		// Nom -----------------------------------------


		if (textBoxNom->Text == labelNom->Text)
		{
			Nom = labelNom->Text;
		}
		else
		{
			Nom = textBoxNom->Text;
		}


		labelNom->Text = Nom;

		//Prénom ---------------------------------------


		if (textBoxPrenom->Text == labelPrenom->Text)
		{
			Prenom = labelPrenom->Text;
		}
		else
		{
			Prenom = textBoxPrenom->Text;
		}

		labelPrenom->Text = Prenom;

		//NumeroMatricule ------------------------------


		if (textBoxMatricule->Text == labelMatricule->Text)
		{
			Matricule = labelMatricule->Text;
		}
		else
		{
			Matricule = textBoxMatricule->Text;
		}

		labelMatricule->Text = Matricule;

		//Email ----------------------------------------


		if (textBoxEmail->Text == labelEmail->Text)
		{
			Email = labelEmail->Text;
		}
		else
		{
			Email = textBoxEmail->Text;
		}

		labelEmail->Text = Email;


		//NumeroTelephone ------------------------------


		if (textBoxTelephone->Text == labelTelephone->Text)
		{
			NumeroTelephone = labelTelephone->Text;
		}
		else
		{
			NumeroTelephone = textBoxTelephone->Text;
		}

		labelTelephone->Text = NumeroTelephone;


		//DateNaissance ------------------------------


		labelDateNaissance->Text = DateNaissance;


		//DateNaissance ------------------------------

		labelDateEmbauche->Text = DateEmbauche;


		MessageBox::Show("Les modifications ont été enregistrées.");

	}


	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelSuperieur_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}