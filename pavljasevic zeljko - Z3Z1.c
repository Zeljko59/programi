///1. Napisati program koji moze izvrsiti osnovne aritmeticke operacije (+,-./,*) sa dva niza od 10
///elemenata koje korisnik treba da unese (vrijednosti mogu ici od 0-99). Rezultat ispisati na ekran,
///a poslije toga korisniku dati mogucnost izbora da li da nastavi sa programom ili da ga napusti.

/// Rezultat ispisati u sljedecem obliku (za recimo operaciju +):
///  1  2  3    4    5   6   7   8   9  10
///  +  +  +    +    +   +   +   +   +   +
///  2  4  6    8    9  11  32  51  35  53
///  --------------------------------------------
///  3  6  9  12  14  17  39  59  44  63
#include<stdio.h>


int main()
{
    int izlaz,izbor;
    int i,x,y;
    int niz1[10],niz2[10],rez[10];
do{
        printf("Unesite cifre od 0-99 u prvi niz\n");
   for(i=0;i<10;i++)
   {
       printf("Unesite %d. broj niza: ",i+1);
       scanf("%2d",&niz1[i]);
   }
    printf("\nUnesite cifre od 0-99 u drugi niz\n");
      for(i=0;i<10;i++)
   {
       printf("Unesite %d. broj niza: ",i+1);
       scanf("%2d",&niz2[i]);
   }///unosimo nizove
A:
   printf("-Izaberite operacije-\n");
   printf("MNOZENJE  - 1\n");
   printf("DJELJENJE  - 2\n");
   printf("ZBRAJANJE  - 3\n");
   printf("ODUZIMANJE - 4");
   printf("\nUnesite odgovor: ");
   scanf("%d",&izbor);

   if(izbor==3){
for(i=0;i<10;i++){
       printf("%3d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf(" +  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%3d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%3d ",niz1[i]+niz2[i]);
   }
  }

  if(izbor==1){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  *  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4.1f ",(float)niz1[i]*(float)niz2[i]);
   }
  }

  if(izbor==2){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  /  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4.1f ",(float)niz1[i]/(float)niz2[i]);
   }
  }

  if(izbor==4){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  -  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4d ",niz1[i]-niz2[i]);
   }
  }
printf("\n\n\aponoviti program sa ponovnim unosenjem nizova \n\t\tDA - 1 NE - 2\nAko zelite samo ponoviti operacije PONOVO - 3");
printf("\nUnesite odgovor: ");
scanf("%d",&x);
if(x==3)goto A;
else if(x==2)izlaz=2;
else izlaz=1;
}while(izlaz==1);
    return 0;
}
