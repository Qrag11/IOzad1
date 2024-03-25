#include <iostream>

using namespace std;

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
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
