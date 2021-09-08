//But:      Le programme demande � l�utilisateur de saisir 3 entiers A, B, C. Le programme indique si C est compris entre A et B ou C 
//          est compris entre B et A dans une phrase claire et compr�hensible indiquant les valeurs entr�es par l'utilisateur.
//Auteur:   Tom Strohmeier
//Date:     2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // D�claration de nos variables programme:
   int A;
   int B;
   int C;




   // Le programme demande un premier nombre entier � l'utilisateur et m�morise la valeur dans la variable A.
   std::cout << "Veuillez entrer un premier nombre entier. \n";
   std::cin >> A;

   // Le programme demande un deuxi�me nombre entier � l'utilisateur et m�morise la valeur dans la variable B.
   std::cout << "Veuillez entrer un deuxi�me nombre entier. \n";
   std::cin >> B;

   // Le programme demande un trois�me nombre entier � l'utilisateur et m�morise la valeur dans la variable C.
   std::cout << "Veuillez entrer un troisi�me nombre entier. \n";
   std::cin >> C;

   /* Test entr�es valeurs et affichage (Fonctionne)
      std::cout << "Vos nombre entier sont :" << A << ", " << B << " et " << C << std::endl;
   */

   // Le programme va �tablir si: C est compris entre A et B ou C est compris entre B et A et affiche le r�sultat � l'�cran.
   if (C >= A && C <= B)
   {
      std::cout << "Le nombre " << C << " est compris entre " << A << " et " << B << std::endl;
   }
   else if (C >= B && C <= A)
   {
      std::cout << "Le nombre " << C << " est compris entre " << B << " et " << A << std::endl;
   }
   else
   {// (Si C est plus petit que A et C est plus petit que B et A est plus petit que B) OU 
    // (si C est plus grand que A et C est plus grand que B et A est plus petit que B) affiche un message
      if (C < A && C < B && A < B || C > A && C > B && A < B)
      {
         std::cout << "Le nombre " << C << " n'est pas compris entre " << A << " et " << B << std::endl;
      }// (Si C est plus petit que A et C est plus petit que B et A est plus grand que B) OU
       // (si C est plus grand que A et C est plus grand que B et A est plus grand que B) affiche un message
      else if (C < A && C < B && A > B || C > A && C > B && A > B)
      {
         std::cout << "Le nombre " << C << " n'est pas compris entre " << B << " et " << A << std::endl;
      }// (Si C est plus petit que A) OU ( C est plus grand que A ) ET A est �gal � B, affiche un message
      else if (C < A || C > A && A == B)
      {
         std::cout << "Le nombre " << C << " n'est pas compris entre " << A << " et " << B << std::endl;
      }
   }


   system("pause");
   return 0;

   /*
   Plan de test: ( On test seulement C dans ce programme )

   Variables (A,B,C):		R�sultat attendu:					Affichage �cran:
   1,2,3                   3 pas entre 1 et 2            Le nombre 3 n'est pas compris entre 1 et 2
   1,3,2                   2 est entre 1 et 3            Le nombre 2 est compris entre 1 et 3
   3,1,2                   2 est entre 1 et 3            Le nombre 2 est compris entre 1 et 3
   1,1,2                   2 pas entre 1 et 1            Le nombre 2 n'est pas compris entre 1 et 1
   2,1,1                   1 est entre 1 et 2            Le nombre 1 est compris entre 1 et 2
   1,1,1                   1 est entre 1 et 1            Le nombre 1 est compris entre 1 et 1
   1,2,1                   1 est entre 1 et 2            Le nombre 1 est compris entre 1 et 2
   0,1,1                   1 est entre 0 et 1            Le nombre 1 est compris entre 0 et 1
   */

   // Note � Karine M = J'ai perdu 2 kilo � r�flechir pour trouver comment �crire ce programme :-D 
}