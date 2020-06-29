///2. Napisati program koji imitira igru "Tko želi biti milijunaš". Napraviti odredjenu skalu (min-max), kako bi
///korisnik sa svakim tacnim odgovorom osvojio odredjeni iznos zamisljenog novca(Bodova), a ukoliko igrac napravi
///grešku bodovi se brišu, osim u slucaju da je prešao odredjeni sigurni iznos, gdje je broj bodova jednak tom
///sigurnom iznosu. Isprintati rezultat i zavrsiti program.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int a,b,c,d;
    int izlaz;
    char D[]="D";
    char nizA[]="A";
    char nizB[]="B";
    char nizC[]="C";
char niz[]="r";///zasto sam morao ubaciti random niz da bi sve radilo??????
    //a,b,c,d nizovi za "strcmp"
    char niz1[]="";

        printf("SACEKAJTE trenutak\n\nMOLIMO VAS ODGOVORE PISITE VELIKM SLOVIMA\n\n");
do{

    printf("\t\tDOBRODOSLI U MILIJUNAS\n\n");
    printf("\aPrvo pitanje za 10KM\n 1.Koji je jedini programski jezik koji racunar moze direktno izvrsavati?\n");
    printf("A-Sekvencijalni kod   B-Proceduralni kod\nC-Binarni (masinski) kod   D-Funkcijski kod\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizC)==0){printf("TOCAN ODGOVOR osvojili ste 10KM\n\n");}
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Drugo pitanje za 50KM\n 2.Sa kojim znakom se predstavljaju formateri?\n");
    printf("A- %%   B- #\nC- *   D- &\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizA)==0)printf("TOCAN ODGOVOR osvojili ste 50KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Trece pitanje za 100KM(sigurnosni iznos)\n 3.Kako se zove prvi standardizovani C jezik?\n");
    printf("A- ANSI C   B- ISO C95\nC- ISO C99   D- Klasicni C\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizA)==0)printf("TOCAN ODGOVOR osvojili ste 100KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Cetvrto pitanje za 200KM\n 4.Koja je ekstenzija za fajl izvrsnog koda?\n");
    printf("A- .o   B- .x\nC- .txt   D- .exe\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    a=strcmp(niz1,D);
    if(strcmp(D,niz1)==0)printf("TOCAN ODGOVOR osvojili ste 200KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=100KM\n\n%d",a);goto A;}

    printf("Peto pitanje za 300KM(Sigurnosni iznos)\n 5.Koji operator koristimo ako zelimo \nda pretvorimo jedan tip podatka u drugi tip podatka?\n");
    printf("A- ||   B- cast\nC- sizeof   D- go to\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizB)==0)printf("TOCAN ODGOVOR osvojili ste 300KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=100KM\n\n");goto A;}

    printf("Sesto pitanje za 500KM\n 6.Koju memorijsku klasu varijabli ne mogu imati lokalne varijable?\n");
    printf("A- global   B- extern\nC- static   D- auto\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizB)==0)printf("TOCAN ODGOVOR osvojili ste 500KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=300KM\n\n");goto A;}

     printf("Sedmo pitanje za 700KM(sigurnosni iznos)\n 7.Sta radi funkcija strcat()?\n");
    printf("A- Nalazi karakter u stringu   B- Prekopira jedan string preko drugog\nC-  Uporeduje dva stringa   D- Dodaje jedan na drugi string\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,D)==0)printf("TOCAN ODGOVOR osvojili ste 700KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=300KM\n\n");goto A;}

     printf("Osmo pitanje za 850KM\n 8.Koliko mora biti velik string u kojeg \ntreba da se upise rijec od 9 slova (karaktera) unesenu sa tastature?\n");
    printf("A- 8 elemenata  (niz[8])   B- ne mora imati velièinu (niz[])\nC-  10 elemenata  (niz[10])   D- 9 elemenata (niz[9])\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizC)==0)printf("TOCAN ODGOVOR osvojili ste 850KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=700KM\n\n");goto A;}

    printf("Deveto pitanje za 1000KM(sigurnosni iznos)\n 9.Pomoæu kojeg operatora deklarisemo pokazivacke varijable?\n");
    printf("A- & iza imena pokazivaèke varijable   B- * iza imena pokazivaèke varijable\nC- & ispred imena pokazivaèke varijable   D- * ispred imena pokazivaèke varijable\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,D)==0){printf("TOCAN ODGOVOR osvojili ste \n\n\t\t****\aMILIJUNAS\a****\n\n\tOstvareni iznos=1000KM");izlaz=2;}
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=700KM\n\n");goto A;}

A:izlaz=2;

  }while(izlaz==1);

    return 0;
}
