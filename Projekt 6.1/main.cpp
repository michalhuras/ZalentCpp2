#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float x,y;
int wybor;
int main()
{

    //KALKULATOR ze SWITCHAMI


    cout << "Podaj pierwsza liczbe" << endl;
    cin >>x;
    cout << "Podaj druga liczbe" << endl;
    cin >>y;
for(;;){//petla nieskonczona
    cout <<endl;
    cout <<"Menu glowne" <<endl;
    cout <<"-----------"<< endl;
    cout <<"1. dodawania"<< endl;
    cout <<"2. odejmowanie"<<endl;
    cout <<"3. mnozenie"<<endl;
    cout <<"4. dzielenie"<<endl;
    cout <<"5. koniec programu"<<endl;
    cout<<"wybierz";
    cin>>wybor;
    switch(wybor)
    {
    case 1:
        cout <<"Suma jest rowna:"<<x+y<<endl;
    break;
    case 2:
        cout <<"Roznica jest rowna:"<<x-y<<endl;
    break;
    case 3:
        cout <<"Iloczyn jest rowny:"<<x*y<<endl;
    break;
    case 4:
        if(y==0) cout<<"nie dzielimy przez zero";
        else cout <<"Iloraz jest rowna:"<<x/y<<endl;
    break;
    case 5:
        exit (0) ;
    break;
    default:
        cout <<"Podana liczba nie jest poprawna"<<endl;
    }
    getchar();getchar();  //czzekamy na enter, zeby zobaczyc wyniki
    system("cls");  //czyszczenie ekranu
}


    return 0;
}
