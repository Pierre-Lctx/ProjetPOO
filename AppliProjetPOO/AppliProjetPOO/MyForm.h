#pragma once

namespace AppliProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelSideMenu;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
	private: void customizeDesign()
			{
			panel1->Visible = false;
			}	
		   void hideSubMenu()
		   {
			   if (panel1->Visible == true)
				   panel1->Visible = false;

		   }
		   void showSubMenu(Panel^ subMenu)
		   {
			   if (subMenu->Visible == false)
			   {
				   hideSubMenu();
				   subMenu->Visible = true;
			   }
			   else
				   subMenu->Visible = false;
		   }
		void InitializeComponent(void)
		{
			this->panelSideMenu = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelSideMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelSideMenu
			// 
			this->panelSideMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelSideMenu->Controls->Add(this->panel1);
			this->panelSideMenu->Controls->Add(this->button1);
			this->panelSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSideMenu->Location = System::Drawing::Point(0, 0);
			this->panelSideMenu->Name = L"panelSideMenu";
			this->panelSideMenu->Size = System::Drawing::Size(250, 679);
			this->panelSideMenu->TabIndex = 0;
			this->panelSideMenu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelSideMenu_Paint);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 98);
			this->panel1->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Location = System::Drawing::Point(0, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Location = System::Drawing::Point(0, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1455, 679);
			this->Controls->Add(this->panelSideMenu);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panelSideMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			customizeDesign();

		}

#pragma endregion
	private: System::Void panelSideMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		showSubMenu(panel1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		hideSubMenu();
	}
	
};

	
}
