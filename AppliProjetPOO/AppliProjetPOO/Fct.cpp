#include "Fct.h"

Fct::Fct(Button^ b1, Button^ b2, Button^ b3, Button^ b4, Button^ b5, Button^ b6, Button^ b7, Button^ b8, Button^ b9, Button^ b10, Button^ b11, Button^ b12, Button^ bsee)
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
}

// Déclaration de la fonction utilisé dans le form TableauBord pour afficher ou cacher les boutons warnings 
void Fct::initializeWarningBtn(int fct)
{

	if (fct < 13)
	{
		switch (fct)
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
	if (fct >= 13)
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
		btnSee->Text = "Voir plus (+" + (fct-12).ToString() + ")";
		btnSee->Visible = true;
	}
}

void Fct::setTabTextWarning()
{
	this->tabText[0] = "Warning 1";
	this->tabText[1] = "Warning 2";
	this->tabText[2] = "Warning 3";
	this->tabText[3] = "Warning 4";
	this->tabText[4] = "Warning 5";
	this->tabText[5] = "Warning 6";
	this->tabText[6] = "Warning 7";
	this->tabText[7] = "Warning 8";
	this->tabText[8] = "Warning 9";
	this->tabText[9] = "Warning 10";
	this->tabText[10] = "Warning 11";
	this->tabText[11] = "Warning 12";

}

void Fct::setTabBtnWarning()
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

String^ Fct::getTabText(int i)
{
	return tabText[i];
}

void Fct::fillBtnText() 
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
	this->tabBtn[9]->Text = getTabText(10);
	this->tabBtn[10]->Text = getTabText(11);
	this->tabBtn[11]->Text = getTabText(11);
	
}