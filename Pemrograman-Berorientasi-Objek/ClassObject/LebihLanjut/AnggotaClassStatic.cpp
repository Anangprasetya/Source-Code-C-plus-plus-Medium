#include <iostream>
using namespace std;

class Mobil {
	public :
		static int jumlahObjek;

		Mobil(string p, string w){
			this->pemilik = p;
			this->warna = w;

			this->jumlahObjek++;
		}

		void tampil(){
			cout << "Pemilik : " << this->pemilik << endl;
			cout << "Warna : " << this->warna << endl;
		}

		static int jumlah(){
			return jumlahObjek;
		}

	private :
		string pemilik;
		string warna;
};

int Mobil::jumlahObjek = 0; // Isi atribut dengan 0

int main(){
	cout << "banyak objek : " << Mobil::jumlah() << endl;
	Mobil Lamborghini("Anang Nur Prasetya", "Merah");
	Mobil Tesla("Dwi Asmaul", "Biru");

	Lamborghini.tampil();
	Tesla.tampil();
	cout << endl;

	// Akses atribut jumlahObjek 
	cout << "Banyak objek : " << Mobil::jumlah() << endl;

	// Perhatikan saat mengakses atribut jumlahOjek, tidak menggunakan objek siapa pun.
	// Tapi langsung diakses dari class 

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/