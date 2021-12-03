#include "gestionPersonnel.h"

using namespace gestionPersonnel;

gestPersonnel::gestPersonnel()
{
	this->ID_PERSONNE = this->ID_PERSONNEL_GERER = this->etage = this->numVoie = 0;
	this->nom = this->prenom = this->telephone = this->email = this->rue = this->batiment = this->ville = "";
	this->dateEmbauche = this->dateNaissance = DateTime::Now;

	this->connect = gcnew Connect();
}

void gestPersonnel::ajouter(int idPersonnelGerer, int etage, int numVoie, String^ nom, String^ prenom, String^ telephone, String^ email, String^ rue, String^ batiment, String^ ville, DateTime^ dateNaissance, DateTime^ dateEmbauche)
{
	connect->openConnection();

	String^ query = "";
	SqlCommand^ cmd = gcnew SqlCommand(query, connect->getConn());

	cmd->ExecuteNonQuery();

	connect->closeConnection();
}

void gestPersonnel::afficher(DataGridView^ dataGridView)
{
	this->connect->openConnection();

	String^ query = "select Personne.ID_PERSONNE, Personne.NOM_PERSONNE, Personne.PRENOM_PERSONNE, Personne.TELEPHONE, Personne.ADRESSE_MAIL, Personne.DATE_NAISSANCE, Personnel.DATE_EMBAUCHE, Personnel.ID_PERSONNEL_GERER, Adresse.NUMERO_VOIE, Adresse.RUE, Adresse.BATIMENT, Adresse.ETAGE, Ville.NOM_VILLE from DBProjet.dbo.Personne INNER JOIN DBProjet.dbo.Personnel ON Personne.ID_PERSONNE = Personnel.ID_PERSONNE INNER JOIN DBProjet.dbo.Adresse ON Personnel.ID_ADRESSE = Adresse.ID_ADRESSE INNER JOIN DBProjet.dbo.Ville ON Adresse.ID_VILLE = Ville.ID_VILLE; ";
	SqlCommand^ cmd = gcnew SqlCommand(query, connect->getConn());

	SqlDataReader^ dr = cmd->ExecuteReader();

	while (dr->Read())
	{
		dataGridView->Rows->Add(dr["ID_PERSONNE"], dr["NOM_PERSONNE"], dr["PRENOM_PERSONNE"], dr["TELEPHONE"], dr["ADRESSE_MAIL"], dr["DATE_NAISSANCE"], dr["DATE_EMBAUCHE"], dr["ID_PERSONNEL_GERER"], dr["NUMERO_VOIE"], dr["RUE"], dr["BATIMENT"], dr["NOM_VILLE"]);
	}

	this->connect->closeConnection();
}

void gestPersonnel::supprimer(int IDPERSONNEL)
{
	this->connect->openConnection();

	String^ query = "Delete Personnel where ID_PERSONNEL = " + IDPERSONNEL.ToString();
	SqlCommand^ cmd = gcnew SqlCommand(query, connect->getConn());

	cmd->ExecuteNonQuery();

	this->connect->closeConnection();
}

void gestPersonnel::modifier(int idPersonne, int idPersonneGerer, int Etage, int NumVoie, String^ Nom, String^ Prenom, String^ Telephone, String^ Email, String^ Rue, String^ Batiment, String^ Ville, DateTime^ DateNaissance, DateTime^ DateEmbauche)
{

}

int gestPersonnel::getIDPERSONNE()
{
	return this->ID_PERSONNE;
}

int gestPersonnel::getIDPERSONNELGERER()
{
	return this->ID_PERSONNEL_GERER;
}

int gestPersonnel::getNumVoie()
{
	return this->numVoie;
}

int gestPersonnel::getEtage()
{
	return this->etage;
}

String^ gestPersonnel::getNom()
{
	return this->nom;
}

String^ gestPersonnel::getPrenom()
{
	return this->prenom;
}

String^ gestPersonnel::getEmail()
{
	return this->email;
}

String^ gestPersonnel::getTelephone()
{
	return this->telephone;
}

String^ gestPersonnel::getBatiment()
{
	return this->batiment;
}

String^ gestPersonnel::getVille()
{
	return this->ville;
}

DateTime^ gestPersonnel::getDateNaissance()
{
	return this->dateNaissance;
}

DateTime^ gestPersonnel::getDateEmbauche()
{
	return this->dateEmbauche;
}

String^ gestPersonnel::getRue()
{
	return this->rue;
}

void gestPersonnel::setBatiment(String^ batiment)
{
	this->batiment = batiment;
}

void gestPersonnel::setRue(String^ rue)
{
	this->rue = rue;
}

void gestPersonnel::setNom(String^ nom)
{
	this->nom = nom;
}

void gestPersonnel::setPrenom(String^ prenom)
{
	this->prenom = prenom;
}

void gestPersonnel::setIDPERSONNE(int idpersonne)
{
	this->ID_PERSONNE = idpersonne;
}

void gestPersonnel::setIDPERSONNELGERER(int idpersonnelgerer)
{
	this->ID_PERSONNEL_GERER = idpersonnelgerer;
}

void gestPersonnel::setNumVoie(int numVoie)
{
	this->numVoie = numVoie;
}

void gestPersonnel::setEtage(int etage)
{
	this->etage = etage;
}

void gestPersonnel::setEmail(String^ email)
{
	this->email = email;
}

void gestPersonnel::setVille(String^ ville)
{
	this->ville = ville;
}

void gestPersonnel::setDateNaissance(DateTime^ date)
{
	this->dateNaissance = date;
}

void gestPersonnel::setDateEmbauche(DateTime^ date)
{
	this->dateEmbauche = date;
}

void gestPersonnel::setTelephone(String^ telephone)
{
	this->telephone = telephone;
}

void gestPersonnel::setIDVille(int ID)
{
	this->idVille;
}

int gestPersonnel::getIDVille()
{
	return this->idVille;
}