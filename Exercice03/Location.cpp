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
   const float consoEssKilo = 7.6; // Conssomation au 100 klm
   const float prixEss = 1.35; // Prix au litre
   const float prixKiloExtra = 0.05; 
   int nbJour; // Nombre de jour de voyage de l'usager
   int nbKiloTotal; // Kilom�trage de l'usager
   double prixTotal;
   double prixKilo;

   //Le programme demande les informations concernant le nombre de jour du voyage et le nombre de kilom�tre
   std::cout << "Veuillez entrer le nombre de jour du voyage. \n";
   std::cin >> nbJour;

   std::cout << "Veuillez entrer la distance en kilom�trage. \n";
   std::cin >> nbKiloTotal;

   if (nbKiloTotal <= kiloGratuit)
   {
      
      std::cout << "Le prix total pour " << nbJour << " jours et " << nbKiloTotal << " est de : " << prixTotal << "$. \n";
   }







   system("pause");
   return 0;
   /*
   Plan de test:

   (nom variable):		r�sultat attendu:					affichage �cran:

   */
}