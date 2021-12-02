/* Script de création des différentes tables de la BDD */

CREATE TABLE Ville(
        ID_VILLE    Int    NOT NULL ,
        NOM_VILLE   Char (80) NOT NULL,
        CODE_POSTAL Varchar (5) NOT NULL,
	PRIMARY KEY (ID_VILLE)
);

CREATE TABLE Adresse(
        ID_ADRESSE  Int    NOT NULL ,
        NUMERO_VOIE Varchar (5) NOT NULL ,
        RUE         Char (150) NOT NULL ,
        BATIMENT    Char (80) NOT NULL ,
        ETAGE       Varchar (5) NOT NULL ,
        ID_VILLE    Int NOT NULL,
        PRIMARY KEY (ID_ADRESSE),
        FOREIGN KEY (ID_VILLE) REFERENCES Ville(ID_VILLE)
);

CREATE TABLE Article(
        ID_ARTICLE              Int    NOT NULL ,
        NOM_ARTICLE             Char (150) NOT NULL ,
        STOCK                   Varchar (5) NOT NULL ,
        PRIX_ARTICLE            Float NOT NULL ,
        SEUIL_APPROVISIONNEMENT Float NOT NULL ,
        TVA_ARTICLE             Float NOT NULL ,
        NATURE                  Char (150) NOT NULL ,
        COULEUR                 Char (150) NOT NULL,
	PRIMARY KEY (ID_ARTICLE)
);

CREATE TABLE Personne(
        ID_PERSONNE     Int    NOT NULL ,
        NOM_PERSONNE    Char (150) NOT NULL ,
        PRENOM_PERSONNE Char (150) NOT NULL ,
        TELEPHONE       Varchar (10) NOT NULL ,
        ADRESSE_MAIL    Varchar (150) NOT NULL ,
        DATE_NAISSANCE  Date NOT NULL,
	PRIMARY KEY (ID_PERSONNE)
);

CREATE TABLE Moyen_paiement(
        ID_MOYEN_PAIEMENT  Int    NOT NULL ,
        NOM_MOYEN_PAIEMENT Char (80) NOT NULL,
	PRIMARY KEY (ID_MOYEN_PAIEMENT)
);

CREATE TABLE Client(
        ID_CLIENT    Int    NOT NULL ,
        CODE_CLIENT  Varchar (10) NOT NULL ,
        ID_ADRESSE   Int NOT NULL ,
        ID_ADRESSE_2 Int NOT NULL ,
        ID_PERSONNE  Int NOT NULL,
        PRIMARY KEY (ID_CLIENT),
        FOREIGN KEY (ID_ADRESSE) REFERENCES Adresse(ID_ADRESSE),
        FOREIGN KEY (ID_ADRESSE_2) REFERENCES Adresse(ID_ADRESSE),
        FOREIGN KEY (ID_PERSONNE) REFERENCES Personne(ID_PERSONNE)
);

CREATE TABLE Commande(
        ID_COMMANDE     Int    NOT NULL ,
        NUMERO_COMMANDE Varchar (15) ,
        DATE_LIVRAISON  Date NOT NULL ,
        DATE_EMISSION   Date NOT NULL ,
        DATE_COMMANDE   Date NOT NULL ,
        ID_CLIENT       Int NOT NULL,
	PRIMARY KEY (ID_COMMANDE),
        FOREIGN KEY (ID_CLIENT) REFERENCES Client(ID_CLIENT)
);


CREATE TABLE Paiement(
        ID_PAIEMENT       Int    NOT NULL ,
        MONTANT_HT        Float ,
        MONTANT_TVA       Float ,
        MONTANT_TTC       Float ,
        NOMBRE_PAIEMENT   Int NOT NULL ,
        DATE_PAIEMENT     Date NOT NULL ,
        ID_COMMANDE       Int NOT NULL ,
        ID_MOYEN_PAIEMENT Int NOT NULL,
	PRIMARY KEY (ID_PAIEMENT),
        FOREIGN KEY (ID_COMMANDE) REFERENCES Commande(ID_COMMANDE),
        FOREIGN KEY (ID_MOYEN_PAIEMENT) REFERENCES Moyen_paiement(ID_MOYEN_PAIEMENT)
);

CREATE TABLE Contenir(
        ID_COMMANDE Int NOT NULL ,
        ID_ARTICLE  Int NOT NULL ,
        QUANTITE    Int NOT NULL,
	PRIMARY KEY (ID_COMMANDE,ID_ARTICLE),
        FOREIGN KEY (ID_COMMANDE) REFERENCES Commande(ID_COMMANDE),
        FOREIGN KEY (ID_ARTICLE) REFERENCES Article(ID_ARTICLE)

);

CREATE TABLE Personnel(
        ID_PERSONNEL       Int    NOT NULL ,
        DATE_EMBAUCHE      Date NOT NULL ,
        MOT_DE_PASSE       Varchar (150) NOT NULL ,
        ID_ADRESSE         Int NOT NULL ,
        ID_PERSONNEL_GERER Int ,
        ID_PERSONNE        Int NOT NULL,
	PRIMARY KEY (ID_PERSONNEL),
        FOREIGN KEY (ID_ADRESSE) REFERENCES Adresse(ID_ADRESSE),
        FOREIGN KEY (ID_PERSONNEL_GERER) REFERENCES Personnel(ID_PERSONNEL),
        FOREIGN KEY (ID_PERSONNE) REFERENCES Personne(ID_PERSONNE)
);