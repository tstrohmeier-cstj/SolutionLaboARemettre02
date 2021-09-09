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
   const int locationPrixJour = 45; // Prix par jour de base
   const int kiloGratuit = 250; // Klm gratuit par jour
   const float consoEssKilo = 0.076; // Conssomation essence au kilom�tre
   const float prixEss = 1.35; // Prix au litre
   const float prixKiloExtra = 0.05; // Prix du klm extra apres 250 klm gratuit par jour
   int nbJour; // Nombre de jour de voyage de l'usager
   int nbKiloTotal; // Kilom�trage de l'usager
   double total;


   //Le programme demande les informations concernant le nombre de jour du voyage et le nombre de kilom�tre
   std::cout << "Veuillez entrer le nombre de jour du voyage. \n";
   std::cin >> nbJour;

   std::cout << "Veuillez entrer la distance en kilom�trage. \n";
   std::cin >> nbKiloTotal;

   if (nbKiloTotal > nbJour * kiloGratuit)
   {
      total = nbKiloTotal - (nbJour * kiloGratuit);
      total = prixEss * (nbKiloTotal * consoEssKilo) + (prixKiloExtra * total) + (nbJour * locationPrixJour);
      std::cout << "Pour " << nbJour << " jours de location et " << nbKiloTotal << " klm, vous devez d�bourser: " << total << "$. \n";
   }
   else if (nbKiloTotal <= nbJour * kiloGratuit)
   {
      total = prixEss * (nbKiloTotal * consoEssKilo) + (nbJour * locationPrixJour);
      std::cout << "Pour " << nbJour << " jours de location et " << nbKiloTotal << " klm, vous devez d�bourser: " << total << "$. \n";
   }

   system("pause");
   return 0;

   /*
   Plan de test:

   Jour, Klm:		R�sultat attendu:					Affichage �cran:
   2,600           156.56                       Pour 2 jours de location et 600 klm, vous devez d�bourser: 156.56$.
   2,500           141.3                        Pour 2 jours de location et 500 klm, vous devez d�bourser: 141.3$.
   -1, 200         erreur                       erreur
   */
}

// KM Je n'ai pas �tablie de regle si les valeurs donn� par l'utilisateur sont 0 ou n�gative