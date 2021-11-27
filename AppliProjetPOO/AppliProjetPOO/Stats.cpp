#include "Stats.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainSats(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::Stats monFormulaire;
	Application::Run(% monFormulaire);
}