#include <iostream>
using namespace std;

class Balok {
	public :
		int volume(){
			this->hitung();
			return this->v;
		}

		void isi(double p, double l, double t){
			this->panjang = p;
			this->lebar = l;
			this->tinggi = t; 
		}

	private :
		double panjang;
		double lebar;
		double tinggi;
		double v;


	protected :
		void hitung(){
			this->v = panjang * lebar * tinggi;
		}

};


int main(){
	Balok b1, b2;
	b1.isi(3.2, 4.12, 12.321);
	cout << "  Volume b1   : " << b1.volume() << endl;


	b2.isi(32.21222, 20, 13.23411);
	cout << "  Volume b2   : " << b2.volume() << endl;


	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/