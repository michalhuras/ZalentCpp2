#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

string temat;
string nick;
string tresc[5];
string odpA[5],odpB[5],odpC[5],odpD[5],odpE[5];
string poprawna[5];
string wybrana;
int wynik;
int ilosc_pytan;

int main()
{
    //QUIZ ilosc pytan wybieralna

    string linia;
    int nr_linii=1;
    int nr_pytania=0;


    fstream instrukcja;
    instrukcja.open("instrucja.txt", ios::out);

    instrukcja<<"QUIZ"<<endl;
    instrukcja<<"Jest to program obs³uguj¹cy quiz z wybran¹ liczb¹ pytañ i wybran¹ liczb¹ odpowiedzi. Pytania musz¹ byæ jednokrotnego wyboru"<<endl;
    instrukcja<<"Aby uruchomiæ program nale¿y stworzyæ dokument pod tytu³em quiz z rozszerzeniem txt"<<endl;
    instrukcja<<"Dokument musi mieæ postaæ z rozszerzeniem txt "<<endl;
    instrukcja<<"Linia pierwsza iloœæ odpowiedzi" <<endl;
    instrukcja<<"linia druga temat quizu"  <<endl;
    instrukcja<<"linia trzecia autor quizu" <<endl;
    instrukcja<<"kolejne linie po kolei pytanie, odpowiedzi w oddzielnych liniach poprawna odpowiedz w postaci malej literki" <<endl;

    instrukcja.close();

    fstream plik;
    plik.open("quiz.txt", ios::in);
    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";


     while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 1: ilosc_pytan=atoi(linia.c_str());              break;
            case 2: temat=linia;                    break;
            case 3: nick=linia;                     break;
        }
     }

if(ilosc_pytan==2){
        nr_linii=2;
        nr_pytania=0;
    while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 2: temat=linia;                    break;
            case 3: nick=linia;                     break;
            case 4: tresc[nr_pytania]=linia;        break;
            case 5: odpA[nr_pytania]=linia;         break;
            case 6: odpB[nr_pytania]=linia;         break;
            case 7: poprawna[nr_pytania]=linia;     break;

        }
        if(nr_linii==7){nr_linii=3;nr_pytania++;}
        nr_linii++;
     }
}
else if(ilosc_pytan==3){
    nr_linii=2;
    nr_pytania=0;
    while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 2: temat=linia;                    break;
            case 3: nick=linia;                     break;
            case 4: tresc[nr_pytania]=linia;        break;
            case 5: odpA[nr_pytania]=linia;         break;
            case 6: odpB[nr_pytania]=linia;         break;
            case 7: odpC[nr_pytania]=linia;         break;
            case 8: poprawna[nr_pytania]=linia;     break;

        }
        if(nr_linii==8){nr_linii=3;nr_pytania++;}
        nr_linii++;
     }
}
else if(ilosc_pytan==4){
    nr_linii=2;
    nr_pytania=0;
    while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 2: temat=linia;                    break;
            case 3: nick=linia;                     break;
            case 4: tresc[nr_pytania]=linia;        break;
            case 5: odpA[nr_pytania]=linia;         break;
            case 6: odpB[nr_pytania]=linia;         break;
            case 7: odpC[nr_pytania]=linia;         break;
            case 8: odpD[nr_pytania]=linia;         break;
            case 9: poprawna[nr_pytania]=linia;     break;

        }
        if(nr_linii==9){nr_linii=3;nr_pytania++;}
        nr_linii++;
     }
}
else if(ilosc_pytan==5){
    nr_linii=2;
    nr_pytania=0;
    while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 2: temat=linia;                    break;
            case 3: nick=linia;                     break;
            case 4: tresc[nr_pytania]=linia;        break;
            case 5: odpA[nr_pytania]=linia;         break;
            case 6: odpB[nr_pytania]=linia;         break;
            case 7: odpC[nr_pytania]=linia;         break;
            case 8: odpD[nr_pytania]=linia;         break;
            case 9: odpE[nr_pytania]=linia;         break;
            case 10: poprawna[nr_pytania]=linia;     break;

        }
        if(nr_linii==10){nr_linii=3;nr_pytania++;}
        nr_linii++;
     }
}
else cout<<"iloœæ pytan musi miescic sie w zakresie od 2 do 5"<<endl;

    cout<<"Tamat quizu:"<<temat<<endl;
    cout<<"Twórca quizu:"<<nick<<endl;

if(ilosc_pytan==2){
      for (int i=0; i<=4;i=i+1){
        cout<<"Pytanie numer:"<<i<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Wybierz swoj¹ odpowiedz "<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
          //funkcja zamieniaj¹ca literki w napisie na ma³e
        if(poprawna[i]==wybrana)wynik=wynik+1;
      }
}
else if(ilosc_pytan==3){
    for (int i=0; i<=4;i=i+1){
        cout<<"Pytanie numer:"<<i<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Odpowiedz C:"<<odpC[i]<<endl;
        cout<<"Wybierz swoj¹ odpowiedz "<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
        if(poprawna[i]==wybrana)wynik=wynik+1;
    }
}
else if(ilosc_pytan==4){
    for (int i=0; i<=4;i=i+1){
        cout<<"Pytanie numer:"<<i<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Odpowiedz C:"<<odpC[i]<<endl;
        cout<<"Odpowiedz D:"<<odpD[i]<<endl;
        cout<<"Wybierz swoj¹ odpowiedz "<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
        if(poprawna[i]==wybrana)wynik=wynik+1;
    }
}
else if(ilosc_pytan==5){
   for (int i=0; i<=4;i=i+1){
        cout<<"Pytanie numer:"<<i<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Odpowiedz C:"<<odpC[i]<<endl;
        cout<<"Odpowiedz D:"<<odpD[i]<<endl;
        cout<<"Odpowiedz E:"<<odpD[i]<<endl;
        cout<<"Wybierz swoj¹ odpowiedz "<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
        if(poprawna[i]==wybrana)wynik=wynik+1;
     }
}


     cout<<"Twoj wynik to:"<<wynik<<endl;

    return 0;
}
