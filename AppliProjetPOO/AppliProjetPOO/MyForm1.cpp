#include "MyForm1.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}