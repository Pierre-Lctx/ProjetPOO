#include "Fct.h"

Fct::Fct()
{

}

void Fct::initializeWarningBtn(int fct, Button^ b1, Button^ b2, Button^ b3, Button^ b4, Button^ b5, Button^ b6, Button^ b7, Button^ b8, Button^ b9, Button^ b10, Button^ b11, Button^ b12, Button^ bsee)
{
	if (fct < 13)
	{
		switch (fct)
		{
		case 1:
			b1->Visible = true;
			b2->Visible = false;
			b3->Visible = false;
			b4->Visible = false;
			b5->Visible = false;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 2:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = false;
			b4->Visible = false;
			b5->Visible = false;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 3:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = false;
			b5->Visible = false;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 4:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = false;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 5:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 6:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 7:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 8:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = true;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 9:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = true;
			b9->Visible = true;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 10:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = true;
			b9->Visible = true;
			b10->Visible = true;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		case 11:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = true;
			b9->Visible = true;
			b10->Visible = true;
			b11->Visible = true;
			b12->Visible = true;
			bsee->Visible = false;
			break;
		case 12:
			b1->Visible = true;
			b2->Visible = true;
			b3->Visible = true;
			b4->Visible = true;
			b5->Visible = true;
			b6->Visible = true;
			b7->Visible = true;
			b8->Visible = true;
			b9->Visible = true;
			b10->Visible = true;
			b11->Visible = true;
			b12->Visible = true;
			bsee->Visible = false;
		default:
			b1->Visible = false;
			b2->Visible = false;
			b3->Visible = false;
			b4->Visible = false;
			b5->Visible = false;
			b6->Visible = false;
			b7->Visible = false;
			b8->Visible = false;
			b9->Visible = false;
			b10->Visible = false;
			b11->Visible = false;
			b12->Visible = false;
			bsee->Visible = false;
			break;
		}
	}
	if (fct >= 13)
	{
		b1->Visible = true;
		b2->Visible = true;
		b3->Visible = true;
		b4->Visible = true;
		b5->Visible = true;
		b6->Visible = true;
		b7->Visible = true;
		b8->Visible = true;
		b9->Visible = true;
		b10->Visible = true;
		b11->Visible = true;
		b12->Visible = true;
		bsee->Text = "Voir plus (+" + (fct-12).ToString() + ")";
		bsee->Visible = true;
	}
}