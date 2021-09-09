// But : Écrire un programme qui permet de lire un entier A et affiche si :
// A est seulement un multiple de 2.       [1]
// A est seulement un multiple de 3.       [2]
// A est à la fois multiple de 2 et de 3.  [3]
// A n'est ni multiple de 2, ni de 3       [4]
// Auteur : Christopher Baptiste
// Date : 2021-09-09

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Définir la variable

   int A;

   // Demander d'entrer un nombre entier

   std::cout << " Veuillez entrer un nombre entier : ";
   std::cin >> A;

   // Vérifier si "A" est un multiple de 2 et de 3! 
   if (A % 2 == 0 && A % 3 == 0) //Très important de commencer par lui, sinon si, par exemple, on commence par celui qui vérifie si "A" est un multiple de 2 et que c'estun multiple de 2,
                                 //l'opération n'ira pas vérifier si c'est aussi un multiple de 3
   {
      std::cout << A << " est à la fois un multiple de 2 et de 3 \n"; 
   }
   else if (A % 2 != 0 && A % 3 != 0) // Vérifier si "A" n'est ni un multiple de 2, ni un multiple de 3
   {
      std::cout << A << " n'est ni multiple de 2, ni de 3 \n";
   }
   else if (A % 2 == 0) // Vérifier si "A" est seulement un multiple de 2
   {
      std::cout << A << " est seulement un multiple de 2 \n";
   }
   else // Si aucune autres vérifications ne fonctionnent, alors c'est automatiquement un multiple de 3
   {
      std::cout << A << " est seulement un multiple de 3 \n"; 
   }

   system("pause");

}
//Plan de tests
// A  | Réponse obtenue (voir la haut de la page pour la légende) |
// 12 | 3
// 7  | 4
// 4  | 1
// 9  | 2
//-12 | 3
// -7 | 4
// -4 | 1
// -9 | 2
//100 | 1
