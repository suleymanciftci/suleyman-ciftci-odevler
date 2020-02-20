#include <iostream>

using namespace std;

int main() {
	int k;
	cout << "Lutfen yapmak istediginiz menuyu secin." << endl;
	cout << "1 dik ucgen" << endl;
	cout << "2 ters ucgen" << endl;
	cout << "3 elmas sekli" << endl;
	cin >> k;

	if (k == 1) {
		int n;
		cout << "kaclik dik ucgen olsun" << endl;
		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << endl;

		}
	}

	 else if (k == 2) {
		int m;
		cout << "kaclik bir ters ucgen olsun" << endl;
		cin >> m;
		for (int a = m; a < m; a--) {
			for (int b = a; b < 0; b--) {
				cout << "*";
			}

			cout << endl;
		}


	}
	
	 else if (k == 3) {
		int z;
		cout << "kaclik elmas sekli olsun" << endl;
		cin >> z;

		for (int c = 0; c < z; c++) {
			for (int d = 0; d <= c; d++) {
				cout << "*";
			}
			cout << endl;

		}
		for (int c = z - 1; c > 0; c--) {
			for (int d = 0; d < c; d++) {
				cout << "*";
			}
			cout << endl;
		}



	}





	return 0;
}


