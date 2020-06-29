#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
struct voz
{
    string kod;
    int lokomotiva, putnik, teret, stolice, sto;
    voz *slijedeci;
};
 
voz *start_lok, *novi, *zadnji;
void *kreirajkupe(), *kreirajlok(), *kreirajrestoran(), *kreirajteret(), *kreirajkraj(), *upisdatoteka();
void *provjera(), *ispispocetak(), *provjerateret(), *provjeraputnik(), *nadjimjesto(), *nadjiteret(), *ispisdatoteka();
int meni();
int r=0, t=0, izbor, br_k=0, br_t=0, red=0;
int main()
{
    int opcija=0, opcija2=0;
    while (opcija!=13)
    {
        opcija=meni();
        switch (opcija)
        {
            case 1:
                system("CLS");
                kreirajlok();
                break;
            case 2:
                system("CLS");
                kreirajkupe();
                break;
            case 3:
                system("CLS");
                kreirajteret();
                break;
            case 4:
                system("CLS");
                kreirajrestoran();
                break;
            case 5:
                system("CLS");
                ispispocetak();
                break;
            case 6:
                system("CLS");
                provjera();
                break;
            case 7:
                system("CLS");
                provjeraputnik();
                break;
            case 8:
                system("CLS");
                provjerateret();
                break;
            case 9:
                system("CLS");
                nadjimjesto();
                break;
            case 10:
                system("CLS");
                nadjiteret();
                break;
            case 11:
                system("CLS");
                ispisdatoteka();
                cout<<"Ispisano u datoteku"<<endl;
                break;
            case 12:
                system("CLS");
                upisdatoteka();
                cout<<"Citanje zavrseno"<<endl;
                break;
            case 13:
                break;
            default:
                system("CLS");
                cout<<"Pogresan izbor"<<endl;
                break;
        }
    }
    return 0;
}
 
int meni()
{
    cout<<"*************************************************"<<endl;
    cout<<"Dodavanje vagona"<<endl;
    cout<<"(1) Lokomotiva"<<endl;
    cout<<"(2) Putnicki vagon"<<endl;
    cout<<"(3) Teretni vagon"<<endl;
    cout<<"(4) Restoran"<<endl;
    cout<<"Ispisivanje podataka o vozu"<<endl;
    cout<<"(5) Ispisivanje podataka o svim vagonima"<<endl;
    cout<<"(6) Ispisivanje ukupnog broja putnika i tereta u vozu"<<endl;
    cout<<"(7) Ispisivanje broja putnika po vagonima"<<endl;
    cout<<"(8) Ispisivanje tereta po vagonima"<<endl;
    cout<<"Pretrazivanje voza i izmjena podataka"<<endl;
    cout<<"(9) Pronalazenje prvog vagona u kome ima x slobodnih mjesta; dodavanje x putnika"<<endl;
    cout<<"(10) Pronalazenje prvog vagona u koji se moze utovariti x kg robe, dodavanje x kg robe"<<endl;
    cout<<"(11) Upisivanje podataka o vozu u datoteku"<<endl;
    cout<<"(12) Ucitavanje podataka o vozu iz datoteke"<<endl;
    cout<<"(13) Kraj"<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"Vas izbor: ";
    cin>>izbor;
    return izbor;
}
 
void *kreirajkraj()
{
    novi=new voz;
    if (start_lok==NULL)
        start_lok=novi;
    else
    {
        zadnji=start_lok;
        while(zadnji->slijedeci!=NULL)
        {
            zadnji=zadnji->slijedeci;
        }
        zadnji->slijedeci=novi;
    }
    novi->slijedeci=NULL;
}
void *kreirajrestoran()
{
    novi=new voz;
    if (t!=0)
    {
    r++;
    if (r<2)
    {
        red++;
        kreirajkraj();
        novi->putnik=-1;
        novi->teret=-1;
        novi->lokomotiva=0;
        cout<<"Broj stolice: ";
        cin>>novi->stolice;
        cout<<"Broj stolova: ";
        cin>>novi->sto;
    }
    else
        cout<<"Voz moze imati samo jedan restoran!"<<endl;
    }
    else
        cout<<"Voz mora imati lokomotivu!"<<endl;
    novi->slijedeci=NULL;
}
void *kreirajlok()
{
    novi=new voz;
    t++;
    if (t<2)
    {
    kreirajkraj();
    cout<<"Lokomotiva dodana"<<endl;
    novi->lokomotiva=1;
    novi->putnik=-1;
    novi->teret=-1;
    novi->sto=0;
    novi->stolice=0;
    }
    else
        cout<<"Voz moze imati samo jednu lokomotivu!"<<endl;
    novi->slijedeci=NULL;
}
void *kreirajkupe()
{
    novi=new voz;
    if (t!=0)
    {
    br_k++;
    kreirajkraj();
    cout<<"Broj putnika: ";
    cin>>novi->putnik;
    novi->lokomotiva=0;
    novi->teret=-1;
    novi->sto=0;
    novi->stolice=0;
    while (novi->putnik>20)
    {
        cout<<"Previse putnika (vise od 20)"<<endl;
        cout<<"Broj putnika: ";
        cin>>novi->putnik;
    }
    }
    else
        cout<<"Voz mora imati lokomotivu!"<<endl;
    novi->slijedeci=NULL;
}
void *kreirajteret()
{
    novi=new voz;
    if (t!=0)
    {
    br_t++;
    kreirajkraj();
    cout<<"Teret (kg): ";
    cin>>novi->teret;
    novi->putnik=-1;
    novi->lokomotiva=0;
    novi->sto=0;
    novi->stolice=0;
    while (novi->teret>5000)
    {
        cout<<"Teret (kg): "<<endl;
        cin>>novi->teret;
    }
    }
    else
        cout<<"Voz mora imati lokomotivu!"<<endl;
    novi->slijedeci=NULL;
}
 
