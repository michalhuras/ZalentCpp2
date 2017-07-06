#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h> //potrzebne do instrukcji nr=getch();
using namespace std;
int nr;
int main()
{
    //ILOSC DNI W MIESIACU

    cout << "Podaj numer miesiaca" << endl;
    cin >>nr;

    switch(nr)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"31 dni"<<endl;
        break;
        case 2:
            int rok
            cout<<"Podaj rok"<<endl;
            if (((rok%4==0)&&(rok%4!=0))||(rok%400==0))
                cout<<"Ten miesiac ma 29 dni"<<endl;
            else
                cout<<"Te miesiac ma 28 dni"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"30dni"<<endl;
        default:
        cout<<"nie ma takiego miesiaca"<<endl;

    }
    getchar();getchar();
        system("cls");



    return 0;
}
