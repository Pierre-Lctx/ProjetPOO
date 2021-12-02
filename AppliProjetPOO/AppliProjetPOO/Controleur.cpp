#include "Controleur.h"

Controleur::Controleur()
{
	activeForm = nullptr;
	con = gcnew Connect();
	i = 0;
}

#pragma region Tableaux de bord fct
// Déclaration de la fonction utilisé dans le form TableauBord pour afficher ou cacher les boutons warnings 
void Controleur::initializeWarningBtn(Button^ b1, Button^ b2, Button^ b3, Button^ b4, Button^ b5, Button^ b6, Button^ b7, Button^ b8, Button^ b9, Button^ b10, Button^ b11, Button^ b12, Button^ bsee)
{
	btn1 = b1;
	btn2 = b2;
	btn3 = b3;
	btn4 = b4;
	btn5 = b5;
	btn6 = b6;
	btn7 = b7;
	btn8 = b8;
	btn9 = b9;
	btn10 = b10;
	btn11 = b11;
	btn12 = b12;
	btnSee = bsee;

	if (i < 13)
	{
		switch (nbWarning)
		{
		case 1:
			btn1->Visible = true;
			btn2->Visible = false;
			btn3->Visible = false;
			btn4->Visible = false;
			btn5->Visible = false;
			btn6->Visible = false;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 2:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = false;
			btn4->Visible = false;
			btn5->Visible = false;
			btn6->Visible = false;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 3:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = false;
			btn5->Visible = false;
			btn6->Visible = false;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 4:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = false;
			btn6->Visible = false;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 5:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = false;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 6:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = false;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 7:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = false;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 8:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = true;
			btn9->Visible = false;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 9:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = true;
			btn9->Visible = true;
			btn10->Visible = false;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 10:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = true;
			btn9->Visible = true;
			btn10->Visible = true;
			btn11->Visible = false;
			btn12->Visible = false;
			btnSee->Visible = false;
			break;
		case 11:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = true;
			btn9->Visible = true;
			btn10->Visible = true;
			btn11->Visible = true;
			btn12->Visible = true;
			btnSee->Visible = false;
			break;
		case 12:
			btn1->Visible = true;
			btn2->Visible = true;
			btn3->Visible = true;
			btn4->Visible = true;
			btn5->Visible = true;
			btn6->Visible = true;
			btn7->Visible = true;
			btn8->Visible = true;
			btn9->Visible = true;
			btn10->Visible = true;
			btn11->Visible = true;
			btn12->Visible = true;
			btnSee->Visible = false;

		}
	}
	if (i >= 13)
	{
		btn1->Visible = true;
		btn2->Visible = true;
		btn3->Visible = true;
		btn4->Visible = true;
		btn5->Visible = true;
		btn6->Visible = true;
		btn7->Visible = true;
		btn8->Visible = true;
		btn9->Visible = true;
		btn10->Visible = true;
		btn11->Visible = true;
		btn12->Visible = true;
		btnSee->Text = "Voir plus (+" + (i - 12).ToString() + ")";
		btnSee->Visible = true;
	}

	fillBtnText();
}

void Controleur::setTabTextWarning()
{
	i = 0;

	String^ rqtStock = "select count(ID_ARTICLE), NOM_ARTICLE from ARTICLE where STOCK < SEUIL_APPROVISIONNEMENT group by NOM_ARTICLE;";

	SqlCommand^ cmdStock = gcnew SqlCommand(rqtStock, con->getConn());

	con->openConnection();

	SqlDataReader^ drStock = cmdStock->ExecuteReader();

	while (drStock->Read())
	{
		tabText[i] = drStock->GetString(1);
		i++;
		nbWarning = drStock->GetInt32(0);
	}
	drStock->Close();
	con->closeConnection();
}

void Controleur::setTabBtnWarning()
{
	this->tabBtn[0] = btn1;
	this->tabBtn[1] = btn2;
	this->tabBtn[2] = btn3;
	this->tabBtn[3] = btn4;
	this->tabBtn[4] = btn5;
	this->tabBtn[5] = btn6;
	this->tabBtn[6] = btn7;
	this->tabBtn[7] = btn8;
	this->tabBtn[8] = btn9;
	this->tabBtn[9] = btn10;
	this->tabBtn[10] = btn11;
	this->tabBtn[11] = btn12;
}

String^ Controleur::getTabText(int i)
{
	return tabText[i];
}

void Controleur::fillBtnText()
{
	setTabBtnWarning();
	setTabTextWarning();
	this->tabBtn[0]->Text = getTabText(0);
	this->tabBtn[1]->Text = getTabText(1);
	this->tabBtn[2]->Text = getTabText(2);
	this->tabBtn[3]->Text = getTabText(3);
	this->tabBtn[4]->Text = getTabText(4);
	this->tabBtn[5]->Text = getTabText(5);
	this->tabBtn[6]->Text = getTabText(6);
	this->tabBtn[7]->Text = getTabText(7);
	this->tabBtn[8]->Text = getTabText(8);
	this->tabBtn[9]->Text = getTabText(9);
	this->tabBtn[10]->Text = getTabText(10);
	this->tabBtn[11]->Text = getTabText(11);

}

#pragma endregion


void Controleur::openChildForm(Form^ childForm, Panel^ pnlForm)
{
	if (activeForm != nullptr)
		activeForm->Close();


	activeForm = childForm;
	childForm->TopLevel = false;

	childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	childForm->Dock = System::Windows::Forms::DockStyle::Fill;

	pnlForm->Controls->Add(childForm);
	pnlForm->Tag = childForm;

	childForm->BringToFront();
	childForm->Show();

};
