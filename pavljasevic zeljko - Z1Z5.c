#include<stdio.h>
#include<string.h>
#define PI 3.14
///zadatak za izracunavanje zapremine kocke,piramide i lopte
///5. Napraviti program koji u zavisnosti od odabira, raèuna zapreminu
///jednog od 3 tijela (proizvoljna). Za konstante koristiti pretprocesorku direktivu define.

int main()
{
    int izlaz=0;
    int izbor;

    printf("Zelite li zapoceti  2.- DA   1.- NE\n");
        scanf("%d",&izlaz);
    if(izlaz==2)
    {
    do
    {
        puts("\a\a\n\nIzabrati zeljeni geometrijski oblik za izracunavanje zapremine: \n");
        puts("# KOCKA    - 1\n");
        puts("# LOPTA    - 2\n");
        puts("# PIRAMIDA - 3\n");
        puts("# IZLAZ    - 4\n");
        scanf("%d",&izbor);

        if(izbor==1)
        {
            float a,kocka;
            printf("\nUnesite duzinu stranice kocke a= ");
            scanf("%f",&a);
            kocka=a*a*a;
            printf("\nZapremina kocke=%.2f\n",kocka);
            izlaz=0;
        }else{izlaz=0;}
        if(izbor==2)
        {
            float r,lopta;
            printf("\nUnesite poluprecnik lopte r= ");
            scanf("%f",&r);
            lopta=(4*r*r*r*PI)/3;
            printf("\nZapremina lopte=%.2f\n",lopta);
            izlaz=0;
        }else{izlaz=0;}
        if (izbor==3)
        {
            float H,x,piramida;
            printf("\nUnesite visinu pitamide H= ");
            scanf("%f",&H);
            printf("Unesite osnovnu ivicu pitamide a= ");
            scanf("%f",&x);
            piramida=(x*x*H)/3;
            printf("\nZapremina piramide=%.2f\n",piramida);
            izlaz=0;
        }else{izlaz=0;}

        if(izbor==4)
        {
            izlaz=1;
        }


    }while(!(izlaz==1));
    }
}
