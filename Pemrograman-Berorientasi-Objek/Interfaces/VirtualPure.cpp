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
	private :
		int luas(){
			return this->panjang * this->lebar;
		}
};


class Segitiga : public BangunDatar {
	private :
		int luas(){
			return (this->panjang * this->lebar) / 2;
		}
};


int main(){
	
	BangunDatar * bd = new PersegiPanjang();

	bd->isiPanjang(16);	
	bd->isiLebar(12);
	cout << "    Persegi   : " << bd->luas() << endl;	


	bd = new Segitiga();
	bd->isiPanjang(16);	
	bd->isiLebar(12);
	cout << "    Persegi   : " << bd->luas() << endl;

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/