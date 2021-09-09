// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée.

// Auteur : Christopher Baptiste
// Date : 2021-09-09

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   int km;
   int durée;
   int rkm;
   int rdurée;
   int kmPermit;
   int kmSup;
   double litres;
   int prixEssence;
   int prixTotal;

   
   
   

   std::cout << " Veuillez entrer le nombre de kilomètres parcourus : ";
   std::cin >> km;
   
   std::cout << " Veuillez entrer la durée de votre voyage (en jour) : ";
   std::cin >> durée;

   litres = km * 0.076;

   kmPermit = durée * 250;
   
   if (km > kmPermit)
   {
      kmSup = kmPermit - km;
   }

   if (kmSup > 0)
   {
      km = kmSup * 0.05;
   }
   
   prixEssence = litres * 1.35;


   







}