void *ispispocetak()
{
    novi=new voz;
    if (start_lok==NULL)
        cout<<"Lista prazna"<<endl;
    else
    {
        zadnji=start_lok;
        while (zadnji!=NULL)
        {
            if (zadnji->lokomotiva==1)
                cout<<"Lokomotiva"<<endl;
            if (zadnji->putnik!=0 && zadnji->putnik!=-1)
                cout<<"Kupe ("<<zadnji->putnik<<" putnika)"<<endl;
            if (zadnji->teret!=-1)
                cout<<"Teretni vagon ("<<zadnji->teret<<" kg)"<<endl;
            if (zadnji->stolice!=0 && zadnji->sto!=0)
                cout<<"Restoran ("<<zadnji->stolice<<" stolica, "<<zadnji->sto<<" stolova)"<<endl;
            zadnji=zadnji->slijedeci;
        }
    }
}
void *provjera()
{
    int uk_p=0;
    float uk_t=0;
    novi=new voz;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
        if (zadnji->putnik!=-1 && zadnji->teret==-1)
        uk_p=uk_p+zadnji->putnik;
        if (zadnji->teret!=-1 && zadnji->putnik==-1)
            uk_t=uk_t+zadnji->teret;
        zadnji=zadnji->slijedeci;
    }
    cout<<"Ukupno putnika: "<<uk_p<<endl;
    cout<<"Ukupno tereta: "<<uk_t<<"kg"<<endl;
}
void *provjeraputnik()
{
    int c=0;
    novi=new voz;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
        if (br_k!=0)
        {
        c++;
        if (zadnji->putnik!=0 && zadnji->putnik!=-1)
        {
            cout<<"Vagon ("<<c<<".) ima "<<zadnji->putnik<<" putnika"<<endl;
        }
        zadnji=zadnji->slijedeci;
        }
        else
        {
            cout<<"Voz nema putnickih vagona"<<endl;
            break;
        }
    }
}
void *provjerateret()
{
    int d=0;
    novi=new voz;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
        if (br_t!=0)
        {
        d++;
        if (zadnji->teret!=-1)
        {
            cout<<"Vagon ("<<d<<".) ima "<<zadnji->teret<<" kg tereta"<<endl;
        }
        zadnji=zadnji->slijedeci;
        }
        else
        {
            cout<<"Voz nema teretnih vagona"<<endl;
            break;
        }
    }
}
void *nadjimjesto()
{
    int putnici, m=0, istina=0;
    novi=new voz;
    cout<<"Koliko mjesta zelite: ";
    cin>>putnici;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
        m++;
        if (zadnji->putnik!=-1)
        if (21-zadnji->putnik>putnici)
        {
            istina=1;
            cout<<"Vagon ("<<m<<".) ima dovoljno mjesta. Putnici smjesteni!"<<endl;
            zadnji->putnik=zadnji->putnik+putnici;
            break;
        }
        zadnji=zadnji->slijedeci;
    }
    if (istina==0)
    {
        cout<<"U vozu nema mjesta! Kreiranje novog putnickog vagona!"<<endl;
        kreirajkraj();
        novi->putnik=putnici;
        novi->lokomotiva=0;
        novi->teret=-1;
        novi->sto=0;
        novi->stolice=0;
        novi->slijedeci=NULL;
    }
}
void *nadjiteret()
{
    int roba, m=0, istina=0;
    novi=new voz;
    cout<<"Koliko mjesta zelite (kg): ";
    cin>>roba;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
        m++;
        if (zadnji->teret!=-1)
        if (5001-zadnji->teret>roba)
        {
            istina++;
            cout<<"Vagon ("<<m<<".) ima dovoljno mjesta. Teret smjesten!"<<endl;
            zadnji->teret=zadnji->teret+roba;
            break;
        }
        zadnji=zadnji->slijedeci;
    }
    if (istina==0)
    {
        cout<<"U vozu nema mjesta! Kreiranje novog teretnog vagona!"<<endl;
        kreirajkraj();
        novi->teret=roba;
        novi->putnik=-1;
        novi->lokomotiva=0;
        novi->sto=0;
        novi->stolice=0;
        novi->slijedeci=NULL;
    }
}
void *ispisdatoteka()
{
    ofstream outputFile;
    outputFile.open("Lokomotiva.txt");
    novi=new voz;
    zadnji=start_lok;
    while (zadnji!=NULL)
    {
            if (zadnji->lokomotiva==1)
                outputFile<<"Lokomotiva"<<endl;
            if (zadnji->putnik!=0 && zadnji->putnik!=-1)
                outputFile<<"Kupe ("<<zadnji->putnik<<" putnika)"<<endl;
            if (zadnji->teret!=-1)
                outputFile<<"Teretni vagon ("<<zadnji->teret<<" kg)"<<endl;
            if (zadnji->stolice!=0 && zadnji->sto!=0)
                outputFile<<"Restoran ("<<zadnji->stolice<<" stolica, "<<zadnji->sto<<" stolova)"<<endl;
            zadnji=zadnji->slijedeci;
    }
    outputFile.close();
}
void *upisdatoteka()
{
    ifstream inputFile;
    string line;
    inputFile.open("Lokomotiva.txt");
    novi=new voz;
    while (getline(inputFile,line))
    {
        cout<<line<<endl;
    }
    inputFile.close();
}
