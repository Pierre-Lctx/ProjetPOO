#pragma once

#include "TableauBord.h"
#include "Stats.h"
#include "MyProfile1.h"
#include "Personnel.h"
#include "Controleur.h"
#include "Client.h"
#include "MyProfile1.h"

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{



	private: 
		Point PanelMouseDownLocation;
		Controleur^ C = gcnew Controleur();
	
	

	private:
		void startUI(Form^ frm)
		{
			this->pnlNav->Height = btnTableauBord->Height;
			this->pnlNav->Top = btnTableauBord->Top;
			this->btnTableauBord->BackColor = Color::FromArgb(46, 51, 73);
			C->openChildForm(frm, pnlFormShow);
			this->lblActiveForm->Text = "Tableau de bord";

		}
	public:
		MyForm(void)
		{

			InitializeComponent();
			startUI(gcnew AppliProjetPOO::TableauBord );

			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ btnTableauBord;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ pnlFormShow;

	private: System::Windows::Forms::Button^ btnOption;

	private: System::Windows::Forms::Button^ btnStat;

	private: System::Windows::Forms::Button^ btnCommande;


	private: System::Windows::Forms::Button^ btnClient;

	private: System::Windows::Forms::Button^ btnStock;

	private: System::Windows::Forms::Button^ btnPerso;
	private: System::Windows::Forms::Panel^ pnlNav;
	private: System::Windows::Forms::Label^ lblActiveForm;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlDrag1;
	private: System::Windows::Forms::Panel^ pnlDrag2;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlNav = (gcnew System::Windows::Forms::Panel());
			this->btnOption = (gcnew System::Windows::Forms::Button());
			this->btnStat = (gcnew System::Windows::Forms::Button());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnPerso = (gcnew System::Windows::Forms::Button());
			this->btnTableauBord = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pnlDrag2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pnlDrag1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblActiveForm = (gcnew System::Windows::Forms::Label());
			this->pnlFormShow = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->pnlDrag1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->pnlNav);
			this->panel1->Controls->Add(this->btnOption);
			this->panel1->Controls->Add(this->btnStat);
			this->panel1->Controls->Add(this->btnCommande);
			this->panel1->Controls->Add(this->btnClient);
			this->panel1->Controls->Add(this->btnStock);
			this->panel1->Controls->Add(this->btnPerso);
			this->panel1->Controls->Add(this->btnTableauBord);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 720);
			this->panel1->TabIndex = 0;
			// 
			// pnlNav
			// 
			this->pnlNav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->pnlNav->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlNav->Location = System::Drawing::Point(0, 193);
			this->pnlNav->Name = L"pnlNav";
			this->pnlNav->Size = System::Drawing::Size(4, 100);
			this->pnlNav->TabIndex = 0;
			// 
			// btnOption
			// 
			this->btnOption->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnOption->FlatAppearance->BorderSize = 0;
			this->btnOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOption->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnOption->Location = System::Drawing::Point(0, 678);
			this->btnOption->Name = L"btnOption";
			this->btnOption->Size = System::Drawing::Size(186, 42);
			this->btnOption->TabIndex = 8;
			this->btnOption->Text = L"Options";
			this->btnOption->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnOption->UseVisualStyleBackColor = true;
			this->btnOption->Click += gcnew System::EventHandler(this, &MyForm::btnOption_Click);
			this->btnOption->Leave += gcnew System::EventHandler(this, &MyForm::btnOption_Leave);
			this->btnOption->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\Settings.png")));
			// 
			// btnStat
			// 
			this->btnStat->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStat->FlatAppearance->BorderSize = 0;
			this->btnStat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnStat->Location = System::Drawing::Point(0, 354);
			this->btnStat->Name = L"btnStat";
			this->btnStat->Size = System::Drawing::Size(186, 42);
			this->btnStat->TabIndex = 7;
			this->btnStat->Text = L"Statistiques";
			this->btnStat->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStat->UseVisualStyleBackColor = true;
			this->btnStat->Click += gcnew System::EventHandler(this, &MyForm::btnStat_Click);
			this->btnStat->Leave += gcnew System::EventHandler(this, &MyForm::btnStat_Leave);
			this->btnStat->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\stats.png")));
			// 
			// btnCommande
			// 
			this->btnCommande->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCommande->FlatAppearance->BorderSize = 0;
			this->btnCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCommande->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnCommande->Location = System::Drawing::Point(0, 312);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Size = System::Drawing::Size(186, 42);
			this->btnCommande->TabIndex = 6;
			this->btnCommande->Text = L"Commandes";
			this->btnCommande->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCommande->UseVisualStyleBackColor = true;
			this->btnCommande->Click += gcnew System::EventHandler(this, &MyForm::btnCommande_Click);
			this->btnCommande->Leave += gcnew System::EventHandler(this, &MyForm::btnCommande_Leave);
			this->btnCommande->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\commande.png")));
			// 
			// btnClient
			// 
			this->btnClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnClient->FlatAppearance->BorderSize = 0;
			this->btnClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnClient->Location = System::Drawing::Point(0, 270);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(186, 42);
			this->btnClient->TabIndex = 5;
			this->btnClient->Text = L"Clients";
			this->btnClient->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MyForm::btnClient_Click);
			this->btnClient->Leave += gcnew System::EventHandler(this, &MyForm::btnClient_Leave);
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\client.png")));
			// 
			// btnStock
			// 
			this->btnStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStock->FlatAppearance->BorderSize = 0;
			this->btnStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnStock->Location = System::Drawing::Point(0, 228);
			this->btnStock->Name = L"btnStock";
			this->btnStock->Size = System::Drawing::Size(186, 42);
			this->btnStock->TabIndex = 4;
			this->btnStock->Text = L"Stocks";
			this->btnStock->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStock->UseVisualStyleBackColor = true;
			this->btnStock->Click += gcnew System::EventHandler(this, &MyForm::btnStock_Click);
			this->btnStock->Leave += gcnew System::EventHandler(this, &MyForm::btnStock_Leave);
			this->btnStock->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\Stock.png")));
			// 
			// btnPerso
			// 
			this->btnPerso->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPerso->FlatAppearance->BorderSize = 0;
			this->btnPerso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPerso->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPerso->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnPerso->Location = System::Drawing::Point(0, 186);
			this->btnPerso->Name = L"btnPerso";
			this->btnPerso->Size = System::Drawing::Size(186, 42);
			this->btnPerso->TabIndex = 3;
			this->btnPerso->Text = L"Personnel";
			this->btnPerso->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPerso->UseVisualStyleBackColor = true;
			this->btnPerso->Click += gcnew System::EventHandler(this, &MyForm::btnPerso_Click);
			this->btnPerso->Leave += gcnew System::EventHandler(this, &MyForm::btnPerso_Leave);
			this->btnPerso->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\personnel.png")));
			// 
			// btnTableauBord
			// 
			this->btnTableauBord->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTableauBord->FlatAppearance->BorderSize = 0;
			this->btnTableauBord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTableauBord->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTableauBord->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnTableauBord->Location = System::Drawing::Point(0, 144);
			this->btnTableauBord->Name = L"btnTableauBord";
			this->btnTableauBord->Size = System::Drawing::Size(186, 42);
			this->btnTableauBord->TabIndex = 2;
			this->btnTableauBord->Text = L"Tableau de bord";
			this->btnTableauBord->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnTableauBord->UseVisualStyleBackColor = true;
			this->btnTableauBord->Click += gcnew System::EventHandler(this, &MyForm::btnTableauBord_Click);
			this->btnTableauBord->Leave += gcnew System::EventHandler(this, &MyForm::btnTableauBord_Leave);
			this->btnTableauBord->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\Home.png")));
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pnlDrag2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 144);
			this->panel2->TabIndex = 1;
			// 
			// pnlDrag2
			// 
			this->pnlDrag2->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlDrag2->Location = System::Drawing::Point(0, 0);
			this->pnlDrag2->Name = L"pnlDrag2";
			this->pnlDrag2->Size = System::Drawing::Size(186, 26);
			this->pnlDrag2->TabIndex = 0;
			this->pnlDrag2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pnlDrag2_MouseDown);
			this->pnlDrag2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pnlDrag2_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label1->Location = System::Drawing::Point(27, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom d\'utilisateur";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(59, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(Image::FromFile("resources\\user.png")));
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pnlDrag1);
			this->panel3->Controls->Add(this->lblActiveForm);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(186, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1294, 85);
			this->panel3->TabIndex = 1;
			// 
			// pnlDrag1
			// 
			this->pnlDrag1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pnlDrag1->Controls->Add(this->btnExit);
			this->pnlDrag1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlDrag1->Location = System::Drawing::Point(0, 0);
			this->pnlDrag1->Name = L"pnlDrag1";
			this->pnlDrag1->Size = System::Drawing::Size(1294, 26);
			this->pnlDrag1->TabIndex = 1;
			this->pnlDrag1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pnlDrag1_MouseDown);
			this->pnlDrag1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pnlDrag1_MouseMove);
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnExit->Location = System::Drawing::Point(1259, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(35, 26);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			this->btnExit->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnExit_MouseLeave);
			this->btnExit->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btnExit_MouseMove);
			// 
			// lblActiveForm
			// 
			this->lblActiveForm->AutoSize = true;
			this->lblActiveForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblActiveForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->lblActiveForm->Location = System::Drawing::Point(6, 41);
			this->lblActiveForm->Name = L"lblActiveForm";
			this->lblActiveForm->Size = System::Drawing::Size(201, 32);
			this->lblActiveForm->TabIndex = 0;
			this->lblActiveForm->Text = L"lblActiveForm";
			// 
			// pnlFormShow
			// 
			this->pnlFormShow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlFormShow->Location = System::Drawing::Point(186, 85);
			this->pnlFormShow->Name = L"pnlFormShow";
			this->pnlFormShow->Size = System::Drawing::Size(1294, 635);
			this->pnlFormShow->TabIndex = 2;
			this->pnlFormShow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlFormShow_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1480, 720);
			this->Controls->Add(this->pnlFormShow);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->pnlDrag1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region ButtonNavigation

	//Bouton du menu avec Animation et redirection
	private: System::Void btnTableauBord_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnTableauBord->Height;
		pnlNav->Top = btnTableauBord->Top;
		pnlNav->Left = btnTableauBord->Left;
		btnTableauBord->BackColor = Color::FromArgb(46, 51, 73);
		C->openChildForm(gcnew AppliProjetPOO::TableauBord, pnlFormShow);
		this->lblActiveForm->Text = "Tableau de bord";

	}

	private: System::Void btnPerso_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnPerso->Height;
		pnlNav->Top = btnPerso->Top;
		btnPerso->BackColor = Color::FromArgb(46, 51, 73);
		C->openChildForm(gcnew AppliProjetPOO::Personnel, pnlFormShow);
		this->lblActiveForm->Text = "Gerer le Personnel";
	}

	private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnStock->Height;
		pnlNav->Top = btnStock->Top;
		btnStock->BackColor = Color::FromArgb(46, 51, 73);
	}
	private: System::Void btnClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnClient->Height;
		pnlNav->Top = btnClient->Top;
		btnClient->BackColor = Color::FromArgb(46, 51, 73);
		C->openChildForm(gcnew AppliProjetPOO::Client, pnlFormShow);
		this->lblActiveForm->Text = "G�rer les clients";
	}
	private: System::Void btnCommande_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnCommande->Height;
		pnlNav->Top = btnCommande->Top;
		btnCommande->BackColor = Color::FromArgb(46, 51, 73);
	}
	private: System::Void btnStat_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlNav->Height = btnStat->Height;
		pnlNav->Top = btnStat->Top;
		btnStat->BackColor = Color::FromArgb(46, 51, 73);
		C->openChildForm(gcnew AppliProjetPOO::Stats, pnlFormShow);
		this->lblActiveForm->Text = "Statistiques";
	}
	private: System::Void btnOption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnOption->Height;
		pnlNav->Top = btnOption->Top;
		btnOption->BackColor = Color::FromArgb(46, 51, 73);
	}
	private: System::Void btnTableauBord_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnTableauBord->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnPerso_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnPerso->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnStock_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnStock->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnClient_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnClient->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnCommande_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnCommande->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnStat_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		btnStat->BackColor = Color::FromArgb(24, 30, 54);
	}
	private: System::Void btnOption_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		btnStat->BackColor = Color::FromArgb(24, 30, 54);
	}

	//picture Click pour acceder au form MyProfile
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		C->openChildForm(gcnew AppliProjetPOO::MyProfile, pnlFormShow);
		lblActiveForm->Text = "Mon Profil";
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pnlFormShow_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	//Bouton Exit pour fermer toute l'application
	private: System::Void btnExit_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->btnExit->BackColor = Color::FromArgb(223, 55, 55);
		this->btnExit->ForeColor = Color::FromArgb(255, 255, 255);
	}
	private: System::Void btnExit_MouseLeave(System::Object^ sender, System::EventArgs^ e)
	{
		this->btnExit->BackColor = Color::FromArgb(24, 30, 54);
		this->btnExit->ForeColor = Color::FromArgb(147, 83, 221);
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
			   Application::Exit();
	}
#pragma endregion

	
#pragma region DragForm

private: void dragFormMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
		PanelMouseDownLocation = e->Location;
}
	private: void dragFormMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			MyForm::Left += e->X - PanelMouseDownLocation.X;
			MyForm::Top += e->Y - PanelMouseDownLocation.Y;
		}
	}

private: System::Void pnlDrag1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	dragFormMouseDown(sender, e);
}
private: System::Void pnlDrag1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	dragFormMouseMove(sender, e);
}
private: System::Void pnlDrag2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	dragFormMouseDown(sender, e);
}
private: System::Void pnlDrag2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	dragFormMouseMove(sender, e);
}
#pragma endregion



};
}
