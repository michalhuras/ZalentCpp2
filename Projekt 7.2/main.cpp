#include <iostream>
#include <fstream> //biblioteka odpowiedzialna za pracê z plikami

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    //ZAPIS WIZYTÓWEK
    //z nadpisywaniem

    cout << "Podaj imie: ";         cin>>imie;
    cout << "Podaj nazwisko: ";     cin>>nazwisko;
    cout << "Podaj nr telefonu: ";  cin>>nr_tel;

    fstream plik; //zmienna plikowa
    plik.open("wizytowka.txt",ios::out | ios::app);
    //ios::app-nadpisywanie tekstu


    //ZAPISYWANIE DANYCH W PLIKU
    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();

    return 0;
}
