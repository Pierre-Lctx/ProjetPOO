#include "LogIn.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainLog()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::LogIn monFormulaire;
	Application::Run(% monFormulaire);
}