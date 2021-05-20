#include <iostream>
using namespace std;

class Tali {
	public :
		inline void isiPanjang(int p){
			this->panjang = p;
		}

		inline int ambilPanjang(){
			return this->panjang;
		}

		inline int banding(int x, int y){
			int h;
			h = (x > y) ? x : y;
			return h;
		}

	private :
		int panjang;
};

int main(){
	Tali rafia;
	Tali nilon;

	rafia.isiPanjang(3);
	nilon.isiPanjang(5);
	cout << "Nilai terbesar adalah : "; 
	cout << rafia.banding(rafia.ambilPanjang(), nilon.ambilPanjang());
	cout << endl;


	rafia.isiPanjang(6);
	nilon.isiPanjang(8);
	cout << "Nilai terbesar adalah : "; 
	cout << rafia.banding(rafia.ambilPanjang(), nilon.ambilPanjang());
	cout << endl;


	rafia.isiPanjang(15);
	nilon.isiPanjang(20);
	cout << "Nilai terbesar adalah : "; 
	cout << nilon.banding(rafia.ambilPanjang(), nilon.ambilPanjang());
	cout << endl;

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/