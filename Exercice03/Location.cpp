// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e.

// Auteur : Christopher Baptiste
// Date : 2021-09-09

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   int km;
   int dur�e;
   int rkm;
   int rdur�e;
   int kmPermit;
   int kmSup;
   double litres;
   int prixEssence;
   int prixTotal;

   
   
   

   std::cout << " Veuillez entrer le nombre de kilom�tres parcourus : ";
   std::cin >> km;
   
   std::cout << " Veuillez entrer la dur�e de votre voyage (en jour) : ";
   std::cin >> dur�e;

   litres = km * 0.076;

   kmPermit = dur�e * 250;
   
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