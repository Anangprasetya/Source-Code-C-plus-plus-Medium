#include <iostream>
using namespace std;

class Overloading {
	public :
		Overloading(){}
		Overloading(int x){
			this->angka = x;
		}

		Overloading operator()(int x){
			Overloading tampung;
			tampung.angka = x + 20;

			return tampung;
		}

		void tampil(){
			cout << "   Angka  : " << this->angka << endl;
		}

	private :
		int angka;

};



int main(){
	Overloading obj1(13), obj2;
	cout << " Satu \n";
	obj1.tampil();

	obj2 = obj1(17);
	cout << " Dua \n";
	obj2.tampil();

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/