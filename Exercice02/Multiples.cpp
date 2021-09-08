//But: Un programme qui permet de lire un entier A et affiche, selon sa valeur, un seul des 4 messages suivants :
//			• A est seulement un multiple de 2.
//			• A est seulement un multiple de 3.
//			• A est à la fois multiple de 2 et de 3.
//			• A n'est ni multiple de 2, ni de 3
//Auteur:	Tom Strohmeier
//Date:		2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration de nos variables programme:
   int A;

   //	Le programme demande un nombre entier à l'utilisateur.
   std::cout << "Veuillez entrer un nombre entier \n";
   std::cin >> A;

   // Le programme test si A est seulement un multiple de 2.
   if (A % 2 == 0 && A % 3 == 0)
   {
      std::cout << "Le nombre " << A << " est à la fois un multiple de 2 et de 3. \n";
   }
   else if (A % 2 == 0)
   {
      std::cout << "Le nombre " << A << " est seulement un multiple de 2. \n";
   }
   else if (A % 3 == 0)
   {
      std::cout << "Le nombre " << A << " est seulement un multiple de 3. \n";
   } 
   else
   {
      std::cout << "Le nombre " << A << " est ni un multipe de 2, ni de 3. \n";
   }

   system("pause");
   return 0;

   /*
   Plan de test:

   Variable A:		résultat attendu:				   Affichage écran:

   -1             -1 est ni 2 ni 3              Le nombre -1 est ni un multipe de 2, ni de 3.
   0              2 et 3                        Le nombre 0 est à la fois un multiple de 2 et de 3.
   1              1 est ni 2 ni 3               Le nombre 1 est ni un multipe de 2, ni de 3.
   2              multiple de 2                 Le nombre 2 est seulement un multiple de 2.
   3              multiple de 3                 Le nombre 3 est seulement un multiple de 3.
   12             2 et 3                        Le nombre 12 est à la fois un multiple de 2 et de 3.
   15             multiple de 3                 Le nombre 15 est seulement un multiple de 3.
   16             multiple de 2                 Le nombre 16 est seulement un multiple de 2.
   18             2 et 3                        Le nombre 18 est à la fois un multiple de 2 et de 3.
   -18            2 et 3                        Le nombre 18 est à la fois un multiple de 2 et de 3.

   */
}