/* Requêtes pour créer une ville */
insert into Ville values ('','','');

update Ville
set NOM_VILLE='', CODE_POSTAL=''
where ID_VILLE= ;

select ID_VILLE from Ville;
select NOM_VILLE from Ville;
select CODE_POSTAL from Ville;

select * from Ville;

/* Requêtes pour créer une adresse */

insert into Adresse values ('','','','','','');

update Adresse
set NUMERO_VOIE='', RUE='', BATIMENT='', ETAGE='', ID_VILLE=''
where ID_ADRESSE= ;

select ID_ADRESSE from Adresse;
select NUMERO_VOIE from Adresse;
select RUE from Adresse;
select BATIMENT from Adresse;
select ETAGE from Adresse;
select ID_VILLE from Adresse;

select * from Adresse;

/* Requêtes pour créer un article */

insert into Article values ('','','','','','','','');

update Article
set NOM_ARTICLE='', STOCK='', PRIX_ARTICLE='', SEUIL_APPROVISIONNEMENT='', TVA_ARTICLE='', NATURE='', COULEUR=''
where ID_ARTICLE= ;

select ID_ARTICLE from Article;
select NOM_ARTICLE from Article;
select STOCK from Article;
select PRIX_ARTICLE from Article;
select SEUIL_APPROVISIONNEMENT from Article;
select TVA_ARTICLE from Article;
select NATURE from Article;
select COULEUR from Article;

select * from Article;

/* Requêtes pour créer un moyen de paiement */

insert into Article values ('','');

update Paiement
set NOM_MOYEN_PAIEMENT=''
where ID_MOYEN_PAIEMENT= ;

select ID_MOYEN_PAIEMENT from Paiement;
select NOM_MOYEN_PAIEMENT from Paiement;

select * from Paiement;

/* Requêtes pour créer une personne */

insert into Personne values ('','','','','','');

update Personne
set NOM_PERSONNE='', PRENOM_PERSONNE='', TELEPHONE='', ADRESSE_MAIL='', DATE_NAISSANCE=''
where ID_PERSONNE= ;

select ID_PERSONNE from Personne;
select NOM_PERSONNE from Personne;
select PRENOM_PERSONNE from Personne;
select TELEPHONE from Personne;
select ADRESSE_MAIL from Personne;
select DATE_NAISSANCE from Personne;

select * from Personne;

/* Requêtes pour créer une personnel */

insert into Personnel values ('','','','','','');

update Personnel
set DATE_EMBAUCHE='', MOT_DE_PASSE='', ID_ADRESSE='', ID_PERSONNEL_GERER='', ID_PERSONNE=''
where ID_PERSONNEL= ;

select ID_PERSONNEL from Personnel;
select DATE_EMBAUCHE from Personnel;
select MOT_DE_PASSE from Personnel;
select ID_ADRESSE from Personnel;
select ID_PERSONNEL_GERER from Personnel;
select ID_PERSONNE from Personnel;

select * from Personnel;

/* Requêtes pour créer un client */

insert into Client values ('','','','','')

update Client
set CODE_CLIENT='', ID_ADRESSE='', ID_ADRESSE_2='', ID_PERSONNE=''
where ID_CLIENT= ;

select ID_CLIENT from Client;
select CODE_CLIENT from Client;
select ID_ADRESSE from Client;
select ID_ADRESSE_2 from Client;
select ID_PERSONNE from Client;

select * from Client;

/* Requêtes pour créer une commande */

insert into Commande values ('','','','','')

update Commande
set NUMERO_COMMANDE='', DATE_LIVRAISON='', DATE_EMISSION='', DATE_COMMANDE='', ID_CLIENT=''
where ID_COMMANDE= ;

select ID_COMMANDE from Commande;
select NUMERO_COMMANDE from Commande;
select DATE_LIVRAISON from Commande;
select DATE_EMISSION from Commande;
select DATE_COMMANDE from Commande;
select ID_CLIENT from Commande;

select * from Commande;

/* Requêtes pour créer un paiement */

insert into Paiement values ('','','','','','','','')

update Paiement
set MONTANT_HT='', MONTANT_TVA='', MONTANT_TTC='', NOMBRE_PAIEMENT='', DATE_PAIEMENT='', ID_COMMANDE='', ID_MOYEN_PAIEMENT=''
where ID_PAIEMENT= ;

select ID_PAIEMENT from Paiement;
select MONTANT_HT from Paiement;
select MONTANT_TVA from Paiement;
select MONTANT_TTC from Paiement;
select NOMBRE_PAIEMENT from Paiement;
select DATE_PAIEMENT from Paiement;
select ID_COMMANDE from Paiement;
select ID_MOYEN_PAIEMENT from Paiement;

select * from Paiement;

/* Requêtes pour créer ce qu'il y a dans la commande */

insert into Contenir values ('','','')

update Contenir
set ID_ARTICLE='', QUANTITE=''
where ID_COMMANDE= ;

select ID_COMMANDE from Contenir;
select ID_ARTICLE from Contenir;
select QUANTITE from Contenir;

select * from Contenir;