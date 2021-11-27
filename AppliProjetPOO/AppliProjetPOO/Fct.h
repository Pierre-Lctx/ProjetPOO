#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Fct
{
private:
	array< System::Windows::Forms::Button^ >^ tabBtn = gcnew array< System::Windows::Forms::Button^ >(12);
	array< String^ >^ tabText = gcnew array< String^ >(12);
	Button^ btn1, ^btn2, ^btn3, ^btn4, ^btn5, ^btn6, ^btn7, ^btn8, ^btn9, ^btn10, ^btn11, ^btn12, ^btnSee;
public:
	Fct(Button^ b1, Button^ b2, Button^ b3, Button^ b4, Button^ b5, Button^ b6, Button^ b7, Button^ b8, Button^ b9, Button^ b10, Button^ b11, Button^ b12, Button^ bsee);
	void initializeWarningBtn(int fct);
	void setTabTextWarning();
	void setTabBtnWarning();
	String^ getTabText(int i);
	void fillBtnText();
};

