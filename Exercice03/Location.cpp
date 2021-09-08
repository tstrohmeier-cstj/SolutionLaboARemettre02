/*But:      �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
            automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont soumises
            par le requ�rant.
            Les diff�rentes sources de d�penses sont :
            o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
            o La consommation du v�hicule est 7.6 litres aux 100 km.
            o 1 litre d�essence co�te 1.35$
            o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.
*/
//Auteur:   Tom Strohmeier
//Date:     2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // D�claration de nos variables programme:
   const int locationPrixJour = 45;
   const int kiloGratuit = 250;
   const float consoEssKilo = 0.076; // Conssomation essence au kilom�tre
   const float prixEss = 1.35; // Prix au litre
   const float prixKiloExtra = 0.05; 
   int nbJour; // Nombre de jour de voyage de l'usager
   int nbKiloTotal; // Kilom�trage de l'usager
   double total;


   //Le programme demande les informations concernant le nombre de jour du voyage et le nombre de kilom�tre
   std::cout << "Veuillez entrer le nombre de jour du voyage. \n";
   std::cin >> nbJour;

   std::cout << "Veuillez entrer la distance en kilom�trage. \n";
   std::cin >> nbKiloTotal;

   if (nbKiloTotal <= kiloGratuit)
   {
      total = (locationPrixJour * nbJour) + prixEss * (nbKiloTotal * 0.76);
      std::cout << "Le prix total pour " << nbKiloTotal << " klm et " << nbJour << " jours de voyage est de: " << total << std::endl;
   }
   else
   {
      total = (locationPrixJour * nbJour) + prixEss * (nbKiloTotal * 0.76) + 0.05 * (nbKiloTotal - 250);
      std::cout << "Le prix total pour " << nbKiloTotal << " klm et " << nbJour << " jours de voyage est de: " << total << std::endl;
   }

   system("pause");
   return 0;

   /*
   Plan de test:

   Jour, Klm:		R�sultat attendu:					Affichage �cran:
   1,250          301,5                         Le prix total pour 250 klm et 1 jours de voyage est de: 301.5
   1, 300         355.3                         Le prix total pour 300 klm et 1 jours de voyage est de: 355.3
   -1, 250        


   */
}