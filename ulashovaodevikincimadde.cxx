#include <iostream>

using namespace std;

void duzUcgen(int deger) {

	for (int i = 1; i <= deger; i++) {
		cout << endl;
		for (int j = 1; j <= deger - i; j = j++) {
			cout << " ";
		}
		for (int k = 1; k <= i + i - 1; k = k++) {
			cout << "*";

			}

	}
}


int main() {
	int n;
	cout << "Bir deger girin" << endl;
	cin >> n;

	if ((n <= 15) && (n >= 3) && (n%2 !=0)) {

		duzUcgen(n);
	}

	else 

		cout << "Tekrar sayi giriniz 3 ile 15 arasinda tek sayi olmali";
	

		



	return 0;
}
