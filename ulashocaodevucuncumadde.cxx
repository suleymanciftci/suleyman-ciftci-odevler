#include <iostream>

using namespace std;

void tersUcgen(int deger , int bosluk ,  int yildiz) {
	for (int k = 0; k < deger; k++) {
		for (int s = 0; s <  bosluk; s++) {
			cout << " ";
		}
		for (int s = 0; s < yildiz; s++) {
			cout << "*";
		}
		cout << endl;
		bosluk++;
		yildiz -= 2;
	}

}


int main() {

	int n;
	cout << "kaclik bir ters ucgen olsun" << endl;
	cin >> n;

	tersUcgen(n, n-6,n+5);


	return 0;
}
