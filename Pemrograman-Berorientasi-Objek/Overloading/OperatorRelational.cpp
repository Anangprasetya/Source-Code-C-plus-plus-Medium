#include <iostream>
using namespace std;

class PersegiPanjang {
	private :
		int panjang;
		int lebar;
		int luas;

		void hitung(){
			this->luas = this->panjang * this->lebar;
		}

	public :
		PersegiPanjang(int p, int l){
			this->panjang = p;
			this->lebar = l;
			this->hitung();
		}

		bool operator < (PersegiPanjang d){
			if (this->luas < d.luas){
				return true;
			}
			else 
				return false;
		}
};


int main(){
	PersegiPanjang pp1(3, 8);
	PersegiPanjang pp2(9, 6);

	if (pp1 < pp2){
		cout << "PP1 Kurang";
	}
	else {
		cout << "PP2 Lebih";
	}
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/