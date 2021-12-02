#pragma once
#include "Connection.h"
#include <list>

namespace AppliProjetPOO 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace connection;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	private:
		   int nbLigneDGV;
	private: void hideAllDG()
	{
		dgvStat->Columns["prixHT"]->Visible = false;
		dgvStat->Columns["TVA"]->Visible = false;
		dgvStat->Columns["margeCommerciale"]->Visible = false;
		dgvStat->Columns["remiseCommerciale"]->Visible = false;
		dgvStat->Columns["demarqueInconnu"]->Visible = false;
		dgvStat->Columns["nomArticle"]->Visible = false;
		dgvStat->Columns["natureArticle"]->Visible = false;
		dgvStat->Columns["couleurArticle"]->Visible = false;
		dgvStat->Columns["stockArticle"]->Visible = false;
		
		
	}
	private: void hideAllLblInfo()
	{
		this->graphSimulation->Visible = false;
		this->lblValueInfo->Visible = false;
		this->lblTitleInfo->Visible = false;
		this->lblNonGraph->Visible = false;
	}

	private:
		DateTime^ prevDate = gcnew DateTime(0001, 1, 1, 1, 01, 01);
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ natureArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ couleurArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stockArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prixHT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ margeCommerciale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remiseCommerciale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ demarqueInconnu;

	public: Connect^ conn;

	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ cbArticle;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblValueInfo;
	private: System::Windows::Forms::Label^ lblTitleInfo;
	private: System::Windows::Forms::Label^ lblNonGraph;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ graphSimulation;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dgvStat;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnPrixMoyen;
	private: System::Windows::Forms::Button^ btnArticleReapro;
	private: System::Windows::Forms::Button^ btnChiffreAffaire;
	private: System::Windows::Forms::ComboBox^ cbMois;
	private: System::Windows::Forms::Label^ lblTVA;
	private: System::Windows::Forms::Button^ btnValeurAchatStock;
	private: System::Windows::Forms::Button^ btnValeurStock;
	private: System::Windows::Forms::Button^ btnMoins10Article;
	private: System::Windows::Forms::Button^ btnPlus10Article;
	private: System::Windows::Forms::ComboBox^ cbIDClient;
	private: System::Windows::Forms::Button^ btnTotalClientPrix;
	private: System::Windows::Forms::ComboBox^ cbAnnee;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLoad;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::ComboBox^ cbDemarche;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbRemise;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbMarge;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbTVA;

	private: System::Windows::Forms::Label^ label3;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->graphSimulation = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lblNonGraph = (gcnew System::Windows::Forms::Label());
			this->lblValueInfo = (gcnew System::Windows::Forms::Label());
			this->lblTitleInfo = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dgvStat = (gcnew System::Windows::Forms::DataGridView());
			this->nomArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->natureArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->couleurArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stockArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prixHT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->margeCommerciale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remiseCommerciale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->demarqueInconnu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnValeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->btnValeurStock = (gcnew System::Windows::Forms::Button());
			this->btnMoins10Article = (gcnew System::Windows::Forms::Button());
			this->btnPlus10Article = (gcnew System::Windows::Forms::Button());
			this->cbIDClient = (gcnew System::Windows::Forms::ComboBox());
			this->btnTotalClientPrix = (gcnew System::Windows::Forms::Button());
			this->cbAnnee = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbMois = (gcnew System::Windows::Forms::ComboBox());
			this->btnArticleReapro = (gcnew System::Windows::Forms::Button());
			this->btnChiffreAffaire = (gcnew System::Windows::Forms::Button());
			this->btnPrixMoyen = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->cbArticle = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->cbDemarche = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbRemise = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbMarge = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbTVA = (gcnew System::Windows::Forms::ComboBox());
			this->lblTVA = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphSimulation))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStat))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->panel1->Controls->Add(this->graphSimulation);
			this->panel1->Controls->Add(this->lblNonGraph);
			this->panel1->Controls->Add(this->lblValueInfo);
			this->panel1->Controls->Add(this->lblTitleInfo);
			this->panel1->Location = System::Drawing::Point(144, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1006, 267);
			this->panel1->TabIndex = 0;
			// 
			// graphSimulation
			// 
			this->graphSimulation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea1->BorderColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->graphSimulation->ChartAreas->Add(chartArea1);
			this->graphSimulation->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->HeaderSeparatorColor = System::Drawing::Color::White;
			legend1->ItemColumnSeparatorColor = System::Drawing::Color::White;
			legend1->Name = L"Legend1";
			legend1->TitleBackColor = System::Drawing::Color::White;
			legend1->TitleForeColor = System::Drawing::Color::White;
			legend1->TitleSeparatorColor = System::Drawing::Color::White;
			this->graphSimulation->Legends->Add(legend1);
			this->graphSimulation->Location = System::Drawing::Point(0, 0);
			this->graphSimulation->Name = L"graphSimulation";
			this->graphSimulation->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Prix du stock De l\'article d\'après la simultation";
			this->graphSimulation->Series->Add(series1);
			this->graphSimulation->Size = System::Drawing::Size(1006, 267);
			this->graphSimulation->TabIndex = 0;
			//Couleurs sur l'Axe X
			this->graphSimulation->ChartAreas[0]->AxisX->LineColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisX->MajorGrid->LineColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisX->InterlacedColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisX->LabelStyle->ForeColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisX->MajorTickMark->LineColor = Color::White;

			//Couleurs sur l'Axe Y
			this->graphSimulation->ChartAreas[0]->AxisY->LineColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisY->InterlacedColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisY->MajorGrid->LineColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisY->LabelStyle->ForeColor = Color::White;
			this->graphSimulation->ChartAreas[0]->AxisY->MajorTickMark->LineColor = Color::White;
			// 
			// lblNonGraph
			// 
			this->lblNonGraph->AutoSize = true;
			this->lblNonGraph->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNonGraph->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->lblNonGraph->Location = System::Drawing::Point(391, 135);
			this->lblNonGraph->Name = L"lblNonGraph";
			this->lblNonGraph->Size = System::Drawing::Size(212, 20);
			this->lblNonGraph->TabIndex = 2;
			this->lblNonGraph->Text = L"Aucun Graphique Disponible";
			// 
			// lblValueInfo
			// 
			this->lblValueInfo->AutoSize = true;
			this->lblValueInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValueInfo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->lblValueInfo->Location = System::Drawing::Point(440, 116);
			this->lblValueInfo->Name = L"lblValueInfo";
			this->lblValueInfo->Size = System::Drawing::Size(102, 37);
			this->lblValueInfo->TabIndex = 1;
			this->lblValueInfo->Text = L"label8";
			// 
			// lblTitleInfo
			// 
			this->lblTitleInfo->AutoSize = true;
			this->lblTitleInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleInfo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->lblTitleInfo->Location = System::Drawing::Point(33, 26);
			this->lblTitleInfo->Name = L"lblTitleInfo";
			this->lblTitleInfo->Size = System::Drawing::Size(102, 37);
			this->lblTitleInfo->TabIndex = 0;
			this->lblTitleInfo->Text = L"label7";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dgvStat);
			this->panel2->Location = System::Drawing::Point(560, 285);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 333);
			this->panel2->TabIndex = 1;
			// 
			// dgvStat
			// 
			this->dgvStat->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->dgvStat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStat->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->nomArticle, this->natureArticle,
					this->couleurArticle, this->stockArticle, this->prixHT, this->TVA, this->margeCommerciale, this->remiseCommerciale, this->demarqueInconnu
			});
			this->dgvStat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvStat->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dgvStat->Location = System::Drawing::Point(0, 0);
			this->dgvStat->Name = L"dgvStat";
			this->dgvStat->Size = System::Drawing::Size(722, 333);
			this->dgvStat->TabIndex = 0;
			// 
			// nomArticle
			// 
			this->nomArticle->HeaderText = L"Article";
			this->nomArticle->Name = L"nomArticle";
			this->nomArticle->ReadOnly = true;
			// 
			// natureArticle
			// 
			this->natureArticle->HeaderText = L"Nature Article";
			this->natureArticle->Name = L"natureArticle";
			this->natureArticle->ReadOnly = true;
			// 
			// couleurArticle
			// 
			this->couleurArticle->HeaderText = L"Couleur Article";
			this->couleurArticle->Name = L"couleurArticle";
			this->couleurArticle->ReadOnly = true;
			// 
			// stockArticle
			// 
			this->stockArticle->HeaderText = L"Quantité";
			this->stockArticle->Name = L"stockArticle";
			this->stockArticle->ReadOnly = true;
			// 
			// prixHT
			// 
			this->prixHT->HeaderText = L"Prix HT";
			this->prixHT->Name = L"prixHT";
			this->prixHT->ReadOnly = true;
			// 
			// TVA
			// 
			this->TVA->HeaderText = L"TVA";
			this->TVA->Name = L"TVA";
			this->TVA->ReadOnly = true;
			// 
			// margeCommerciale
			// 
			this->margeCommerciale->HeaderText = L"Marge Commerciale";
			this->margeCommerciale->Name = L"margeCommerciale";
			this->margeCommerciale->ReadOnly = true;
			// 
			// remiseCommerciale
			// 
			this->remiseCommerciale->HeaderText = L"Remise Commerciale";
			this->remiseCommerciale->Name = L"remiseCommerciale";
			this->remiseCommerciale->ReadOnly = true;
			// 
			// demarqueInconnu
			// 
			this->demarqueInconnu->HeaderText = L"Demarque Inconnu";
			this->demarqueInconnu->Name = L"demarqueInconnu";
			this->demarqueInconnu->ReadOnly = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->panel3->Controls->Add(this->btnValeurAchatStock);
			this->panel3->Controls->Add(this->btnValeurStock);
			this->panel3->Controls->Add(this->btnMoins10Article);
			this->panel3->Controls->Add(this->btnPlus10Article);
			this->panel3->Controls->Add(this->cbIDClient);
			this->panel3->Controls->Add(this->btnTotalClientPrix);
			this->panel3->Controls->Add(this->cbAnnee);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->cbMois);
			this->panel3->Controls->Add(this->btnArticleReapro);
			this->panel3->Controls->Add(this->btnChiffreAffaire);
			this->panel3->Controls->Add(this->btnPrixMoyen);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 285);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(542, 333);
			this->panel3->TabIndex = 2;
			// 
			// btnValeurAchatStock
			// 
			this->btnValeurAchatStock->FlatAppearance->BorderSize = 0;
			this->btnValeurAchatStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValeurAchatStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValeurAchatStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnValeurAchatStock->Location = System::Drawing::Point(274, 167);
			this->btnValeurAchatStock->Name = L"btnValeurAchatStock";
			this->btnValeurAchatStock->Size = System::Drawing::Size(208, 23);
			this->btnValeurAchatStock->TabIndex = 14;
			this->btnValeurAchatStock->Text = L"Valeur d\'Achat du Stock";
			this->btnValeurAchatStock->UseVisualStyleBackColor = true;
			this->btnValeurAchatStock->Click += gcnew System::EventHandler(this, &Stats::btnValeurAchatStock_Click);
			// 
			// btnValeurStock
			// 
			this->btnValeurStock->FlatAppearance->BorderSize = 0;
			this->btnValeurStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValeurStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValeurStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnValeurStock->Location = System::Drawing::Point(274, 132);
			this->btnValeurStock->Name = L"btnValeurStock";
			this->btnValeurStock->Size = System::Drawing::Size(208, 23);
			this->btnValeurStock->TabIndex = 13;
			this->btnValeurStock->Text = L"Valeur Commerciale du Stock";
			this->btnValeurStock->UseVisualStyleBackColor = true;
			this->btnValeurStock->Click += gcnew System::EventHandler(this, &Stats::btnValeurStock_Click);
			// 
			// btnMoins10Article
			// 
			this->btnMoins10Article->FlatAppearance->BorderSize = 0;
			this->btnMoins10Article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMoins10Article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMoins10Article->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnMoins10Article->Location = System::Drawing::Point(3, 167);
			this->btnMoins10Article->Name = L"btnMoins10Article";
			this->btnMoins10Article->Size = System::Drawing::Size(234, 23);
			this->btnMoins10Article->TabIndex = 12;
			this->btnMoins10Article->Text = L"Les 10 Articles les Moins Vendus";
			this->btnMoins10Article->UseVisualStyleBackColor = true;
			this->btnMoins10Article->Click += gcnew System::EventHandler(this, &Stats::btnMoins10Article_Click);
			// 
			// btnPlus10Article
			// 
			this->btnPlus10Article->FlatAppearance->BorderSize = 0;
			this->btnPlus10Article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlus10Article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus10Article->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnPlus10Article->Location = System::Drawing::Point(3, 134);
			this->btnPlus10Article->Name = L"btnPlus10Article";
			this->btnPlus10Article->Size = System::Drawing::Size(234, 23);
			this->btnPlus10Article->TabIndex = 11;
			this->btnPlus10Article->Text = L"Les 10 Articles les Plus Vendus";
			this->btnPlus10Article->UseVisualStyleBackColor = true;
			this->btnPlus10Article->Click += gcnew System::EventHandler(this, &Stats::btnPlus10Article_Click);
			// 
			// cbIDClient
			// 
			this->cbIDClient->FormattingEnabled = true;
			this->cbIDClient->Location = System::Drawing::Point(227, 105);
			this->cbIDClient->Name = L"cbIDClient";
			this->cbIDClient->Size = System::Drawing::Size(56, 21);
			this->cbIDClient->TabIndex = 10;
			// 
			// btnTotalClientPrix
			// 
			this->btnTotalClientPrix->FlatAppearance->BorderSize = 0;
			this->btnTotalClientPrix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTotalClientPrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotalClientPrix->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnTotalClientPrix->Location = System::Drawing::Point(18, 105);
			this->btnTotalClientPrix->Name = L"btnTotalClientPrix";
			this->btnTotalClientPrix->Size = System::Drawing::Size(203, 23);
			this->btnTotalClientPrix->TabIndex = 9;
			this->btnTotalClientPrix->Text = L"Paiement Total pour le Client";
			this->btnTotalClientPrix->UseVisualStyleBackColor = true;
			this->btnTotalClientPrix->Click += gcnew System::EventHandler(this, &Stats::btnTotalClientPrix_Click);
			// 
			// cbAnnee
			// 
			this->cbAnnee->FormattingEnabled = true;
			this->cbAnnee->Location = System::Drawing::Point(289, 50);
			this->cbAnnee->Name = L"cbAnnee";
			this->cbAnnee->Size = System::Drawing::Size(70, 21);
			this->cbAnnee->TabIndex = 8;
			this->cbAnnee->Text = L"annee";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label1->Location = System::Drawing::Point(271, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"-";
			// 
			// cbMois
			// 
			this->cbMois->FormattingEnabled = true;
			this->cbMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08",
					L"09", L"10", L"11", L"12"
			});
			this->cbMois->Location = System::Drawing::Point(216, 50);
			this->cbMois->Name = L"cbMois";
			this->cbMois->Size = System::Drawing::Size(49, 21);
			this->cbMois->TabIndex = 6;
			this->cbMois->Text = L"mois";
			// 
			// btnArticleReapro
			// 
			this->btnArticleReapro->FlatAppearance->BorderSize = 0;
			this->btnArticleReapro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnArticleReapro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArticleReapro->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnArticleReapro->Location = System::Drawing::Point(18, 76);
			this->btnArticleReapro->Name = L"btnArticleReapro";
			this->btnArticleReapro->Size = System::Drawing::Size(192, 23);
			this->btnArticleReapro->TabIndex = 3;
			this->btnArticleReapro->Text = L"Articles à Réaprovisionner";
			this->btnArticleReapro->UseVisualStyleBackColor = true;
			this->btnArticleReapro->Click += gcnew System::EventHandler(this, &Stats::btnArticleReapro_Click);
			// 
			// btnChiffreAffaire
			// 
			this->btnChiffreAffaire->FlatAppearance->BorderSize = 0;
			this->btnChiffreAffaire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChiffreAffaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChiffreAffaire->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnChiffreAffaire->Location = System::Drawing::Point(18, 47);
			this->btnChiffreAffaire->Name = L"btnChiffreAffaire";
			this->btnChiffreAffaire->Size = System::Drawing::Size(175, 23);
			this->btnChiffreAffaire->TabIndex = 2;
			this->btnChiffreAffaire->Text = L"Chiffre d\'Affaire par mois";
			this->btnChiffreAffaire->UseVisualStyleBackColor = true;
			this->btnChiffreAffaire->Click += gcnew System::EventHandler(this, &Stats::btnChiffreAffaire_Click);
			// 
			// btnPrixMoyen
			// 
			this->btnPrixMoyen->FlatAppearance->BorderSize = 0;
			this->btnPrixMoyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrixMoyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrixMoyen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->btnPrixMoyen->Location = System::Drawing::Point(25, 18);
			this->btnPrixMoyen->Name = L"btnPrixMoyen";
			this->btnPrixMoyen->Size = System::Drawing::Size(168, 23);
			this->btnPrixMoyen->TabIndex = 1;
			this->btnPrixMoyen->Text = L"Prix d\'un Panier Moyen";
			this->btnPrixMoyen->UseVisualStyleBackColor = true;
			this->btnPrixMoyen->Click += gcnew System::EventHandler(this, &Stats::btnPrixMoyen_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->cbArticle);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->btnLoad);
			this->panel4->Controls->Add(this->btnClear);
			this->panel4->Controls->Add(this->cbDemarche);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->cbRemise);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->cbMarge);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->cbTVA);
			this->panel4->Controls->Add(this->lblTVA);
			this->panel4->Location = System::Drawing::Point(3, 196);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(539, 134);
			this->panel4->TabIndex = 0;
			// 
			// cbArticle
			// 
			this->cbArticle->FormattingEnabled = true;
			this->cbArticle->Location = System::Drawing::Point(79, 11);
			this->cbArticle->Name = L"cbArticle";
			this->cbArticle->Size = System::Drawing::Size(266, 21);
			this->cbArticle->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label6->Location = System::Drawing::Point(18, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 15);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Article :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label3->Location = System::Drawing::Point(357, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 20);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Faire une Simulation";
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(270, 106);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 24;
			this->btnLoad->Text = L"Ajouter";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &Stats::btnLoad_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(158, 106);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 23;
			this->btnClear->Text = L"Vider";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Stats::btnClear_Click);
			// 
			// cbDemarche
			// 
			this->cbDemarche->FormattingEnabled = true;
			this->cbDemarche->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"3%", L"2%" });
			this->cbDemarche->Location = System::Drawing::Point(395, 77);
			this->cbDemarche->Name = L"cbDemarche";
			this->cbDemarche->Size = System::Drawing::Size(43, 21);
			this->cbDemarche->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label5->Location = System::Drawing::Point(249, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 15);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Demarche Inconnu : ";
			// 
			// cbRemise
			// 
			this->cbRemise->FormattingEnabled = true;
			this->cbRemise->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"6%", L"5%" });
			this->cbRemise->Location = System::Drawing::Point(178, 71);
			this->cbRemise->Name = L"cbRemise";
			this->cbRemise->Size = System::Drawing::Size(43, 21);
			this->cbRemise->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label4->Location = System::Drawing::Point(11, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 15);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Remise Commerciale  : ";
			// 
			// cbMarge
			// 
			this->cbMarge->FormattingEnabled = true;
			this->cbMarge->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"15%", L"10%", L"5%" });
			this->cbMarge->Location = System::Drawing::Point(408, 47);
			this->cbMarge->Name = L"cbMarge";
			this->cbMarge->Size = System::Drawing::Size(43, 21);
			this->cbMarge->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label2->Location = System::Drawing::Point(249, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Marge Commerciale  : ";
			// 
			// cbTVA
			// 
			this->cbTVA->FormattingEnabled = true;
			this->cbTVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"20%", L"10%", L"5,5%" });
			this->cbTVA->Location = System::Drawing::Point(78, 42);
			this->cbTVA->Name = L"cbTVA";
			this->cbTVA->Size = System::Drawing::Size(43, 21);
			this->cbTVA->TabIndex = 16;
			// 
			// lblTVA
			// 
			this->lblTVA->AutoSize = true;
			this->lblTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->lblTVA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTVA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->lblTVA->Location = System::Drawing::Point(18, 48);
			this->lblTVA->Name = L"lblTVA";
			this->lblTVA->Size = System::Drawing::Size(43, 15);
			this->lblTVA->TabIndex = 15;
			this->lblTVA->Text = L"TVA : ";
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1294, 635);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Stats";
			this->Text = L"Stats";
			this->Load += gcnew System::EventHandler(this, &Stats::Stats_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphSimulation))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStat))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Stats_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		hideAllDG();
		dgvStat->Rows->Clear();
		graphSimulation->Series[0]->Points->Clear();
		hideAllLblInfo();
		this->lblNonGraph->Visible = true;

		String^ rqtYear = "SELECT DATE_COMMANDE From Commande";

		SqlCommand^ cmdYear = gcnew SqlCommand(rqtYear, conn->getConn());

		conn->openConnection();

		SqlDataReader^ drYear = cmdYear->ExecuteReader();

		while (drYear->Read())
		{
			DateTime^ addDate = drYear->GetDateTime(0);

			if (addDate->Year != prevDate->Year)
				cbAnnee->Items->Add(addDate->Year);

			prevDate = addDate;
		}

		drYear->Close();

		String^ rqtIdClient = "SELECT ID_CLIENT From Client";

		SqlCommand^ cmdIdClient = gcnew SqlCommand(rqtIdClient, conn->getConn());

		SqlDataReader^ drIdClient = cmdIdClient->ExecuteReader();

		while (drIdClient->Read())
		{
			cbIDClient->Items->Add(drIdClient->GetInt32(0));
		}

		drIdClient->Close();

		String^ rqtArticle = "SELECT NOM_ARTICLE From Article";

		SqlCommand^ cmdArticle = gcnew SqlCommand(rqtArticle, conn->getConn());

		SqlDataReader^ drArticle = cmdArticle->ExecuteReader();

		while (drArticle->Read())
		{
			cbArticle->Items->Add(drArticle->GetString(0));
		}

		drArticle->Close();

		conn->closeConnection();
	}



