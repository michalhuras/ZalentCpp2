#include <iostream>
#include <string> //biblioteka potrzebna funkcji od lini 66
#include <algorithm> //transform

using namespace std;

int main()
{
//wstep do zmiennych STRING i CHAR

    char napis[20]="Ala ma kota";
    cout << napis<<endl;

    //Taki zapis jak poni¿ej spowoduje blad,
    // poniewa program bedzie musial w innym miejscu postawic
    //znak konca lancucha null.
    //napis="kot";
    //cout << napis<<endl;

    //W zapisie ponizej wykorzystano wskazniki, nie bedzie bledu
    char *napis2="Ala ma kota";
    cout << napis2<<endl;
    napis2="Inny napis";
    cout << napis2<<endl;

    //pokaz konkretny znak:
    cout<<napis[0]<<endl;

    //program bedzie prosil o imie i na tej podstawie
    //bedzie sprawdzal plec
    string imie;
    cout<<"Podaj imie: ";
    cin>>imie;

    int dlugosc_imienia=imie.length();
    cout<<"Dlugosc: "<<dlugosc_imienia<<endl;

    if (imie[dlugosc_imienia-1]=='a') //wazne zeby tu byly apostrofy-pojedyncza literka, a nie napis
        cout<<"Wydaje mi sie, ze jestes kobieta"<<endl;
    else cout<<"Wydaje mi sie, ze jestes facetem"<<endl;

    //odwracanie wyrazow:
    string wyraz;
    cout<<"Podaj wyraz do odwrocenia (bez spacji): ";
    //bo spacja jest traktowana jako separator
    cin>>wyraz;

    int dlugosc=wyraz.length();
    for (int i=dlugosc-1; i>=0; i--)
    {
        cout<<wyraz[i];
    }

    //uzycie getline - zapis ze spacjami:
    //getline pobiera cala linie, az do klikniecia enter
    string napis3;
    cout<<endl<<"Podaj wyraz ze spacjami: ";
    cin.ignore(); //"wyczysc" strumien
    getline(cin,napis3);
    cout<<napis3<<endl;

    //wyznacz dlugosc napisu i wyswietl na ekranie:
    int dlugosc2=napis3.length();
    cout<<dlugosc2<<endl;

    // laczenie dwoch stringow:
    string jeden="Ala ma";
    string dwa=" kota";
    string trzy=jeden+dwa;
    cout<<trzy<<endl;

    //ZMIANA WIELKOSCI LITER
    string napis4="Ala ma kota";
    //zmiana liter na male
    transform(napis4.begin(), napis4.end(), napis4.begin(), ::tolower);
    cout<<napis4<<endl;
    //zmiana liter na duze
    transform(napis4.begin(), napis4.end(), napis4.begin(), ::toupper);
    cout<<napis4<<endl;


    //ZNAJDOWANIE FRAZY
    string napis5="Ala ma kota";
    string szukaj="kot";
    size_t pozycja = napis5.find(szukaj);
    //znajdz w napis5 zmienna szukaj

    if (pozycja!=string::npos)
        cout << "znaleziono na pozycji: " << pozycja << endl;
    else cout<<"nie znaleziono"<< endl;

    //KASOWANIE CZESCI NAPISU
    string napis6="Ala ma kota";
    napis6.erase(6,5); //kasuj od znaku o indeksie 6, 5 znakow
    cout<<napis6<< endl;

    //ZASTEPOWANIE CZESCI NAPISU
    string napis7="Ala ma kota";
    napis7.replace(4,2,"nie ma");
    //od 4 znaku zastepujemy, 2 znaki, znakami "nie ma"
    cout<<napis7<< endl;

    //WSTAWIANIE DO LANCUCHA
    string napis8="Ala ma kota";
    napis8.insert(11," Filemona"); //wstawi sie od miejsca 11
    cout<<napis8<< endl;

    //WYCIAGANIE CZESCI LANCUCHA DO NOWEGO LANCUCHA
    string napis9="Ala ma kota";
    string nowynapis = napis9.substr (4,7);
    //od 4tego znaku wyjmij siedem liter
    cout<<nowynapis;


    //wszystkie funkcje mozna znalezc wpisujac w google:
    //string C++ reference

    return 0;
}
