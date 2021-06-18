#include <iostream>
using namespace std;

class TTL {
	private :
		int tanggal;
		int tahun;

	public :
		TTL(int t, int h){
			this->tanggal = t;
			this->tahun = h;
		}

		void cetak(){
			cout << "  " << this->tanggal;
			cout << " " << this->tahun;
			cout << endl << endl;
		}


		TTL operator ++ (){
			tanggal += 1;
			tahun += 1;

			return TTL(tanggal ,tahun);
		}

		TTL operator ++ (int){
			tanggal += 1;
			tahun += 1;

			return TTL(tanggal, tahun);
		}

		TTL operator -- (){
			tanggal -= 1;
			tahun -= 1;

			return TTL(tanggal ,tahun);
		}

		TTL operator -- (int){
			tanggal -= 1;
			tahun -= 1;

			return TTL(tanggal, tahun);
		}


};

int main(){
	TTL a(3 , 2017);
	TTL b(4, 2019);


	a.cetak();
	b.cetak();
	++a;
	--b;


	a.cetak();
	b.cetak();
	a++;
	b--;

	a.cetak();
	b.cetak();

	return 0;

}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/