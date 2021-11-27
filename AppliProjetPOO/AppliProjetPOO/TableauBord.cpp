#include "TableauBord.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MainTblBord(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppliProjetPOO::TableauBord monFormulaire;
	Application::Run(% monFormulaire);
}