#include <iostream>

using namespace std;
string imie;
int main()
{
    //program sprawdza plec na podstawie imienia
    //imiona zenskie koncza  sie zazwyczaj na a

    cout << "Podaj swoje imie" << endl;
    cin>>imie;

    int dlugosc=imie.length();
    //lenght-sprawdza dlugosc (nie liczy klatki zwiazanej z nulem)
    if(imie[dlugosc-1]=='a')cout<<"najprawdopodobniej jesteœ kobiet¹"<<endl;
    //"a"-napis konczacy sie nulem
    //'a'-pojedynczy symbol
    else cout<<"jestes najprawdopodobniej mezczyzna"<<endl;


    return 0;
}
