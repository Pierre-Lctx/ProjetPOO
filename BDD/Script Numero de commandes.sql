/* Commande pour automatisation du numéro de commandes */

update Commande
set Commande.NUMERO_COMMANDE=(
select concat (LEFT(upper(Personne.PRENOM_PERSONNE),2),'',LEFT(upper(Personne.NOM_PERSONNE),2),'',YEAR(Commande.DATE_COMMANDE),'',LEFT(upper(Ville.NOM_VILLE),3),'',Commande.ID_COMMANDE)
from Commande
inner join Client
on Commande.ID_CLIENT=Client.ID_CLIENT
inner join Adresse
on Client.ID_ADRESSE_2=Adresse.ID_ADRESSE
inner join Ville
on Adresse.ID_VILLE=Ville.ID_VILLE
inner join Personne
on Client.ID_PERSONNE=Personne.ID_PERSONNE
where ID_COMMANDE=1)
where ID_COMMANDE=1;