#include <iostream>
using namespace std;

class Tali {
	public :
		int ambilPanjang();
		Tali(int p);			// Constructor

		Tali(const Tali & x);	// Copy Constructor

		~Tali();				// Destructor

	private :
		int *panjang;
};

int Tali:: ambilPanjang(){
	return *panjang;
}

Tali:: Tali(int p){
	cout << "Constructor utama ! \n";

	// Mengalokasikan memori dari pointer
	panjang = new int;
	*panjang = p;
}

Tali:: Tali(const Tali & x){
	cout << "Constructor hasil copy ! \n";

	panjang = new int;
	*panjang = *x.panjang;
}

Tali:: ~Tali(){
	cout << "Destructor \n";
	delete panjang;
}


void jalankan(Tali x){
	cout << "Panjang tali rafia : ";
	cout << x.ambilPanjang() << endl;
}

int main(){
	Tali rafia(20.0);

	Tali nilon = rafia;

	jalankan(rafia);
	jalankan(nilon);
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/