#include <iostream>
using namespace std;

class SegiEmpat {
	public :
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

class Keliling {
	public :
		int ambilKeliling(int p, int l){
			return 2 * (p + l);
		}
};

// Mewarisi 2 sifat class induk sekaligus
class PersegiPanjang : public SegiEmpat, public Keliling{
	public :
		int luas(){
			return this->panjang * this->lebar;
		}
};


int main(){
	PersegiPanjang pp;

	// Perhatikan, class PersegiPanjang dapat mengakses
	// method yang ada di class SegiEmpat dan Keliling

	pp.isiPanjang(4);
	pp.isiLebar(5);
	cout << "Luas adalah : " << pp.luas() << endl;
	cout << "Keliling : " << pp.ambilKeliling(4, 5) << endl;
	
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/