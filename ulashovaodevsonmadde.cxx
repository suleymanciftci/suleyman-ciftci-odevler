#include <iostream>

using namespace std;

void elmas(int deger, int bosluk, int yildiz) {
	for (int k = 0; k < deger; k++) {
		for (int s = 0; s < bosluk; s++) {
			cout << " ";
		}
		for (int s = 0; s < yildiz; s++) {
			cout << "*";
		}
		cout << endl;
		bosluk--;
		yildiz += 2;
	}

	yildiz -= 2;
	

	for (int k = 0; k < deger; k++) {
		for (int s = 0; s < bosluk; s++) {
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


	int main()  {
	
		int n;
		cout << "kaclik elmas sekli cikarmak istiyorsunuz." << endl;
		cin >> n;

		if ((n <= 15) && (n >= 3) && (n % 2 != 0)) {

			elmas(n, n + 6, n - 5);
		}
		else 
			cout << "Tekrar sayi giriniz 3 ile 15 arasinda tek sayi olmali";
	
		return 0;
	}




















