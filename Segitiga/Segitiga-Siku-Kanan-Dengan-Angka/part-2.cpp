#include <iostream>
using namespace std;

class Segitiga {
	public :
		Segitiga(){
			cout << "Masukkan banyak : ";
			cin >> this->banyak;
		}

		void tampil(){
			this->nilai_max();
			this->proses();
		}

	private :
		int banyak;
		int picu = 0, panjang = 0, panjang2 = 0;

		void nilai_max(){
			for (int i = 0; i < this->banyak; i++)
				for (int j = 0; j <= i; j++)
					this->picu += 1;

			while(this->picu != 0){
				this->picu = this->picu / 10;
				this->panjang++;
			}
		}
		inline void jarak_tampil(int x){
			while(x != 0){
				x = x / 10;
				this->panjang2++;
			}
			for (int i = this->panjang2; i < this->panjang + 1; i++)
				cout << " ";

			this->panjang2 = 0;
		}

		void proses(){
			for (int i = 0; i < this->banyak; i++)
			{
				// Perulangan untuk banyak space
				for (int j = i; j < this->banyak - 1; j++)
					for (int k = 0; k < this->panjang + 1; k++)
						cout << " ";

				for (int j = 0; j <= i; j++){
					cout << j + 1;
					this->jarak_tampil(j + 1);
				}

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