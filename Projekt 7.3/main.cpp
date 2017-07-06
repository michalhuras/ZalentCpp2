#include <iostream>
#include <fstream>
#include <cstdlib> //biblioteka potrzebna do biblioteki exit(0);

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    //WCZYTYWANIE WARTO�CI Z ISTNIEJ�CEGO JU� PLIKU TEKSTOWEGO
    string linia; //zmiennna kt�ra przechowuje dane lini
    int nr_linii=1;  //numer linie kt�ra jest pobierana
    //numery lini w notatniku zaczynaj� si� od 1, a nie od 0 jak w przypadku tablic

    fstream plik; //zmienna plikowa
    plik.open("wizytowka.txt", ios::in);
    //ios::in -wprowad� do programu

    if(plik.good()==false)
        {
        cout<<"Nie mozna otworzyc pliku!"; //sprawdzamy czy plik istnieje
        exit(0);
        }


    while (getline(plik, linia))//petla dziala dopoki w nawiasach jest prawdziwe
    //getline pobiera lini�, a je�eli nie ma ju� lini zmienia si� w false
    {
        switch (nr_linii)
        {
            case 1: imie=linia; break;
            case 2: nazwisko=linia; break;
            case 3: nr_tel=atoi(linia.c_str()); break;
//numer telefonu jest rowny lini tekstu 3 przekonwertowanej na liczbe funkcja atoi
        }
        nr_linii++;
    }

//funkcja while si� wykonuje i za ka�dym razem zwi�ksza si� numer lini zmieniaj�c casy

    plik.close();

    cout<<"imie: "<<imie<<endl;
    cout<<"nazwisko: "<<nazwisko<<endl;
    cout<<"telefon: "<<nr_tel<<endl;

    return 0;
}
