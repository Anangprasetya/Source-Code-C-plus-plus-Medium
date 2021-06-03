#include <iostream>
using namespace std;

class Negatif {
	public :
		Negatif(int p, int l){
			this->angka1 = p;
			this->angka2 = l;
		}

		void tampil(){
			cout << "angka1 : " << this->angka1 << " ";
			cout << "angka2 : " << this->angka2 << endl;
		}

		// Operator Overloading (++)
		Negatif operator ++ (){
			this->angka1 = this->angka1 += 1;
			this->angka2 = this->angka2 += 1;

			return Negatif(this->angka1, this->angka2);
		}
	private :
		int angka1;
		int angka2;
};



int main(){
	Negatif p1(11, 10), p2(-5, 13);

	++p1;
	p1.tampil();

	++p2;
	p2.tampil();

	
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/