#include <iostream>
using namespace std;

class PersegiPanjang {
	private :
		int panjang;
		int lebar;
		int luas;
	public :
		void isiVar(int p, int l){
			this->panjang = p;
			this->lebar = l;
			this->luas = p * l;
		}
		friend ostream & operator << (ostream & o, PersegiPanjang & pp){
			o << " Panjang : " << pp.panjang << endl;
			o << " Lebar : " << pp.lebar << endl;
			o << " Luas : " << pp.luas << endl;

			return o;
		}

		friend istream & operator >> (istream & in, PersegiPanjang & pp){
			cout << " Masukkan p : "; in >> pp.panjang;
			cout << " Masukkan l : "; in >> pp.lebar;

			pp.luas = pp.panjang * pp.lebar;

			return in;
		}
};

int main(){
	PersegiPanjang per, per2;
	per.isiVar(4, 5);
	cout << per;

	cin >> per2;
	cout << per2;

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/