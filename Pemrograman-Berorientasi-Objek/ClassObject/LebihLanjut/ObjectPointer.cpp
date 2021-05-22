#include <iostream>
using namespace std;

class Mobil {
	public :
		Mobil(string w, int t){
			this->warna = w;
			this->tahun = t;
		}

		void tampil(){
			cout << "Warna : " << this->warna << endl;
			cout << "Tahun : " << this->tahun << endl;
		}

	private :
		string warna;
		int tahun;
};

int main(){
	Mobil avanza("Putih", 2017);
	Mobil xenia("Hitam", 2014);

	Mobil *obj;		// Deklarasi objek Pointer

	obj = &avanza;	// Isi objek pointer dengan alamat objek avanza
	obj->tampil();	// akses method tampil hak akses public

	cout << endl;

	obj = &xenia;	// Isi objek pointer dengan alamat objek xenia
	obj->tampil();	// akses method tampil hak akses public

	return 0;
}