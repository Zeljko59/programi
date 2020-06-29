///3.Napisati program koji imitira poznatu igru "X/O". Igra je predvidena za dva igraca (X i O).
///Oba korisnika trebaju da imaju izbor u koje polje zele unijeti svoj karakter 'X' ili 'O'.
///Nakon svakog unosa ispisati ažuriranu tablu na ekran. Ako je uslov pobjednika ispunjen, ispisati
///ko je pobjednik, ali uzeti u obzir da može biti i izjednaèeno.
///Primjer table (ne mora striktno izgledati ovako):

///   X  |     |
///------------------
///      |  X  |
///------------------
///      |     |  X

#include <stdio.h>
#include <string.h>

int main()
{
    int a=0,b=0,i,j,c,d;
    int izbor=0,izlaz=1;
   char matxo[3][3]={49,50,51,
                     52,53,54,
                     55,56,57};
    int nerjeseno=0;
    B:  ;


do{
        system("cls");
   printf("\tDobro dosli u X,O\n");
   printf("    igra ce uskoro da pocne\n");

printf("Odaberite mjesto pomocu sablona\n\n");
   for(i=0;i<3;i++)///ISPIS MATRICE ZA XO
   {
       for(j=0;j<3;j++)
       {
           if(j==0||j==1)printf("%3c  |",matxo[i][j]);
           if(j==2)printf("%3c",matxo[i][j]);
       }
       printf("\n");
       if(i==0||i==1)printf("-------------------\n");
   }

   printf("\a\a\n-- X -- odaberite mjesto= \n");
   scanf("%d",&izbor);printf("\n");nerjeseno++;
   if(izbor==1)matxo[0][0]='X';
   if(izbor==2)matxo[0][1]='X';
   if(izbor==3)matxo[0][2]='X';
   if(izbor==4)matxo[1][0]='X';
   if(izbor==5)matxo[1][1]='X';
   if(izbor==6)matxo[1][2]='X';
   if(izbor==7)matxo[2][0]='X';
   if(izbor==8)matxo[2][1]='X';
   if(izbor==9)matxo[2][2]='X';
   system("cls");
   printf("\tDobro dosli u X,O\n");
   printf("    igra ce uskoro da pocne\n");

printf("Odaberite mjesto pomocu sablona\n\n");
   for(i=0;i<3;i++)///ISPIS MATRICE ZA XO
   {
       for(j=0;j<3;j++)
       {
           if(j==0||j==1)printf("%3c  |",matxo[i][j]);
           if(j==2)printf("%3c",matxo[i][j]);
       }
       printf("\n");
       if(i==0||i==1)printf("-------------------\n");
   }
    if(matxo[0][0]=='X'&&matxo[0][1]=='X'&&matxo[0][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[1][0]=='X'&&matxo[1][1]=='X'&&matxo[1][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[2][0]=='X'&&matxo[2][1]=='X'&&matxo[2][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][0]=='X'&&matxo[1][1]=='X'&&matxo[2][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[2][0]=='X'&&matxo[1][1]=='X'&&matxo[0][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][0]=='X'&&matxo[1][0]=='X'&&matxo[2][0]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][1]=='X'&&matxo[1][1]=='X'&&matxo[2][1]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][2]=='X'&&matxo[1][2]=='X'&&matxo[2][2]=='X'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    if(nerjeseno==9){printf("Nerjeseno!!!\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}

   printf("\a\a\n-- O -- odaberite mjesto= \n");
   scanf("%d",&izbor);printf("\n");nerjeseno++;
   if(izbor==1)matxo[0][0]='O';
   if(izbor==2)matxo[0][1]='O';
   if(izbor==3)matxo[0][2]='O';
   if(izbor==4)matxo[1][0]='O';
   if(izbor==5)matxo[1][1]='O';
   if(izbor==6)matxo[1][2]='O';
   if(izbor==7)matxo[2][0]='O';
   if(izbor==8)matxo[2][1]='O';
   if(izbor==9)matxo[2][2]='O';
   system("cls");
   printf("\tDobro dosli u X,O\n");
   printf("    igra ce uskoro da pocne\n");

printf("Odaberite mjesto pomocu sablona\n");
   for(i=0;i<3;i++)///ISPIS MATRICE ZA XO
   {
       for(j=0;j<3;j++)
       {
           if(j==0||j==1)printf("%3c  |",matxo[i][j]);
           if(j==2)printf("%3c",matxo[i][j]);
       }
       printf("\n");
       if(i==0||i==1)printf("-------------------\n");
   }

    if(matxo[0][0]=='O'&&matxo[0][1]=='O'&&matxo[0][2]=='O'){printf("\nX je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&izlaz);goto A;}
    else if(matxo[1][0]=='O'&&matxo[1][1]=='O'&&matxo[1][2]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[2][0]=='O'&&matxo[2][1]=='O'&&matxo[2][2]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][0]=='O'&&matxo[1][1]=='O'&&matxo[2][2]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[2][0]=='O'&&matxo[1][1]=='O'&&matxo[0][2]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][0]=='O'&&matxo[1][0]=='O'&&matxo[2][0]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][1]=='O'&&matxo[1][1]=='O'&&matxo[2][1]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    else if(matxo[0][2]=='O'&&matxo[1][2]=='O'&&matxo[2][2]=='O'){printf("\nO je pobjedio\n\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&b);goto A;}
    if(nerjeseno==9){printf("Nerjeseno!!!\n");printf("PONOVITI IGRU 1 - DA  2 - NE ="); scanf("%d",&izlaz);goto A;}

A:  if(b==1){izlaz=1;a++;}
    if(b==2)izlaz=2;
    if(izlaz==1&&a==1){
matxo[0][0]=49;
matxo[0][1]=50;
matxo[0][2]=51;
matxo[1][0]=52;
matxo[1][1]=53;
matxo[1][2]=54;
matxo[2][0]=55;
matxo[2][1]=56;
matxo[2][2]=57;
a=0;b=0;
nerjeseno=0;
goto B;
}
;

}while(izlaz==1);

return 0;
}


