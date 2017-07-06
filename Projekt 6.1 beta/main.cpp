#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char wybor;
int main()
{
    //KALKULATOR ze SWITCHAMI
    //nie trzeba akceptowac wyboru


    cout << "Podaj pierwsz¹ liczbê" << endl;
    cin >>x;
    cout << "Podaj drug¹ liczbê" << endl;
    cin >>y;
for(;;){//petla nieskonczona,  program wykonuje siê dopuki nie wciœniemy 5
    cout <<endl;
    cout <<"Menu g³ówne" <<endl;
    cout <<"-----------"<< endl;
    cout <<"1. dodawania"<< endl;
    cout <<"2. odejmowanie"<<endl;
    cout <<"3. mno¿enie"<<endl;
    cout <<"4. dzielenie"<<endl;
    cout <<"5. koniec programu"<<endl;
    cout<<"wybierz";
    wybor=getch();  //ta funkcja z biblioteki conio nie czeka na nacisniecie entera

    switch(wybor)
    {
        case '1':
        cout <<"Suma jest rowna:"<<x+y<<endl;
        break;
        case '2':
        cout <<"Ró¿nica jest rowna:"<<x-y<<endl;
        break;
        case '3':
        cout <<"Iloczyn jest rowny:"<<x*y<<endl;
        break;
        case '4':
        if(y==0) cout<<"nie dzielimy przez zero";
        else cout <<"Iloraz jest rowna:"<<x/y<<endl;
        break;
        case '5':
        exit (0) ;
        break;
        default:
        cout <<"Podana liczba nie jest poprawna"<<endl;
            }
    getchar();getchar();
        system("cls");
}
    return 0;
}
