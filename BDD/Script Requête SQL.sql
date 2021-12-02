select
 avg(MONTANT_TTC)
from Paiement;

select sum(MONTANT_HT)
from Paiement
where month(DATE_PAIEMENT)=11 and year(DATE_PAIEMENT)=2021;

select NOM_ARTICLE, NATURE, COULEUR, STOCK, SEUIL_APPROVISIONNEMENT
from ARTICLE
where STOCK<SEUIL_APPROVISIONNEMENT;

select sum(Paiement.MONTANT_TTC)
from Paiement
inner join Commande
on Paiement.ID_COMMANDE=Commande.ID_COMMANDE
inner join Client
on Commande.ID_CLIENT=Client.ID_CLIENT
where Client.ID_CLIENT=1;

select top(10) sum(Contenir.QUANTITE), Article.NOM_ARTICLE, Article.NATURE, Article.COULEUR
from Contenir
inner join Article
on Contenir.ID_ARTICLE=Article.ID_ARTICLE
group by Contenir.ID_ARTICLE, NOM_ARTICLE, Article.NATURE, Article.COULEUR
order by sum(QUANTITE) desc;

select top(10) sum(Contenir.QUANTITE), Article.NOM_ARTICLE, Article.NATURE, Article.COULEUR
from Contenir
inner join Article
on Contenir.ID_ARTICLE=Article.ID_ARTICLE
group by Contenir.ID_ARTICLE, NOM_ARTICLE, Article.NATURE, Article.COULEUR
order by sum(QUANTITE) asc;

select sum(STOCK*PRIX_ARTICLE)
from Article;

select sum(STOCK*(PRIX_ARTICLE+TVA_ARTICLE))
from Article;