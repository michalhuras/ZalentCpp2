#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

string temat;
string nick;
string tresc[5];
string odpA[5],odpB[5],odpC[5],odpD[5],odpE[5];
string poprawna[5];
string wybrana;
int wynik;
int ilosc_pytan=1;

int main()
{
    //QUIZ ilosc pytan wybieralna

    string linia;
    int nr_linii=1;
    int nr_pytania=0;

    //ZAPIS INSTRUKCJI DO PLIKU
    fstream instrukcja;
    instrukcja.open("instrucja.txt", ios::out);

    instrukcja<<"QUIZ"<<endl;
    instrukcja<<"Jest to program obs³uguj¹cy quiz z wybran¹ liczb¹ pytañ. Pytania musz¹ byæ jednokrotnego wyboru"<<endl;
    instrukcja<<"Aby uruchomiæ program nale¿y stworzyæ dokument pod tytu³em quiz z rozszerzeniem txt"<<endl;
    instrukcja<<"Dokument musi mieæ postaæ z rozszerzeniem txt "<<endl;
    instrukcja<<"Linia pierwsza iloœæ odpowiedzi" <<endl;
    instrukcja<<"linia druga temat quizu"  <<endl;
    instrukcja<<"linia trzecia autor quizu" <<endl;
    instrukcja<<"kolejne linie po kolei pytanie, odpowiedzi w oddzielnych liniach poprawna odpowiedz w postaci malej literki" <<endl;

    instrukcja.close();

    //ODCZYT PYTAN Z PLIKU
    fstream plik;
    plik.open("quiz.txt", ios::in);
    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";
    else {
            nr_linii=1;
            nr_pytania=0;

        while ((getline(plik, linia))&&(nr_pytania<ilosc_pytan))
            {
            switch (nr_linii)
            {
            case 1: ilosc_pytan=atoi(linia.c_str());              break;
            case 2: temat=linia;                                  break;
            case 3: nick=linia;                                   break;
            case 4: tresc[nr_pytania]=linia;        break;
            case 5: odpA[nr_pytania]=linia;         break;
            case 6: odpB[nr_pytania]=linia;         break;
            case 7: odpC[nr_pytania]=linia;         break;
            case 8: odpD[nr_pytania]=linia;         break;
            case 9:poprawna[nr_pytania]=linia;     break;
            }
            if(nr_linii==9){nr_linii=3;nr_pytania++;}
            nr_linii++;
            }

    cout<<"Ilosc pytan wynosi: "<<ilosc_pytan<<endl;
    cout<<"Tamat quizu: "<<temat<<endl;
    cout<<"Tworca quizu: "<<nick<<endl;

   for (int i=0; i<ilosc_pytan;i++){
        cout<<"Pytanie numer:"<<i+1<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Odpowiedz C:"<<odpC[i]<<endl;
        cout<<"Odpowiedz D:"<<odpD[i]<<endl;
        cout<<"Wybierz swoja odpowiedz "<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
        if(poprawna[i]==wybrana)wynik=wynik+1;
     }
}


    cout<<"Twoj wynik to:"<<wynik<<endl;
    getchar(); getchar();
    return 0;
}
