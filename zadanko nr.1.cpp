#include<iostream>

using namespace std;

int main()
{
	double pierwsza_liczba, druga_liczba, trzecia_liczba, srednia;
	
	cout << "podaj pierwsza liczbe: "<<endl;
	cin >> pierwsza_liczba;
	cout << "podaj druga liczbe: "<<endl;
	cin >> druga_liczba;
	cout << "podaj trzecia liczbe: "<<endl;
	cin >> trzecia_liczba;
	srednia= (pierwsza_liczba + druga_liczba + trzecia_liczba) / 3;
	cout << "srednia: " << srednia;

	return 0;
}
