#include <iostream>
using namespace std;

class Tali {
	public :
		double panjang;

		void isiPanjang(double p);
		double ambilPanjang();
};

double Tali::ambilPanjang(){
	return this->panjang;
}

void Tali::isiPanjang(double p){
	this->panjang = p;
}

int main(){
	Tali rafia;

	// Akses atribut atau mengisi atribut melalui methd
	rafia.isiPanjang(20.0);
	cout << "Panjang rafia adalah : " << rafia.ambilPanjang() << endl;

	// Akses atribut tanpa perantara
	rafia.panjang = 5.0;
	cout << "Panjang rafia adalah : " << rafia.panjang << endl;
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/