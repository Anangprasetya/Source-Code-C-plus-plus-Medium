#include <iostream>
using namespace std;

class Kotak {
	public :
		double panjang;
		double lebar;
		double tinggi;
};

int main(){
	Kotak pertama;	// objek pertama dari class Kotak
	Kotak kedua;	// objek kedua dari class Kotak
	double volume;

	// objek pertama mengakses data
	pertama.panjang = 4.0;
	pertama.lebar = 5.0;
	pertama.tinggi = 8.0;
	cout << "\n\n\n";
	volume = pertama.panjang * pertama.lebar * pertama.tinggi;
	cout << "Volume Kotak Pertama adalah : " << volume << endl;


	// objek kedua mengakses data
	kedua.panjang = 9.0;
	kedua.lebar = 13.0;
	kedua.tinggi = 16.0;

	volume = kedua.panjang * kedua.lebar * kedua.tinggi;
	cout << "Volume Kotak Kedua adalah : " << volume << endl;

	cout << "\n\n\n";

	return 0;
}



/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/