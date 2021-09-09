/*But:      Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
            automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises
            par le requérant.
            Les différentes sources de dépenses sont :
            o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
            o La consommation du véhicule est 7.6 litres aux 100 km.
            o 1 litre d’essence coûte 1.35$
            o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.
*/
//Auteur:   Tom Strohmeier
//Date:     2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration de nos variables programme:
   const int locationPrixJour = 45; // Prix par jour de base
   const int kiloGratuit = 250; // Klm gratuit par jour
   const float consoEssKilo = 0.076; // Conssomation essence au kilomètre
   const float prixEss = 1.35; // Prix au litre
   const float prixKiloExtra = 0.05; // Prix du klm extra apres 250 klm gratuit par jour
   int nbJour; // Nombre de jour de voyage de l'usager
   int nbKiloTotal; // Kilométrage de l'usager
   double total;


   //Le programme demande les informations concernant le nombre de jour du voyage et le nombre de kilomètre
   std::cout << "Veuillez entrer le nombre de jour du voyage. \n";
   std::cin >> nbJour;

   std::cout << "Veuillez entrer la distance en kilométrage. \n";
   std::cin >> nbKiloTotal;

   if (nbKiloTotal > nbJour * kiloGratuit)
   {
      total = nbKiloTotal - (nbJour * kiloGratuit);
      total = prixEss * (nbKiloTotal * consoEssKilo) + (prixKiloExtra * total) + (nbJour * locationPrixJour);
      std::cout << "Pour " << nbJour << " jours de location et " << nbKiloTotal << " klm, vous devez débourser: " << total << "$. \n";
   }
   else if (nbKiloTotal <= nbJour * kiloGratuit)
   {
      total = prixEss * (nbKiloTotal * consoEssKilo) + (nbJour * locationPrixJour);
      std::cout << "Pour " << nbJour << " jours de location et " << nbKiloTotal << " klm, vous devez débourser: " << total << "$. \n";
   }

   system("pause");
   return 0;

   /*
   Plan de test:

   Jour, Klm:		Résultat attendu:					Affichage écran:
   2,600           156.56                       Pour 2 jours de location et 600 klm, vous devez débourser: 156.56$.
   2,500           141.3                        Pour 2 jours de location et 500 klm, vous devez débourser: 141.3$.
   -1, 200         erreur                       erreur
   */
}

// KM Je n'ai pas établie de regle si les valeurs donné par l'utilisateur sont 0 ou négative