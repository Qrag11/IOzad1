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
void czyPierwsza(int n){

	if(n<2)
		cout<<"Nie jest pierwsza";

	bool czyPierwsza = true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			czyPierwsza=false;
	}

	if(czyPierwsza == true)
		cout<<"Jest to liczba pierwsza("<<n<<")"<<endl;
	else
		cout<<"Nie jest to lcizba pierwsza ("<<n<<")"<<endl;

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
	cout << "1. Silnia"<<endl;
	cout << "2. Sprawdz czy jest pierwsza"<<endl;
	cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie == 1)
		silnia(a,b);
	if(wyjscie == 2)
		czyPierwsza(a);
    } while(wyjscie != 0);
    return 0;
}
