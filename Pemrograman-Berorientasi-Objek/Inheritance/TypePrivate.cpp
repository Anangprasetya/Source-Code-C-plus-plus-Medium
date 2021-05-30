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

// Hak akses Public, Protected, dan Private di class SegiEmpat
// Dianggap Private di class PersegiPanjang
class PersegiPanjang : private SegiEmpat {
	public :
		PersegiPanjang(int p, int l){
			this->isiPanjang(p);
			this->isiLebar(l);
		}
		int luas(){
			return this->panjang * this->lebar;
		}
};


int main(){
	PersegiPanjang pp(4, 5);

	cout << "Luas : " << pp.luas() << endl;
	
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/