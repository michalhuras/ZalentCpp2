#include <iostream>

using namespace std;

int main()
{

    //program ma wypisywac napis w spak
    string napis;
    cout << "Podaj swoj napis" << endl;
    getline(cin,napis);
    //jezeli uzylibysmy w tym miejscu zwyk³ego cin>>napis; spacja oznaczala by separator i to co za spacja nie zapisalo by sie
    //getline pobiera calosc razem ze spacjami

    int dlugosc=napis.length();

    for(int i=dlugosc-1;i>=0;i--)
    {
        cout<<napis[i];
    }

    return 0;
}
