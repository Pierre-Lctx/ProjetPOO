/* Commande pour automatisation du prix TTC dans Paiement */

update Paiement
set Paiement.MONTANT_TTC=(
select Paiement.MONTANT_HT+Paiement.MONTANT_TVA
from Paiement
where Paiement.ID_PAIEMENT=1)
where Paiement.ID_PAIEMENT=1;