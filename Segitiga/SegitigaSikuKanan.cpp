#include <iostream>
using namespace std;

class Segitiga {
	public :
		Segitiga(){
			cout << "Masukkan banyak : ";
			cin >> this->banyak;
		}

		void tampil(){
			this->proses();
		}

	private :
		int banyak;

		void proses(){
			for (int i = 0; i < this->banyak; i++){

				// Perulangan untuk banyak space
				for (int j = i; j < this->banyak - 1; j++)
					cout << "  ";


				for (int j = 0; j <= i; j++)
					cout << "* ";

				cout << endl;
			}

		}
};

int main(){
	Segitiga sgt;
	sgt.tampil();
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/