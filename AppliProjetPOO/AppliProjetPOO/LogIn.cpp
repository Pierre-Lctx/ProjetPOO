#include "LogIn.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainLog(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::LogIn monFormulaire;
	Application::Run(% monFormulaire);
}