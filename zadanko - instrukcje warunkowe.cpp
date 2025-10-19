#include<iostream>

using namespace std;

int main()
{
	int liczba;
	cout << "podaj liczba całkowita" << endl;
	cin >> liczba;
	if (liczba > 0) {
		cout << "liczba dodatnia" << endl;
	}

	int liczba1;
		cout << "podaj liczbe" << endl;
	cin >> liczba1;
	if (liczba1 % 2 == 0) {
		cout << "liczba jest parzysta" << endl;
	}




	
	int liczba3;
	cout << "podaj liczbe " << endl;
	cin >> liczba3;
	if (liczba3 >= 10&&liczba3 <= 50) {
		cout << "liczbe znajduje sie w przedaiale od 10 do 50 wlacznie" << endl;
	}
	else {
		cout << "liczba nie znajduje sie w przedzile od 10 do 50 wlacznie" << endl;
	}




	int liczba4;
	cout << "podaj liczbe" << endl;
	cin >> liczba4;
	if (liczba4 == 0) {
		cout << "liczba jest zerem" << endl;
	}
	if (liczba4 < 0) {
		cout << "liczba jest ujemna" << endl;
	}
	if (liczba4 > 0) {
		cout << "liczba jest dodatnia" << endl;
	}
	else (liczba4 % 2 == 0); {
		cout << "liczba jest parzysta" << endl;
	}
	



	int a, b, c ;
	cout << "podaj pierwsza liczbe" << endl;
	cin >> a;
	cout << "podaj druga liczbe" << endl;
	cin >> b;
	cout << "podaj druga liczbe" << endl;
	cin >> c;

	
	if (a < b && b < c) {
		cout << c << "," << b << "," << a;
	}
	else if (a < c && c < b) {
		cout << b << "," << c << "," << a;
	}
	else if (b < a && a < c) {
		cout << c << "," << a << "," << b;
	}
	else if (b < c && c < a) {
		cout << a << "," << c << "," << b;
	}
	else if (c < a && a < b) {
		cout << b << "," << a << "," << c;
	}
	else if (c < b && b < a) {
		cout << a << "," << b << "," << c; 
	}
	
	


	return 0;
}
