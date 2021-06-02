#include <iostream>
using namespace std;

class Penjumlahan {
	public :
		void isiX(int angka){
			this->x = angka;
		}

		int ambilX(){
			return this->x;
		}

		Penjumlahan operator + (const Penjumlahan & pjl){
			Penjumlahan pl;
			pl.x = this->x + pjl.x;

			return pl;
		}

	private :
		int x;
};


int main(){
	Penjumlahan pjlhan1;
	Penjumlahan pjlhan2;
	Penjumlahan pjlhan3;

	pjlhan1.isiX(14);
	cout << "Isi 1 : " << pjlhan1.ambilX() << endl;

	pjlhan2.isiX(6);
	cout << "Isi 2 : " << pjlhan2.ambilX() << endl;

	pjlhan3 = pjlhan1 + pjlhan2;
	cout << "Isi 3 : " << pjlhan3.ambilX() << endl;

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/