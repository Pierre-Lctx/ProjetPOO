#include "MenuPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainAcceuil(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}