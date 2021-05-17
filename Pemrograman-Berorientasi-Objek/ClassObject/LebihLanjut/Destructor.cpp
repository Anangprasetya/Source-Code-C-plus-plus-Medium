#include <iostream>
using namespace std;

class Tali {
	public :
		void isiPanjang(double p);
		double ambilPanjang(void);

		Tali();		// Constructor

		~Tali();	// Ini adalah Destructor
					// Ditandai dengan tanda seperti itu sebelum nama

	private :
		double panjang;
};

Tali:: ~Tali(){
	cout << "Object ini dijalankan paling akhir ";
	cout << "\n\n\n";
}

Tali:: Tali(){
	cout << "\n\n\n";
	cout << "Object telah dibuat, dan Constructor ini dijalankan" << endl;
}

void Tali:: isiPanjang(double p){
	this->panjang = p;
}

double Tali:: ambilPanjang(void){
	return this->panjang;
}

int main(){
	Tali rafia;

	rafia.isiPanjang(20.0);
	cout << "Panjang tali rafia : " << rafia.ambilPanjang() << endl;
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/