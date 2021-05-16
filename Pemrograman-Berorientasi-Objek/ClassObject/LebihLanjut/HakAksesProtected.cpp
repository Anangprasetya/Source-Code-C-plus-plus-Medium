#include <iostream>
using namespace std;

class Tali {
	// Atribut panjang kita beri hak akses Protected
	protected :
		double panjang;
};


// class Nilon adalah turunan dari class Tali
class Nilon : Tali {
	public :
		void isiPanjang(double p);
		double ambilPanjang();
};


double Nilon::ambilPanjang(){ return this->panjang; }

void Nilon::isiPanjang(double p){ this->panjang = p; }


int main(){
	Nilon besar;

	// Akses atribut di class induk melalu class turunannya
	besar.isiPanjang(20.0);
	cout << "Besar tali nilon memiliki panjang : " << besar.ambilPanjang() << endl;
	
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/