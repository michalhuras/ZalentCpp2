#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

string temat; //w tej zmiennej przechowamy informacjê z jakiej dziedziny jest quiz
string nick; // w tej zmiennej przechowujemy informacjê o nicku
string tresc[5];
string odpA[5],odpB[5],odpC[5],odpD[5];
string poprawna[5];
string wybrana;
int wynik;
//macierze przechowujace pytania, odpowedzi i poprawne odpowiedzi

int main()
{
    //QUIZ 5 pytañ, wiedza z ca³ego dotychczasowego kursu

    string linia; //zmiennna która przechowuje dane lini
    int nr_linii=1;  //numer linie która jest pobierana
    int nr_pytania=0;


    fstream plik; //zmienna plikowa
    plik.open("quiz.txt", ios::in);
    //ios::in -wprowadŸ do programu

    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";


     while (getline(plik, linia))
     {
         switch (nr_linii)
        {
            case 1: temat=linia;                    break;
            case 2: nick=linia;                     break;
            case 3: tresc[nr_pytania]=linia;        break;
            case 4: odpA[nr_pytania]=linia;         break;
            case 5: odpB[nr_pytania]=linia;         break;
            case 6: odpC[nr_pytania]=linia;         break;
            case 7: odpD[nr_pytania]=linia;         break;
            case 8: poprawna[nr_pytania]=linia;     break;

        }
        if(nr_linii==8){nr_linii=2;nr_pytania++;}
        nr_linii++;
     }

    cout<<"Tamat quizu:"<<temat<<endl;
    cout<<"Twórca quizu:"<<nick<<endl;

     //ZADAWANIE PYTAÑ
   for (int i=0; i<=4;i=i+1){
        cout<<"Pytanie numer:"<<i<<endl;
        cout<<tresc[i]<<endl;
        cout<<"Odpowiedz A:"<<odpA[i]<<endl;
        cout<<"Odpowiedz B:"<<odpB[i]<<endl;
        cout<<"Odpowiedz C:"<<odpC[i]<<endl;
        cout<<"Odpowiedz D:"<<odpD[i]<<endl;
        cout<<"Wybierz swoj¹ odpowiedz (male literki)"<<endl;

        cin>>wybrana;

        transform(wybrana.begin(),wybrana.end(),wybrana.begin(), ::tolower);
          //funkcja zamieniaj¹ca literki w napisie na ma³e
        if(poprawna[i]==wybrana)wynik=wynik+1;
     }
     cout<<"Twoj wynik to:"<<wynik<<endl;

    return 0;
}
