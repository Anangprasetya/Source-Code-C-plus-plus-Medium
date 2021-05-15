#include <iostream>
using namespace std;

class Kotak {
	public :
		double panjang;
		double lebar;
		double tinggi;

		// Deklarasi Method
		double ambilVolume();
		void isiPanjang(double p);
		void isiLebar(double l);
		void isiTinggi(double t);
};

double Kotak::ambilVolume(){
	return panjang * lebar * tinggi;
}

void Kotak::isiPanjang(double p){ 
	this->panjang = p; 
}

void Kotak::isiLebar(double l){ 
	this->lebar = l; 
}
void Kotak::isiTinggi(double t){ 
	this->tinggi = t; 
}


int main(){
	Kotak satu;
	Kotak dua;
	double v;

	// Object satu mengakses beberapa method didalam class
	satu.isiPanjang(8.00);
	satu.isiLebar(6.00);
	satu.isiTinggi(9.00);
	v = satu.ambilVolume();
	cout << "Volume Kotak Pertama adalah : " << v << endl;

	// Object dua mengakses beberapa method didalam class
	dua.isiPanjang(13.00);
	dua.isiLebar(10.00);
	dua.isiTinggi(14.00);
	v = dua.ambilVolume();
	cout << "Volume Kotak Kedua adalah : " << v << endl;

	return 0;
}

/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/