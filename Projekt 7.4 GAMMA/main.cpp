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
string odpA[5],odpB[5],odpC[5],odpD[5],odpE[5],odpF[5];
string poprawna[5];
string wybrana;
int wynik,ilosc_odpowiedzi[6];
int j,ilosc_pytan=1;
int a=0;
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
    instrukcja<<"Jest to program obs³uguj¹cy quiz z wybrany liczba pytañ. Pytania musza byc jednokrotnego wyboru"<<endl;
    instrukcja<<"Aby uruchomic program nalezy stworzyc dokument pod tytulem quiz z rozszerzeniem txt"<<endl;
    instrukcja<<"Dokument musi miec postac z rozszerzeniem txt "<<endl;
    instrukcja<<"Linia pierwsza ilosc pytan" <<endl;
    instrukcja<<"linia druga temat quizu"  <<endl;
    instrukcja<<"linia trzecia autor quizu" <<endl;
    instrukcja<<"kolejne linie po kolei pytanie,ilosc mozliwych odpowiedzi, odpowiedzi w oddzielnych liniach, poprawna odpowiedz(a,b,...)" <<endl;

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
                case 4: tresc[nr_pytania]=linia;                      break;
                case 5: ilosc_odpowiedzi[nr_pytania]=atoi(linia.c_str());         break;
                case 6: odpA[nr_pytania]=linia;                       break;
                case 7: odpB[nr_pytania]=linia;                       break;
                case 8: odpC[nr_pytania]=linia;                       break;
                case 9: odpD[nr_pytania]=linia;                       break;
                case 10:odpE[nr_pytania]=linia;                       break;
                case 11:odpF[nr_pytania]=linia;                       break;
                case 12:poprawna[nr_pytania]=linia;                   break;
            }
            transform(poprawna[nr_pytania].begin(),poprawna[nr_pytania].end(),poprawna[nr_pytania].begin(), ::tolower);
            if (a==1){a=0;nr_linii=3;nr_pytania++;}
            if(nr_linii==ilosc_odpowiedzi[nr_pytania]+5){nr_linii=11;a=1;}
            nr_linii++;
            }

    cout<<"Ilosc pytan wynosi: "<<ilosc_pytan<<endl;
    cout<<"Tamat quizu: "<<temat<<endl;
    cout<<"Tworca quizu: "<<nick<<endl;

   for (int i=0; i<ilosc_pytan;i++){
        cout<<"Pytanie numer:"<<i+1<<endl;
        cout<<tresc[i]<<endl;
        for (int j=1;j<=ilosc_odpowiedzi[i];j++){
            switch (j)
            {
                case 1:cout<<"Odpowiedz A:"<<odpA[i]<<endl; break;
                case 2:cout<<"Odpowiedz B:"<<odpB[i]<<endl; break;
                case 3:cout<<"Odpowiedz C:"<<odpC[i]<<endl; break;
                case 4:cout<<"Odpowiedz D:"<<odpD[i]<<endl; break;
                case 5:cout<<"Odpowiedz E:"<<odpD[i]<<endl; break;
                case 6:cout<<"Odpowiedz F:"<<odpD[i]<<endl; break;
            }
        }
        cout<<"Wybierz swoja odpowiedz "<<endl;
        cin>>wybrana;
        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
        if(poprawna[i]==wybrana)wynik=wynik+1;
        cout<<"Poprawna odpowiedzia byla odpowiedz: "<<poprawna[i]<<endl<<endl;
     }
}


    cout<<"Twoj wynik to:"<<wynik<<endl;
    getchar(); getchar();
    return 0;
}
