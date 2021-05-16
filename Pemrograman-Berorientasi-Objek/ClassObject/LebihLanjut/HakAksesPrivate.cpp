#include <iostream>
using namespace std;

class Tali {
	// Atribut panjang kita beri hak akses Private
	private :
		double panjang;

	public :
		string warna;
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

	// Akses atribut tanpa perantara
	rafia.warna = "Biru";
	cout << "Warna tali rafia adalah : " << rafia.warna << endl;

	// Akses atribut melalui perantara
	rafia.isiPanjang(20.0);
	cout << "Panjang tali rafia adalah : " << rafia.ambilPanjang() << endl;
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/