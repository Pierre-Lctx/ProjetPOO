#pragma once
#pragma once
#include "Connection.h"


using namespace System;
using namespace connection;
namespace Ns_pjt_MonProfil




{
	ref class MonProfil

	{
	private:

		String^ sSql;
		String^ Nom;
		String^ Prenom;
		String^ Email;
		String^ NumeroTelephone;
		String^ DateEmbauche;
		String^ DateNaissance;

		
		Connect^ connect;

	public:

		String^ Select(void);
		String^ Insert(void);
		String^ Update(void);
		void setNom(String^);
		void setPrenom(String^);
		void setEmail(String^);
		void setNumeroTelephone(String^);
		void setDateEmbauche(String^);
		void setDateNaissance(String^);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getEmail(void);
		String^ getTelephone(void);
		String^ getDateEmbauche(void);
		String^ getDateNaissance(void);

	};
}



// Nom


void Ns_pjt_MonProfil::MonProfil::setNom(System::String^ Nom)

{
	this->Nom = Nom;
}


// Prenom


void Ns_pjt_MonProfil::MonProfil::setPrenom(System::String^ Prenom)

{
	this->Prenom = Prenom;
}


// Email


void Ns_pjt_MonProfil::MonProfil::setEmail(System::String^ Email)

{
	this->Email = Email;
}


// Telephone


void Ns_pjt_MonProfil::MonProfil::setNumeroTelephone(System::String^ NumeroTelephone)

{
	this->NumeroTelephone = NumeroTelephone;
}


// Date d'embauche


void Ns_pjt_MonProfil::MonProfil::setDateEmbauche(System::String^ DateEmbauche)

{
	this->DateEmbauche = DateEmbauche;

}


// Date de naissance


void Ns_pjt_MonProfil::MonProfil::setDateNaissance(System::String^ DateNaissance)

{
	this->DateNaissance = DateNaissance;
}



String^ Ns_pjt_MonProfil::MonProfil::getNom(void) { return this->Nom; }
String^ Ns_pjt_MonProfil::MonProfil::getPrenom(void) { return this->Prenom; }
String^ Ns_pjt_MonProfil::MonProfil::getEmail(void) { return this->Email; }
String^ Ns_pjt_MonProfil::MonProfil::getTelephone(void) { return this->NumeroTelephone; }
String^ Ns_pjt_MonProfil::MonProfil::getDateEmbauche(void) { return this->DateEmbauche; }
String^ Ns_pjt_MonProfil::MonProfil::getDateNaissance(void) { return this->DateNaissance; }



String^ Ns_pjt_MonProfil::MonProfil::Select(void)

{
	return "SELECT NOM_PERSONNE, PRENOM_PERSONNE, ADRESSE_MAIL, TELEPHONE, DATE_NAISSANCE, Personnel.DATE_EMBAUCHE FROM [Personne].[dbo] INNER JOIN [Personnel].[dbo] ON personne.ID_PERSONNE = personnel.ID_PERSONNE WHERE personne.ID_PERSONNE = 5;";

}

String^ Ns_pjt_MonProfil::MonProfil::Insert(void)

{
	return "INSERT INTO (NOM_PERSONNE,PRENOM_PERSONNE, ADRESSE_MAIL, TELEPHONE, DATE_NAISSANCE, DATE_EMBAUCHE, ) VALUES('" + this->Nom + "," + this->Prenom + "," + this->Email + "," + this->NumeroTelephone + "," + this->DateNaissance + "," + this->DateEmbauche + "');";
}


String^ Ns_pjt_MonProfil::MonProfil::Update(void)

{
	return "";
}


