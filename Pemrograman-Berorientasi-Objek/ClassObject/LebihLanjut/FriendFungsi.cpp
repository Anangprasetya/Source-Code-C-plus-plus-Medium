#include <iostream>
using namespace std;

class Kotak {
	double panjang;

	public :
		void isiPanjang(double p){
			this->panjang = p;
		}
	protected :
		friend void cetakPanjang(Kotak x);
};

void cetakPanjang(Kotak x){
	cout << "Panjang : " << x.panjang << endl;
}

int main(){
	Kotak obj;

	obj.isiPanjang(20.0);
	cetakPanjang(obj);
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/