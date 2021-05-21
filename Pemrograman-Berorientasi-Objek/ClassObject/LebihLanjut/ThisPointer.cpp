#include <iostream>
using namespace std;

class Rumah {
	public :
		Rumah(string w, string p){
			this->warna = w;
			// Objeck this menunjuk atribut warna

			this->posisi = p;
			// Objeck this menunjuk atribut posisi

		}

		void tampil(){
			cout << "Warna : " << this->warna << endl;
			// kode this->warna dapat di tulis warna saja

			cout << "Posisi : " << this->posisi << endl;
		}

	private :
		string warna;
		string posisi;
};

int main(){
	cout << "\n\n\n";
	Rumah anang("Biru", "Mojokerto");
	anang.tampil();
	cout << "\n\n\n";
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/