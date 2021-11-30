#pragma once

namespace AppliProjetPOO 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stockArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prixHT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ margeCommerciale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remiseCommerciale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ demarqueInconnu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ couleurArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ natureArticle;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox4;









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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nomArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stockArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prixHT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->margeCommerciale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remiseCommerciale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->demarqueInconnu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->couleurArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->natureArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Location = System::Drawing::Point(144, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1006, 267);
			this->panel1->TabIndex = 0;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea1->BorderColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->HeaderSeparatorColor = System::Drawing::Color::White;
			legend1->ItemColumnSeparatorColor = System::Drawing::Color::White;
			legend1->Name = L"Legend1";
			legend1->TitleBackColor = System::Drawing::Color::White;
			legend1->TitleForeColor = System::Drawing::Color::White;
			legend1->TitleSeparatorColor = System::Drawing::Color::White;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->LabelForeColor = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1006, 267);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			//Couleurs sur l'Axe X
			this->chart1->ChartAreas[0]->AxisX->LineColor = Color::White;
			this->chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = Color::White;
			this->chart1->ChartAreas[0]->AxisX->InterlacedColor = Color::White;
			this->chart1->ChartAreas[0]->AxisX->LabelStyle->ForeColor = Color::White;
			this->chart1->ChartAreas[0]->AxisX->MajorTickMark->LineColor = Color::White;

			//Couleurs sur l'Axe Y
			this->chart1->ChartAreas[0]->AxisY->LineColor = Color::White;
			this->chart1->ChartAreas[0]->AxisY->InterlacedColor = Color::White;
			this->chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = Color::White;
			this->chart1->ChartAreas[0]->AxisY->LabelStyle->ForeColor = Color::White;
			this->chart1->ChartAreas[0]->AxisY->MajorTickMark->LineColor = Color::White;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(560, 303);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 315);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->nomArticle,
					this->stockArticle, this->prixHT, this->TVA, this->margeCommerciale, this->remiseCommerciale, this->demarqueInconnu, this->couleurArticle,
					this->natureArticle
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(722, 315);
			this->dataGridView1->TabIndex = 0;
			// 
			// nomArticle
			// 
			this->nomArticle->HeaderText = L"Article";
			this->nomArticle->Name = L"nomArticle";
			this->nomArticle->ReadOnly = true;
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
			// couleurArticle
			// 
			this->couleurArticle->HeaderText = L"Couleur Article";
			this->couleurArticle->Name = L"couleurArticle";
			this->couleurArticle->ReadOnly = true;
			// 
			// natureArticle
			// 
			this->natureArticle->HeaderText = L"Nature Article";
			this->natureArticle->Name = L"natureArticle";
			this->natureArticle->ReadOnly = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->comboBox3);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 303);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(542, 315);
			this->panel3->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button8->Location = System::Drawing::Point(274, 167);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(208, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Valeur d\'Achat du Stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button7->Location = System::Drawing::Point(274, 132);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(208, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Valeur Commerciale du Stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button6->Location = System::Drawing::Point(3, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(234, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Les 10 Articles les Moins Vendus";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button5->Location = System::Drawing::Point(3, 134);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(234, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Les 10 Articles les Moins Vendus";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(227, 105);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(56, 21);
			this->comboBox3->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button4->Location = System::Drawing::Point(18, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Paiement Total pour le Client";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(289, 50);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(70, 21);
			this->comboBox2->TabIndex = 8;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(216, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(49, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button3->Location = System::Drawing::Point(18, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Articles à Réaprovisionner";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button2->Location = System::Drawing::Point(18, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Chiffre d\'Affaire par mois";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->button1->Location = System::Drawing::Point(25, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Prix d\'un Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->comboBox7);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->comboBox6);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->comboBox5);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->comboBox4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(3, 196);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(539, 116);
			this->panel4->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->label3->Location = System::Drawing::Point(19, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"TVA : ";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"20%", L"10%", L"5,5%" });
			this->comboBox4->Location = System::Drawing::Point(68, 13);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(43, 21);
			this->comboBox4->TabIndex = 16;
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
			this->label2->Location = System::Drawing::Point(175, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Marge Commerciale  : ";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"15%", L"10%", L"5%" });
			this->comboBox5->Location = System::Drawing::Point(334, 13);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(43, 21);
			this->comboBox5->TabIndex = 18;
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
			this->label4->Location = System::Drawing::Point(12, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 15);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Remise Commerciale  : ";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"6%", L"5%" });
			this->comboBox6->Location = System::Drawing::Point(178, 53);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(43, 21);
			this->comboBox6->TabIndex = 20;
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
			this->label5->Location = System::Drawing::Point(283, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 15);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Marge Commerciale  : ";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"3%", L"2%" });
			this->comboBox7->Location = System::Drawing::Point(442, 53);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(43, 21);
			this->comboBox7->TabIndex = 22;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(159, 90);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 23;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(271, 90);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 24;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Stats_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		chart1->Series[0]->Points->AddXY("Peter", 1000);
		chart1->Series[0]->Points->AddXY("Robert", 1500);
	
		
	}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}


};
}