private: System::Void btnPrixMoyen_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	this->graphSimulation->Visible = false;
	this->lblNonGraph->Visible = false;
	this->lblTitleInfo->Visible = true;
	this->lblTitleInfo->Text = this->btnPrixMoyen->Text + " :";
	this->lblValueInfo->Visible = true;
	

	String^ rqtPrixMoyen = "select avg(MONTANT_TTC) from Paiement";

	SqlCommand^ cmdPrixMoyen = gcnew SqlCommand(rqtPrixMoyen, conn->getConn());

	conn->openConnection();

	SqlDataReader^ drPrixMoyen = cmdPrixMoyen->ExecuteReader();

	if (drPrixMoyen->Read())
	{
		lblValueInfo->Text = drPrixMoyen->GetDouble(0).ToString() + " ";
		
	}

	drPrixMoyen->Close();

	conn->closeConnection();

}

private: System::Void btnChiffreAffaire_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	if (cbMois->Text != "mois"  && cbAnnee->Text != "annee" )
	{
		this->graphSimulation->Visible = false;
		this->lblTitleInfo->Visible = true;
		this->lblTitleInfo->Text = "Le chiffre d'affaire pour le "+ cbMois->Text + "/" + cbAnnee->Text + " est :";
		this->lblValueInfo->Visible = true;

		String^ rqtChiffreAffaire = " select sum(MONTANT_HT) from Paiement where month(DATE_PAIEMENT) = "+ cbMois->Text + " and year(DATE_PAIEMENT) = " + cbAnnee->Text;

		SqlCommand^ cmdChiffreAffaire = gcnew SqlCommand(rqtChiffreAffaire, conn->getConn());

		conn->openConnection();

		SqlDataReader^ drChiffreAffaire = cmdChiffreAffaire->ExecuteReader();

		if (drChiffreAffaire->Read())
		{		
			try 
			{
				lblValueInfo->Text = drChiffreAffaire->GetDouble(0).ToString() + " ";
			}
			catch (...)
			{
				lblValueInfo->Text = "0 ";
			}
		
		}
	
		drChiffreAffaire->Close();

		conn->closeConnection();
	}
	else
	{
		MessageBox::Show("La Date n'est pas Valide !", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnArticleReapro_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();
	
	dgvStat->Columns["nomArticle"]->Visible = true;
	dgvStat->Columns["natureArticle"]->Visible = true;
	dgvStat->Columns["couleurArticle"]->Visible = true;
	dgvStat->Columns["stockArticle"]->Visible = true;

	
	this->lblNonGraph->Visible = true;
	

	String^ rqtArticleReapro = "select NOM_ARTICLE, NATURE, COULEUR, STOCK, SEUIL_APPROVISIONNEMENT from ARTICLE where STOCK < SEUIL_APPROVISIONNEMENT";

	SqlCommand^ cmdArticleReapro = gcnew SqlCommand(rqtArticleReapro, conn->getConn());

	conn->openConnection();

	SqlDataReader^ drArticleReapro = cmdArticleReapro->ExecuteReader();

	while (drArticleReapro->Read())
	{
		dgvStat->Rows->Add(drArticleReapro["NOM_ARTICLE"], drArticleReapro["NATURE"], drArticleReapro["COULEUR"], drArticleReapro["STOCK"]);
	}
	drArticleReapro->Close();
	conn->closeConnection();
}
private: System::Void btnTotalClientPrix_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	lblTitleInfo->Visible = true;
	lblValueInfo->Visible = true;

	String^ rqtNomClient = "SELECT NOM_PERSONNE, PRENOM_PERSONNE From Personne INNER JOIN Client ON Personne.ID_PERSONNE = " + cbIDClient->Text;

	SqlCommand^ cmdNomClient = gcnew SqlCommand(rqtNomClient, conn->getConn());
	
	conn->openConnection();

	SqlDataReader^ drNomClient = cmdNomClient->ExecuteReader();

	if (drNomClient->Read())
	{
		lblTitleInfo->Text = "Le Client ";
		lblTitleInfo->Text += drNomClient->GetString(1) + "\r\n";
		lblTitleInfo->Text += drNomClient->GetString(0) + "\r\n";
		lblTitleInfo->Text += "a dépenser au total :";
	}
	drNomClient->Close();

	String^ rqtClientPrix = "select sum(Paiement.MONTANT_TTC) from Paiement inner join Commande on Paiement.ID_COMMANDE = Commande.ID_COMMANDE inner join Client on Commande.ID_CLIENT = " + cbIDClient->Text;
	
	SqlCommand^ cmdClientPrix = gcnew SqlCommand(rqtClientPrix, conn->getConn());
	
	SqlDataReader^ drClientPrix = cmdClientPrix->ExecuteReader();

	if (drClientPrix->Read())
	{
		lblValueInfo->Text = drClientPrix->GetDouble(0).ToString()  + " ";
	}
	drClientPrix->Close();

	conn->closeConnection();


}
private: System::Void btnPlus10Article_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	dgvStat->Columns["nomArticle"]->Visible = true;
	dgvStat->Columns["natureArticle"]->Visible = true;
	dgvStat->Columns["couleurArticle"]->Visible = true;
	lblNonGraph->Visible = true;

	String^ rqtPlus10Article = "select top(10) sum(Contenir.QUANTITE), Article.NOM_ARTICLE, Article.NATURE, Article.COULEUR from Contenir inner join Article on Contenir.ID_ARTICLE = Article.ID_ARTICLE group by Contenir.ID_ARTICLE, NOM_ARTICLE, Article.NATURE, Article.COULEUR order by sum(QUANTITE) desc ";

	SqlCommand^ cmdPlus10Article = gcnew SqlCommand(rqtPlus10Article, conn->getConn());

	conn->openConnection();

	SqlDataReader^ drPlus10Article = cmdPlus10Article->ExecuteReader();

	while (drPlus10Article->Read())
	{
		
		dgvStat->Rows->Add(drPlus10Article["NOM_ARTICLE"], drPlus10Article["NATURE"], drPlus10Article["COULEUR"]);

	}
	drPlus10Article->Close();
	
	conn->closeConnection();
}
private: System::Void btnMoins10Article_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	dgvStat->Columns["nomArticle"]->Visible = true;
	dgvStat->Columns["natureArticle"]->Visible = true;
	dgvStat->Columns["couleurArticle"]->Visible = true;
	lblNonGraph->Visible = true;

	String^ rqtMoins10Article = "select top(10) sum(Contenir.QUANTITE), Article.NOM_ARTICLE, Article.NATURE, Article.COULEUR from Contenir inner join Article on Contenir.ID_ARTICLE = Article.ID_ARTICLE group by Contenir.ID_ARTICLE, NOM_ARTICLE, Article.NATURE, Article.COULEUR order by sum(QUANTITE) asc ";

	SqlCommand^ cmdMoins10Article = gcnew SqlCommand(rqtMoins10Article, conn->getConn());

	conn->openConnection();

	SqlDataReader^ drMoins10Article = cmdMoins10Article->ExecuteReader();

	while (drMoins10Article->Read())
	{

		dgvStat->Rows->Add(drMoins10Article["NOM_ARTICLE"], drMoins10Article["NATURE"], drMoins10Article["COULEUR"]);

	}
	drMoins10Article->Close();
	
	conn->closeConnection();
}
private: System::Void btnValeurStock_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideAllDG();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	hideAllLblInfo();

	lblTitleInfo->Visible = true;
	lblTitleInfo->Text = "La valeur commerciale du stock est :";
	lblValueInfo->Visible = true;

	String^ rqtValeurComerciale = "select sum(STOCK*PRIX_ARTICLE) from Article";

	SqlCommand^ cmdValeurCommerciale = gcnew SqlCommand(rqtValeurComerciale, conn->getConn());
	
	conn->openConnection();

	SqlDataReader^ drValeurCommerciale = cmdValeurCommerciale->ExecuteReader();

	if (drValeurCommerciale->Read())
	{
		lblValueInfo->Text = drValeurCommerciale->GetDouble(0).ToString();
	}
	drValeurCommerciale->Close();
	
	conn->closeConnection();
}
private: System::Void btnValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	graphSimulation->Series[0]->Points->Clear();
	dgvStat->Rows->Clear();
	nbLigneDGV = 0;
	hideAllLblInfo();

	lblTitleInfo->Visible = true;
	lblTitleInfo->Text = "La valeur d'achat du stock est :";
	lblValueInfo->Visible = true;

	String^ rqtValeurAchat = "select sum(STOCK*(PRIX_ARTICLE+TVA_ARTICLE)) from Article";

	SqlCommand^ cmdValeurAchat = gcnew SqlCommand(rqtValeurAchat, conn->getConn());
	
	conn->openConnection();

	SqlDataReader^ drValeurAchat = cmdValeurAchat->ExecuteReader();

	if (drValeurAchat->Read())
	{
		lblValueInfo->Text = drValeurAchat->GetDouble(0).ToString();
	}
	drValeurAchat->Close();
	
	conn->closeConnection();
}
private: System::Void btnLoad_Click(System::Object^ sender, System::EventArgs^ e)
	{
	hideAllDG();
	hideAllLblInfo();
	lblNonGraph->Visible = true;
	double tvaNum;
	double remiseNum;
	double margeNum;
	double demarcheNum;

	if (cbArticle->Text != "" && cbTVA->Text != "" && cbMarge->Text != "" && cbRemise->Text != "" && cbDemarche->Text != "")
	{
		hideAllLblInfo();
		dgvStat->Columns["prixHT"]->Visible = true;
		dgvStat->Columns["TVA"]->Visible = true;
		dgvStat->Columns["margeCommerciale"]->Visible = true;
		dgvStat->Columns["remiseCommerciale"]->Visible = true;
		dgvStat->Columns["demarqueInconnu"]->Visible = true;
		dgvStat->Columns["nomArticle"]->Visible = true;
		dgvStat->Columns["natureArticle"]->Visible = true;
		dgvStat->Columns["couleurArticle"]->Visible = true;
		dgvStat->Columns["stockArticle"]->Visible = true;
		graphSimulation->Visible = true;
		
		
		if (cbTVA->Text == "20%")
			tvaNum = 0.2;
		if (cbTVA->Text == "10%")
			tvaNum = 0.1;
		if (cbTVA->Text == "5,5%")
			tvaNum = 0.055;
		if (cbRemise->Text == "6%")
			remiseNum = 0.06;
		if (cbRemise->Text == "5%")
			remiseNum = 0.05;
		if (cbMarge->Text == "15%")
			margeNum = 0.15;
		if (cbMarge->Text == "10%")
			margeNum = 0.1;
		if (cbMarge->Text == "5%")
			margeNum = 0.05;
		if (cbDemarche->Text == "5%")
			demarcheNum = 0.05;
		if (cbDemarche->Text == "3%")
			demarcheNum = 0.03;
		if (cbDemarche->Text == "2%")
			demarcheNum = 0.02;

		String^ name = cbArticle->Text;

		String^ rqtArticleSimu = "select NATURE, COULEUR, STOCK, PRIX_ARTICLE from Article where NOM_ARTICLE = '" + name +"'";

		SqlCommand^ cmdArticleSimu = gcnew SqlCommand(rqtArticleSimu, conn->getConn());
		
		conn->openConnection();

		SqlDataReader^ drArticleSimu = cmdArticleSimu->ExecuteReader();
		if (drArticleSimu->Read())
		{
			dgvStat->Rows->Add(cbArticle->Text, drArticleSimu[0], drArticleSimu[1], drArticleSimu[2], drArticleSimu[3], cbTVA->Text, cbMarge->Text, cbRemise->Text, cbDemarche->Text);
		}
		

		double calculValue;
		calculValue = Convert::ToDouble(drArticleSimu[2]) * ((Convert::ToDouble(drArticleSimu[3]) + tvaNum) * (Convert::ToDouble(drArticleSimu[3]) + (margeNum) * (Convert::ToDouble(drArticleSimu[3])) - remiseNum * (Convert::ToDouble(drArticleSimu[3])) - demarcheNum * (Convert::ToDouble(drArticleSimu[3]))));
		graphSimulation->Series[0]->Points->AddXY("Simulation" + nbLigneDGV, calculValue);
		
		nbLigneDGV++;
		drArticleSimu->Close();
		conn->closeConnection();

	}
	else
	MessageBox::Show("Tout les champs ne sont pas Remplis", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	hideAllDG();
	hideAllLblInfo();
	lblNonGraph->Visible = true;
	nbLigneDGV = 0;
	graphSimulation->Series[0]->Points->Clear();
	dgvStat->Rows->Clear();
	graphSimulation->Visible = false;

}
};
}
