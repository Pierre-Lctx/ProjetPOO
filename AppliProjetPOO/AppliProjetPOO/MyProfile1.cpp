#include "gestionProfile.h"

System::String^ Ns_pjt_MonProfil::MonProfil::Select(void)

{
	return "SELECT Personne.ID_PERSONNE, NOM_PERSONNE, PRENOM_PERSONNE, ADRESSE_MAIL, TELEPHONE, DATE_NAISSANCE, DATE_EMBAUCHE FROM [Personne].[dbo] INNER JOIN on personne.ID_PERSONNE = personnel.ID_PERSONNEL";

}

System::String^ Ns_pjt_MonProfil::MonProfil::Insert(void)

{
	return "INSERT INTO (Personne.ID_PERSONNE, NOM_PERSONNE,PRENOM_PERSONNE, ADRESSE_MAIL, TELEPHONE, DATE_NAISSANCE, DATE_EMBAUCHE, ) VALUES('" + this->Matricule + "','" + this->Nom + "," + this->Prenom + "," + this->Email + "," + this->NumeroTelephone + "," + this->DateNaissance + "," + this->DateEmbauche + "');";
}


System::String^ Ns_pjt_MonProfil::MonProfil::Update(void)

{
	return "";
}



// Matricule


void Ns_pjt_MonProfil::MonProfil::setMatricule(System::String^ Matricule)

{
	this->Matricule = Matricule;
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


System::String^ Ns_pjt_MonProfil::MonProfil::getId(void) { return this->Matricule; }
System::String^ Ns_pjt_MonProfil::MonProfil::getNom(void) { return this->Nom; }
System::String^ Ns_pjt_MonProfil::MonProfil::getPrenom(void) { return this->Prenom; }
System::String^ Ns_pjt_MonProfil::MonProfil::getEmail(void) { return this->Email; }
System::String^ Ns_pjt_MonProfil::MonProfil::getTelephone(void) { return this->NumeroTelephone; }
System::String^ Ns_pjt_MonProfil::MonProfil::getDateEmbauche(void) { return this->DateEmbauche; }
System::String^ Ns_pjt_MonProfil::MonProfil::getDateNaissance(void) { return this->DateNaissance; }

