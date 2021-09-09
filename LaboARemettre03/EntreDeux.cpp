// But : Écrire un programme qui demande à l’utilisateur de saisir 3 entiers A, B, C et indique si C est entre A et B ou B et A.
// Auteur : Christopher Baptiste
// Date : 2021-09-09

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Définir les variables

   int A;
   int B;
   int C;

   // Demander d'entrer les nombres entiers

   std::cout << " Veuillez entrer un nombre entier : ";
   std::cin >> A;

   std::cout << " Veuillez entrer un nombre entier : ";
   std::cin >> B;

   std::cout << " Veuillez entrer un nombre entier : ";
   std::cin >> C;

   // Vérifier si "C" est plus grand que "A" et plus petit que "B"

   if (C > A && C < B)
   {
      std::cout << " Le dernier chiffre entré est entre les deux premiers chiffres! \n";
   }

// Vérifier si "C" est plus petit que "A" et plus grand que "B"
   else if (C < A && C > B)
   {
      std::cout << " Le dernier chiffre entré est entre les deux premiers chiffres! \n";
   }
   else // Si ce n'est aucun des deux, ça veut dire que "C" n'est pas entre "A", ni entre "B"
   {
      std::cout << "Le dernier chiffre entré n'est pas entre les deux derniers chiffres! \n";
   }
   
   system("pause"); 
}
//Plan de test
// A | B | C | Bonne réponse |
// 5 | 7 | 6 |       X       |
// 19| 2 | 3 |       X       |
// 10|-10|-1 |       X       |
// 1 | 2 | 3 |       X       |
