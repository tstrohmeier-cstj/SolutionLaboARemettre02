//But:      Le programme demande à l’utilisateur de saisir 3 entiers A, B, C. Le programme indique si C est compris entre A et B ou C 
//          est compris entre B et A dans une phrase claire et compréhensible indiquant les valeurs entrées par l'utilisateur.
//Auteur:   Tom Strohmeier
//Date:     2021-09-08

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration de nos variables programme:
   int A;
   int B;
   int C;




   // Le programme demande un premier nombre entier à l'utilisateur et mémorise la valeur dans la variable A.
   std::cout << "Veuillez entrer un premier nombre entier. \n";
   std::cin >> A;

   // Le programme demande un deuxième nombre entier à l'utilisateur et mémorise la valeur dans la variable B.
   std::cout << "Veuillez entrer un deuxième nombre entier. \n";
   std::cin >> B;

   // Le programme demande un troisème nombre entier à l'utilisateur et mémorise la valeur dans la variable C.
   std::cout << "Veuillez entrer un troisième nombre entier. \n";
   std::cin >> C;

   /* Test entrées valeurs et affichage (Fonctionne)
      std::cout << "Vos nombre entier sont :" << A << ", " << B << " et " << C << std::endl;
   */

   // Le programme va établir si: C est compris entre A et B ou C est compris entre B et A et affiche le résultat à l'écran.
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
      }// (Si C est plus petit que A) OU ( C est plus grand que A ) ET A est égal à B, affiche un message
      else if (C < A || C > A && A == B)
      {
         std::cout << "Le nombre " << C << " n'est pas compris entre " << A << " et " << B << std::endl;
      }
   }


   system("pause");
   return 0;

   /*
   Plan de test: ( On test seulement C dans ce programme )

   Variables (A,B,C):		Résultat attendu:					Affichage écran:
   1,2,3                   3 pas entre 1 et 2            Le nombre 3 n'est pas compris entre 1 et 2
   1,3,2                   2 est entre 1 et 3            Le nombre 2 est compris entre 1 et 3
   3,1,2                   2 est entre 1 et 3            Le nombre 2 est compris entre 1 et 3
   1,1,2                   2 pas entre 1 et 1            Le nombre 2 n'est pas compris entre 1 et 1
   2,1,1                   1 est entre 1 et 2            Le nombre 1 est compris entre 1 et 2
   1,1,1                   1 est entre 1 et 1            Le nombre 1 est compris entre 1 et 1
   1,2,1                   1 est entre 1 et 2            Le nombre 1 est compris entre 1 et 2
   0,1,1                   1 est entre 0 et 1            Le nombre 1 est compris entre 0 et 1
   */

   // Note à Karine M = J'ai perdu 2 kilo à réflechir pour trouver comment écrire ce programme :-D 
}