//But: Un programme qui permet de lire un entier A et affiche, selon sa valeur, un seul des 4 messages suivants :
//			� A est seulement un multiple de 2.
//			� A est seulement un multiple de 3.
//			� A est � la fois multiple de 2 et de 3.
//			� A n'est ni multiple de 2, ni de 3
//Auteur:	Tom Strohmeier
//Date:		2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // D�claration de nos variables programme:
   int A;

   //	Le programme demande un nombre entier � l'utilisateur et le m�morise dans la variable A.
   std::cout << "Veuillez entrer un nombre entier \n";
   std::cin >> A;

   // Le programme test si A est un multiple de 2 et 3 gr�ce � modulo. Si modulo 2 et 3 sont �gales � 0, true.
   if (A % 2 == 0 && A % 3 == 0)
   {
      std::cout << "Le nombre " << A << " est � la fois un multiple de 2 et de 3. \n";
   }

   // Le programme test si A est un multiple de 2 gr�ce � modulo. Si modulo 2 est �gales � 0, true.
   else if (A % 2 == 0)
   {
      std::cout << "Le nombre " << A << " est seulement un multiple de 2. \n";
   }

   // Le programme test si A est un multiple de 3 gr�ce � modulo. Si modulo 3 est �gales � 0, true.
   else if (A % 3 == 0)
   {
      std::cout << "Le nombre " << A << " est seulement un multiple de 3. \n";
   } 

   // Si aucune des conditions pr�c�dentes n'est remplie, A est ni un multiple de 2, ni un de 3.
   else
   {
      std::cout << "Le nombre " << A << " est ni un multipe de 2, ni de 3. \n";
   }

   system("pause");
   return 0;

   /*
   Plan de test:

   Variable A:		r�sultat attendu:				   Affichage �cran:

   -1             -1 est ni 2 ni 3              Le nombre -1 est ni un multipe de 2, ni de 3.
   0              2 et 3                        Le nombre 0 est � la fois un multiple de 2 et de 3.
   1              1 est ni 2 ni 3               Le nombre 1 est ni un multipe de 2, ni de 3.
   2              multiple de 2                 Le nombre 2 est seulement un multiple de 2.
   3              multiple de 3                 Le nombre 3 est seulement un multiple de 3.
   12             2 et 3                        Le nombre 12 est � la fois un multiple de 2 et de 3.
   15             multiple de 3                 Le nombre 15 est seulement un multiple de 3.
   16             multiple de 2                 Le nombre 16 est seulement un multiple de 2.
   18             2 et 3                        Le nombre 18 est � la fois un multiple de 2 et de 3.
   -18            2 et 3                        Le nombre 18 est � la fois un multiple de 2 et de 3.

   */
}