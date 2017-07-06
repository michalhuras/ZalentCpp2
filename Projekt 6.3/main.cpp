#include <iostream>
#include <stdio.h>
#include <cstdlib> //potrzbene do dzialania exita  (dodatkowe opcje w google ccctype)
#include <conio.h> //potrzebne do instrukcji nr=getch();
using namespace std;
int nr;
int main()
{
    //ILOSC DNI W MIESIACU
    // ze sprawdzaniem czy wpisany znak jest liczba
    //walidacja danych wejściowych
    cout << "Podaj numer miesiaca" << endl;

    if(!(cin >>nr)) //jeżeli to co w nawiasie nie jest liczbą
    {
    cerr<<"numer miesiaca nie byl liczba";
    // console error specjalny strumien wyjsciowy bledow
    // jezeli wpiszemy 4e, to nie zatrzyma sie prgram, zostanie zapisane tylko 4
    exit(0);
    //konczy program
    }
    switch(nr)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"31 dni"<<endl;
        break;
        case 2:
        cout<<"29lub 28 dni"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"30dni"<<endl;
        default:
        cout<<"nie ma takiego miesi¹ca"<<endl;

    }
    getchar();getchar();
        system("cls");



    return 0;
}
