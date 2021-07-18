#include <iostream>
using namespace std;

class BangunDatar {
	public :
		virtual int luas() = 0;
		void isiPanjang(int p){
			this->panjang = p;
		}

		void isiLebar(int l){
			this->lebar = l;
		}

	protected :
		int panjang;
		int lebar;
};

class PersegiPanjang : public BangunDatar {
	public :
		int luas(){
			return this->panjang * this->lebar;
		}
};


class Segitiga : public BangunDatar {
	public :
		int luas(){
			return (this->panjang * this->lebar) / 2;
		}
};


int main(){
	cout << "\n\n\n\n\n\n";

	PersegiPanjang Pp;
	Segitiga Sgt;


	Pp.isiPanjang(16);
	Pp.isiLebar(12);
	cout << "   Persegi   : " << Pp.luas() << endl;

	Sgt.isiPanjang(16);
	Sgt.isiLebar(12);
	cout << "   Segitiga  : " << Sgt.luas() << endl;

	cout << "\n\n\n\n\n\n";
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/