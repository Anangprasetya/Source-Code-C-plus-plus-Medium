#include <iostream>
using namespace std;

class Binary {
	public :
		void isiAngka(int a, int b){
			this->angka1 = a;
			this->angka2 = b;
		}

		void tampilAngka(){
			cout << " Angka 1  : " << this->angka1 << "  Angka 2  : ";
			cout << this->angka2;
			cout << "\n\n";
		}

		Binary operator + (Binary bi){
			Binary binary;
			binary.angka1 = this->angka1 + bi.angka1;
			binary.angka2 = this->angka2 + bi.angka2;

			return binary;
		}

	private :
		int angka1;
		int angka2;
};

int main(){
	Binary a;
	Binary b;
	Binary c;

	a.isiAngka(3, 8);
	b.isiAngka(5, 2);

	c = a + b;

	c.tampilAngka();
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/