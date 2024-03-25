#include <iostream>

using namespace std;

void silnia(int a, int b)
{
    int wynikA = 1, wynikB = 1;

    for(int i=1;i<=a;i++)
    {
       wynikA = wynikA*i;
    }
    for(int i=1;i<=b;i++)
    {
       wynikB = wynikB*i;
    }

    cout<<"Silnia z a = "<<wynikA<<endl;
    cout<<"Silnia z b = "<<wynikB<<endl;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
