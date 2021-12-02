#pragma once

#include "Connection.h"
using namespace connection;
using namespace System::Windows::Forms;

namespace gestionPersonnel
{
	ref class gestPersonnel
	{
	private :
		int ID_PERSONNE, ID_PERSONNEL_GERER, numVoie, etage;
		String^ nom, ^ prenom, ^ telephone, ^ email, ^ rue, ^ batiment, ^ ville;
		DateTime^ dateNaissance, ^ dateEmbauche;

		Connect^ connect;

	public :
		gestPersonnel();
		void afficher(DataGridView^);
		void supprimer(int);
		void ajouter(int, int, int, String^, String^, String^, String^, String^, String^, String^, DateTime^, DateTime^);
		void modifier(int, int, int, int, String^, String^, String^, String^, String^, String^, String^, DateTime^, DateTime^);

		//Setter
		void setIDPERSONNE(int);
		void setIDPERSONNELGERER(int);
		void setNumVoie(int);
		void setEtage(int);
		void setNom(String^);
		void setPrenom(String^);
		void setTelephone(String^);
		void setEmail(String^);
		void setRue(String^);
		void setBatiment(String^);
		void setVille(String^);
		void setDateNaissance(DateTime^);
		void setDateEmbauche(DateTime^);
		
		//Getter
		int getIDPERSONNE();
		int getIDPERSONNELGERER();
		int getNumVoie();
		int getEtage();
		String^ getNom();
		String^ getPrenom();
		String^ getTelephone();
		String^ getEmail();
		String^ getRue();
		String^ getBatiment();
		String^ getVille();
		DateTime^ getDateNaissance();
		DateTime^ getDateEmbauche();
	};
}