#pragma once

#include "Fct.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de TableauBord
	/// </summary>
	public ref class TableauBord : public System::Windows::Forms::Form
	{
	public:
		TableauBord(void)
		{
			InitializeComponent();

			// Obj de la classe fct pour appeler les fonctions suivantes
			Fct^ f = gcnew Fct(btnWarning1, btnWarning2, btnWarning3, btnWarning4, btnWarning5, btnWarning6, btnWarning7, btnWarning8, btnWarning9, btnWarning10, btnWarning11, btnWarning12, btnSeeWarning);
			f->initializeWarningBtn(countWarning());
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~TableauBord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlWarning;
	private: System::Windows::Forms::Panel^ pnlWTitle;
	private: System::Windows::Forms::Label^ lblWarning;
	private: System::Windows::Forms::Button^ btnWarning1;
	private: System::Windows::Forms::Button^ btnSeeWarning;
	private: System::Windows::Forms::Button^ btnWarning12;
	private: System::Windows::Forms::Button^ btnWarning11;
	private: System::Windows::Forms::Button^ btnWarning10;
	private: System::Windows::Forms::Button^ btnWarning9;
	private: System::Windows::Forms::Button^ btnWarning8;
	private: System::Windows::Forms::Button^ btnWarning7;
	private: System::Windows::Forms::Button^ btnWarning6;
	private: System::Windows::Forms::Button^ btnWarning5;
	private: System::Windows::Forms::Button^ btnWarning4;
	private: System::Windows::Forms::Button^ btnWarning3;
	private: System::Windows::Forms::Button^ btnWarning2;
	private: System::Windows::Forms::Panel^ pnlKeyPoint;
	private: System::Windows::Forms::Panel^ pnlWeekEarning;



	private: System::Windows::Forms::Panel^ pnlTitleKeyPoint;
	private: System::Windows::Forms::Panel^ pnlTitleWeekEarning;

	private: System::Windows::Forms::PictureBox^ picCustomer;






	private: System::Windows::Forms::PictureBox^ pictureBox3;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picPersonnem;
	private: System::Windows::Forms::Label^ lblCommande;

	private: System::Windows::Forms::Label^ lblClient;


	private: System::Windows::Forms::Label^ lblNameEmploye;
	private: System::Windows::Forms::Label^ lblNbCommandePass;

	private: System::Windows::Forms::Label^ lblNbNewClient;
	private: System::Windows::Forms::Label^ lblNbEmployé;
	private: System::Windows::Forms::Label^ lblEarning;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::Windows::Forms::Label^ label2;

	private: int countWarning()
	{
		int nbWarning = 13;
		return nbWarning;
	}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TableauBord::typeid));
			this->pnlWarning = (gcnew System::Windows::Forms::Panel());
			this->btnSeeWarning = (gcnew System::Windows::Forms::Button());
			this->btnWarning12 = (gcnew System::Windows::Forms::Button());
			this->btnWarning11 = (gcnew System::Windows::Forms::Button());
			this->btnWarning10 = (gcnew System::Windows::Forms::Button());
			this->btnWarning9 = (gcnew System::Windows::Forms::Button());
			this->btnWarning8 = (gcnew System::Windows::Forms::Button());
			this->btnWarning7 = (gcnew System::Windows::Forms::Button());
			this->btnWarning6 = (gcnew System::Windows::Forms::Button());
			this->btnWarning5 = (gcnew System::Windows::Forms::Button());
			this->btnWarning4 = (gcnew System::Windows::Forms::Button());
			this->btnWarning3 = (gcnew System::Windows::Forms::Button());
			this->btnWarning2 = (gcnew System::Windows::Forms::Button());
			this->btnWarning1 = (gcnew System::Windows::Forms::Button());
			this->pnlWTitle = (gcnew System::Windows::Forms::Panel());
			this->lblWarning = (gcnew System::Windows::Forms::Label());
			this->pnlKeyPoint = (gcnew System::Windows::Forms::Panel());
			this->lblCommande = (gcnew System::Windows::Forms::Label());
			this->lblClient = (gcnew System::Windows::Forms::Label());
			this->lblNameEmploye = (gcnew System::Windows::Forms::Label());
			this->picPersonnem = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->picCustomer = (gcnew System::Windows::Forms::PictureBox());
			this->pnlTitleKeyPoint = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlWeekEarning = (gcnew System::Windows::Forms::Panel());
			this->pnlTitleWeekEarning = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblNbEmployé = (gcnew System::Windows::Forms::Label());
			this->lblNbNewClient = (gcnew System::Windows::Forms::Label());
			this->lblNbCommandePass = (gcnew System::Windows::Forms::Label());
			this->lblEarning = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlWarning->SuspendLayout();
			this->pnlWTitle->SuspendLayout();
			this->pnlKeyPoint->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPersonnem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCustomer))->BeginInit();
			this->pnlTitleKeyPoint->SuspendLayout();
			this->pnlWeekEarning->SuspendLayout();
			this->pnlTitleWeekEarning->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlWarning
			// 
			this->pnlWarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->pnlWarning->Controls->Add(this->btnSeeWarning);
			this->pnlWarning->Controls->Add(this->btnWarning12);
			this->pnlWarning->Controls->Add(this->btnWarning11);
			this->pnlWarning->Controls->Add(this->btnWarning10);
			this->pnlWarning->Controls->Add(this->btnWarning9);
			this->pnlWarning->Controls->Add(this->btnWarning8);
			this->pnlWarning->Controls->Add(this->btnWarning7);
			this->pnlWarning->Controls->Add(this->btnWarning6);
			this->pnlWarning->Controls->Add(this->btnWarning5);
			this->pnlWarning->Controls->Add(this->btnWarning4);
			this->pnlWarning->Controls->Add(this->btnWarning3);
			this->pnlWarning->Controls->Add(this->btnWarning2);
			this->pnlWarning->Controls->Add(this->btnWarning1);
			this->pnlWarning->Controls->Add(this->pnlWTitle);
			this->pnlWarning->Location = System::Drawing::Point(67, 12);
			this->pnlWarning->Name = L"pnlWarning";
			this->pnlWarning->Size = System::Drawing::Size(329, 588);
			this->pnlWarning->TabIndex = 0;
			// 
			// btnSeeWarning
			// 
			this->btnSeeWarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnSeeWarning->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSeeWarning->FlatAppearance->BorderSize = 0;
			this->btnSeeWarning->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeeWarning->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeeWarning->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnSeeWarning->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSeeWarning.Image")));
			this->btnSeeWarning->Location = System::Drawing::Point(0, 546);
			this->btnSeeWarning->Name = L"btnSeeWarning";
			this->btnSeeWarning->Size = System::Drawing::Size(329, 40);
			this->btnSeeWarning->TabIndex = 13;
			this->btnSeeWarning->Text = L"Voir Plus";
			this->btnSeeWarning->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnSeeWarning->UseVisualStyleBackColor = false;
			// 
			// btnWarning12
			// 
			this->btnWarning12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning12->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning12->FlatAppearance->BorderSize = 0;
			this->btnWarning12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning12.Image")));
			this->btnWarning12->Location = System::Drawing::Point(0, 506);
			this->btnWarning12->Name = L"btnWarning12";
			this->btnWarning12->Size = System::Drawing::Size(329, 40);
			this->btnWarning12->TabIndex = 12;
			this->btnWarning12->Text = L"Warning N°0001C";
			this->btnWarning12->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning12->UseVisualStyleBackColor = false;
			// 
			// btnWarning11
			// 
			this->btnWarning11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning11->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning11->FlatAppearance->BorderSize = 0;
			this->btnWarning11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning11.Image")));
			this->btnWarning11->Location = System::Drawing::Point(0, 466);
			this->btnWarning11->Name = L"btnWarning11";
			this->btnWarning11->Size = System::Drawing::Size(329, 40);
			this->btnWarning11->TabIndex = 11;
			this->btnWarning11->Text = L"Warning N°0001C";
			this->btnWarning11->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning11->UseVisualStyleBackColor = false;
			// 
			// btnWarning10
			// 
			this->btnWarning10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning10->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning10->FlatAppearance->BorderSize = 0;
			this->btnWarning10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning10.Image")));
			this->btnWarning10->Location = System::Drawing::Point(0, 426);
			this->btnWarning10->Name = L"btnWarning10";
			this->btnWarning10->Size = System::Drawing::Size(329, 40);
			this->btnWarning10->TabIndex = 10;
			this->btnWarning10->Text = L"Warning N°0001C";
			this->btnWarning10->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning10->UseVisualStyleBackColor = false;
			// 
			// btnWarning9
			// 
			this->btnWarning9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning9->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning9->FlatAppearance->BorderSize = 0;
			this->btnWarning9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning9.Image")));
			this->btnWarning9->Location = System::Drawing::Point(0, 386);
			this->btnWarning9->Name = L"btnWarning9";
			this->btnWarning9->Size = System::Drawing::Size(329, 40);
			this->btnWarning9->TabIndex = 9;
			this->btnWarning9->Text = L"Warning N°0001C";
			this->btnWarning9->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning9->UseVisualStyleBackColor = false;
			// 
			// btnWarning8
			// 
			this->btnWarning8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning8->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning8->FlatAppearance->BorderSize = 0;
			this->btnWarning8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning8.Image")));
			this->btnWarning8->Location = System::Drawing::Point(0, 346);
			this->btnWarning8->Name = L"btnWarning8";
			this->btnWarning8->Size = System::Drawing::Size(329, 40);
			this->btnWarning8->TabIndex = 8;
			this->btnWarning8->Text = L"Warning N°0001C";
			this->btnWarning8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning8->UseVisualStyleBackColor = false;
			// 
			// btnWarning7
			// 
			this->btnWarning7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning7->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning7->FlatAppearance->BorderSize = 0;
			this->btnWarning7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning7.Image")));
			this->btnWarning7->Location = System::Drawing::Point(0, 306);
			this->btnWarning7->Name = L"btnWarning7";
			this->btnWarning7->Size = System::Drawing::Size(329, 40);
			this->btnWarning7->TabIndex = 7;
			this->btnWarning7->Text = L"Warning N°0001C";
			this->btnWarning7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning7->UseVisualStyleBackColor = false;
			// 
			// btnWarning6
			// 
			this->btnWarning6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning6->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning6->FlatAppearance->BorderSize = 0;
			this->btnWarning6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning6.Image")));
			this->btnWarning6->Location = System::Drawing::Point(0, 266);
			this->btnWarning6->Name = L"btnWarning6";
			this->btnWarning6->Size = System::Drawing::Size(329, 40);
			this->btnWarning6->TabIndex = 6;
			this->btnWarning6->Text = L"Warning N°0001C";
			this->btnWarning6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning6->UseVisualStyleBackColor = false;
			// 
			// btnWarning5
			// 
			this->btnWarning5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning5->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning5->FlatAppearance->BorderSize = 0;
			this->btnWarning5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning5.Image")));
			this->btnWarning5->Location = System::Drawing::Point(0, 226);
			this->btnWarning5->Name = L"btnWarning5";
			this->btnWarning5->Size = System::Drawing::Size(329, 40);
			this->btnWarning5->TabIndex = 5;
			this->btnWarning5->Text = L"Warning N°0001C";
			this->btnWarning5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning5->UseVisualStyleBackColor = false;
			// 
			// btnWarning4
			// 
			this->btnWarning4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning4->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning4->FlatAppearance->BorderSize = 0;
			this->btnWarning4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning4.Image")));
			this->btnWarning4->Location = System::Drawing::Point(0, 186);
			this->btnWarning4->Name = L"btnWarning4";
			this->btnWarning4->Size = System::Drawing::Size(329, 40);
			this->btnWarning4->TabIndex = 4;
			this->btnWarning4->Text = L"Warning N°0001C";
			this->btnWarning4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning4->UseVisualStyleBackColor = false;
			// 
			// btnWarning3
			// 
			this->btnWarning3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning3->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning3->FlatAppearance->BorderSize = 0;
			this->btnWarning3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning3.Image")));
			this->btnWarning3->Location = System::Drawing::Point(0, 146);
			this->btnWarning3->Name = L"btnWarning3";
			this->btnWarning3->Size = System::Drawing::Size(329, 40);
			this->btnWarning3->TabIndex = 3;
			this->btnWarning3->Text = L"Warning N°0001C";
			this->btnWarning3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning3->UseVisualStyleBackColor = false;
			// 
			// btnWarning2
			// 
			this->btnWarning2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning2->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning2->FlatAppearance->BorderSize = 0;
			this->btnWarning2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning2.Image")));
			this->btnWarning2->Location = System::Drawing::Point(0, 106);
			this->btnWarning2->Name = L"btnWarning2";
			this->btnWarning2->Size = System::Drawing::Size(329, 40);
			this->btnWarning2->TabIndex = 2;
			this->btnWarning2->Text = L"Warning N°0001C";
			this->btnWarning2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning2->UseVisualStyleBackColor = false;
			// 
			// btnWarning1
			// 
			this->btnWarning1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btnWarning1->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarning1->FlatAppearance->BorderSize = 0;
			this->btnWarning1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnWarning1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning1.Image")));
			this->btnWarning1->Location = System::Drawing::Point(0, 66);
			this->btnWarning1->Name = L"btnWarning1";
			this->btnWarning1->Size = System::Drawing::Size(329, 40);
			this->btnWarning1->TabIndex = 1;
			this->btnWarning1->Text = L"Warning N°0001C";
			this->btnWarning1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnWarning1->UseVisualStyleBackColor = false;
			// 
			// pnlWTitle
			// 
			this->pnlWTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pnlWTitle->Controls->Add(this->lblWarning);
			this->pnlWTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlWTitle->Location = System::Drawing::Point(0, 0);
			this->pnlWTitle->Name = L"pnlWTitle";
			this->pnlWTitle->Size = System::Drawing::Size(329, 66);
			this->pnlWTitle->TabIndex = 0;
			// 
			// lblWarning
			// 
			this->lblWarning->AutoSize = true;
			this->lblWarning->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWarning->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->lblWarning->Location = System::Drawing::Point(105, 25);
			this->lblWarning->Name = L"lblWarning";
			this->lblWarning->Size = System::Drawing::Size(125, 18);
			this->lblWarning->TabIndex = 0;
			this->lblWarning->Text = L"Point d\'Attention";
			// 
			// pnlKeyPoint
			// 
			this->pnlKeyPoint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->pnlKeyPoint->Controls->Add(this->lblNbCommandePass);
			this->pnlKeyPoint->Controls->Add(this->lblNbNewClient);
			this->pnlKeyPoint->Controls->Add(this->lblNbEmployé);
			this->pnlKeyPoint->Controls->Add(this->lblCommande);
			this->pnlKeyPoint->Controls->Add(this->lblClient);
			this->pnlKeyPoint->Controls->Add(this->lblNameEmploye);
			this->pnlKeyPoint->Controls->Add(this->picPersonnem);
			this->pnlKeyPoint->Controls->Add(this->pictureBox3);
			this->pnlKeyPoint->Controls->Add(this->picCustomer);
			this->pnlKeyPoint->Controls->Add(this->pnlTitleKeyPoint);
			this->pnlKeyPoint->Location = System::Drawing::Point(445, 19);
			this->pnlKeyPoint->Name = L"pnlKeyPoint";
			this->pnlKeyPoint->Size = System::Drawing::Size(831, 218);
			this->pnlKeyPoint->TabIndex = 1;
			// 
			// lblCommande
			// 
			this->lblCommande->AutoSize = true;
			this->lblCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCommande->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblCommande->Location = System::Drawing::Point(633, 149);
			this->lblCommande->Name = L"lblCommande";
			this->lblCommande->Size = System::Drawing::Size(181, 20);
			this->lblCommande->TabIndex = 7;
			this->lblCommande->Text = L"Commandes Passées";
			// 
			// lblClient
			// 
			this->lblClient->AutoSize = true;
			this->lblClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblClient->Location = System::Drawing::Point(338, 149);
			this->lblClient->Name = L"lblClient";
			this->lblClient->Size = System::Drawing::Size(147, 20);
			this->lblClient->TabIndex = 6;
			this->lblClient->Text = L"Nouveaux Clients";
			// 
			// lblNameEmploye
			// 
			this->lblNameEmploye->AutoSize = true;
			this->lblNameEmploye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameEmploye->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblNameEmploye->Location = System::Drawing::Point(22, 149);
			this->lblNameEmploye->Name = L"lblNameEmploye";
			this->lblNameEmploye->Size = System::Drawing::Size(158, 20);
			this->lblNameEmploye->TabIndex = 5;
			this->lblNameEmploye->Text = L"Nombre d\'Employé";
			// 
			// picPersonnem
			// 
			this->picPersonnem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPersonnem.Image")));
			this->picPersonnem->Location = System::Drawing::Point(49, 59);
			this->picPersonnem->Name = L"picPersonnem";
			this->picPersonnem->Size = System::Drawing::Size(103, 80);
			this->picPersonnem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picPersonnem->TabIndex = 4;
			this->picPersonnem->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(671, 59);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(103, 80);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// picCustomer
			// 
			this->picCustomer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picCustomer.Image")));
			this->picCustomer->Location = System::Drawing::Point(359, 59);
			this->picCustomer->Name = L"picCustomer";
			this->picCustomer->Size = System::Drawing::Size(103, 80);
			this->picCustomer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCustomer->TabIndex = 2;
			this->picCustomer->TabStop = false;
			// 
			// pnlTitleKeyPoint
			// 
			this->pnlTitleKeyPoint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pnlTitleKeyPoint->Controls->Add(this->label1);
			this->pnlTitleKeyPoint->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitleKeyPoint->Location = System::Drawing::Point(0, 0);
			this->pnlTitleKeyPoint->Name = L"pnlTitleKeyPoint";
			this->pnlTitleKeyPoint->Size = System::Drawing::Size(831, 45);
			this->pnlTitleKeyPoint->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label1->Location = System::Drawing::Point(310, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Points Clefs de la Semaine";
			// 
			// pnlWeekEarning
			// 
			this->pnlWeekEarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->pnlWeekEarning->Controls->Add(this->pictureBox1);
			this->pnlWeekEarning->Controls->Add(this->lblEarning);
			this->pnlWeekEarning->Controls->Add(this->pnlTitleWeekEarning);
			this->pnlWeekEarning->Location = System::Drawing::Point(650, 318);
			this->pnlWeekEarning->Name = L"pnlWeekEarning";
			this->pnlWeekEarning->Size = System::Drawing::Size(422, 200);
			this->pnlWeekEarning->TabIndex = 2;
			// 
			// pnlTitleWeekEarning
			// 
			this->pnlTitleWeekEarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pnlTitleWeekEarning->Controls->Add(this->label2);
			this->pnlTitleWeekEarning->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitleWeekEarning->Location = System::Drawing::Point(0, 0);
			this->pnlTitleWeekEarning->Name = L"pnlTitleWeekEarning";
			this->pnlTitleWeekEarning->Size = System::Drawing::Size(422, 45);
			this->pnlTitleWeekEarning->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label2->Location = System::Drawing::Point(125, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Revenus de la Semaine";
			// 
			// lblNbEmployé
			// 
			this->lblNbEmployé->AutoSize = true;
			this->lblNbEmployé->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNbEmployé->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->lblNbEmployé->Location = System::Drawing::Point(86, 179);
			this->lblNbEmployé->Name = L"lblNbEmployé";
			this->lblNbEmployé->Size = System::Drawing::Size(24, 16);
			this->lblNbEmployé->TabIndex = 8;
			this->lblNbEmployé->Text = L"15";
			// 
			// lblNbNewClient
			// 
			this->lblNbNewClient->AutoSize = true;
			this->lblNbNewClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNbNewClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->lblNbNewClient->Location = System::Drawing::Point(394, 179);
			this->lblNbNewClient->Name = L"lblNbNewClient";
			this->lblNbNewClient->Size = System::Drawing::Size(36, 16);
			this->lblNbNewClient->TabIndex = 9;
			this->lblNbNewClient->Text = L"+ 20";
			// 
			// lblNbCommandePass
			// 
			this->lblNbCommandePass->AutoSize = true;
			this->lblNbCommandePass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNbCommandePass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->lblNbCommandePass->Location = System::Drawing::Point(703, 179);
			this->lblNbCommandePass->Name = L"lblNbCommandePass";
			this->lblNbCommandePass->Size = System::Drawing::Size(36, 16);
			this->lblNbCommandePass->TabIndex = 10;
			this->lblNbCommandePass->Text = L"+ 20";
			// 
			// lblEarning
			// 
			this->lblEarning->AutoSize = true;
			this->lblEarning->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEarning->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->lblEarning->Location = System::Drawing::Point(201, 122);
			this->lblEarning->Name = L"lblEarning";
			this->lblEarning->Size = System::Drawing::Size(144, 38);
			this->lblEarning->TabIndex = 1;
			this->lblEarning->Text = L"+ 1500 €";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// TableauBord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1294, 635);
			this->Controls->Add(this->pnlWeekEarning);
			this->Controls->Add(this->pnlKeyPoint);
			this->Controls->Add(this->pnlWarning);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TableauBord";
			this->Text = L"TableauBord";
			this->Load += gcnew System::EventHandler(this, &TableauBord::TableauBord_Load);
			this->pnlWarning->ResumeLayout(false);
			this->pnlWTitle->ResumeLayout(false);
			this->pnlWTitle->PerformLayout();
			this->pnlKeyPoint->ResumeLayout(false);
			this->pnlKeyPoint->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPersonnem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCustomer))->EndInit();
			this->pnlTitleKeyPoint->ResumeLayout(false);
			this->pnlTitleKeyPoint->PerformLayout();
			this->pnlWeekEarning->ResumeLayout(false);
			this->pnlWeekEarning->PerformLayout();
			this->pnlTitleWeekEarning->ResumeLayout(false);
			this->pnlTitleWeekEarning->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TableauBord_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
};
}
