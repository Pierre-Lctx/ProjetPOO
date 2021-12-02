/* Script d'insertion des données dans la BDD */

insert into Ville
	values
	('1','Paris','75000'),
	('2','Toulouse','31000'),
	('3','Nice','06000'),
	('4','Nantes','44000'),
	('5','Montpellier','67000'),
	('6','Bordeaux','34000'),
	('7','Lille','33000'),
	('8','Rennes','59000'),
	('9','Reims','35000'),
	('10','Toulon','51100'),
	('11','Grenoble','83000'),
	('12','Rouen','76000'),
	('13','Perpignan','66000'),
	('14','Caen','14000'),
	('15','Brest','29200');

insert into Adresse
	values
	('1','5','rue des fleuves','Maison','0','1'),
	('2','12','rue des mandolines','Appartement','1','3'),
	('3','24','avenue jeanne d arc','Appartement','2','6'),
	('4','35','rue du général','Dépôt','0','9'),
	('5','12','avenue des fleurs','Maison','0','1'),
	('6','122','zone industrielle - matériel','Hangar','0','2'),
	('7','34','avenue de Turing','Hangar','0','12'),
	('8','4','rue des maisons','Maison','0','13'),
	('9','56','avenue des étudiants','Appartement','1','11'),
	('10','53','rue de la classe des élites','Maison','0','13');

insert into Article
	values
	('1','Circuit LM311SMD CMS (Ve)','15000','0.42','1000','0.08','Cuivre','Vert'),
	('2','Circuit LM311SMD CMS (Ro)','15000','0.42','1000','0.08','Cuivre','Rouge'),
	('3','Circuit LM311SMD CMS (Ble)','15000','0.42','1000','0.08','Cuivre','Bleu'),
	('4','Régulateur L7805CV (No)','15000','0.42','2000','0.08','Cuivre','Noir'),
	('5','Circuit EPLDS MACH130-15 (Ve)','15000','9.96','1000','1.99','Cuivre','Vert'),
	('6','Circuit MACH131-15 (Ve)','20000','8.00','2000','1.60','Cuivre','Vert'),
	('7','Photorésistances LDR04 (No)','2000','0.67','500','0.13','Cuivre','Noir'),
	('8','Photorésistances LDR07 (No)','1000','0.63','2000','0.12','Cuivre','Noir'),
	('9','Résistance CMS 0805 (No)','15000','4.08','1000','0.82','Cuivre','Noir'),
	('11','Résistance CMS1K8 (No)','15000','0.25','10000','0.05','Cuivre','Noir'),
	('12','Circuit cuivre CU155AD (Ve)','30000','3.83','1000','0.17','Cuivre','Vert'),
	('13','Câble mâles/mâles (Bla)','15000','0.42','1000','0.38','Plastique','Blanc'),
	('14','Câbles mâles/femelles (Bla)','15000','0.42','1000','0.38','Plastique','Blanc'),
	('15','Câbles mâles/femelles (No)','15000','0.43','1000','0.39','Plastique','Noir'),
	('16','Câbles femelles/femelles (Bla)','15000','0.42','1000','0.38','Plastique','Blanc'),
	('17','Circuit TLCD271CD CMS (Ve)','20000','0.50','2000','0.10','Cuivre','Vert'),
	('18','Transistor BC547C (No)','30000','0.13','10000','0.02','Cuivre','Noir');

insert into Personne
	values
	('1','DEHURTEVENT','Hugo','0439284918','hugo.dehurtevent@viacesi.fr','1999-03-23'),
	('2','GOSSET','Olivier','0829392850','olivier.gosset@viacesi.fr','1980-07-08'),
	('3','CAPET','Audric','0937294029','audric.capet@viacesi.fr','1998-08-17'),
	('4','FAUVEL','Matteo','0638929381','matteo.fauvel@viacesi.fr','1990-01-21'),
	('5','LE CHATREUX','Pierre','0729817463','pierre.lechatreux@viacesi.fr','2001-12-21'),
	('6','LE RATE','Baptiste','0237849528','baptiste.lerate@viacesi.fr','2000-10-04');

insert into Client
	values
	('1','HUDE1999','5','6','1'),
	('2','AUCA1998','4','7','3'),
	('3','OLGO1980','9','9','2');

insert into Moyen_paiement
	values
	('1','Carte Bancaire'),
	('2','Virement'),
	('3','Chèque'),
	('4','Espèce'),
	('5','Paypal');

insert into Commande
	values
	('1','HUDE2021TOU001','2021-10-14','2021-10-13','2021-10-12','1'),
	('2','OLGO2021GRE002','2021-11-06','2021-11-05','2021-11-01','2'),
	('3','AUCA2021ROU003','2021-11-23','2021-11-23','2021-11-23','3');

insert into Paiement
	values
	('1','11656','1864','13520','3','2021-10-27','1','2'),
	('2','19966','3864','23830','1','2021-11-22','2','5'),	
	('3','734','286','1020','2','2021-11-27','3','1');

insert into Personnel
	values
	('1','2021-11-15','test','1','1','6'),
	('2','2021-11-19','tableau','2','1','5'),
	('3','2021-11-20','cantine','3','2','4');

insert into Contenir
	values
	('1','1','100'),
	('1','3','10000'),
	('1','5','200'),
	('1','7','2000'),
	('1','13','600'),
	('1','12','1100'),
	('2','2','300'),
	('2','6','2400'),
	('3','14','500'),
	('3','18','800'),
	('3','4','1000');