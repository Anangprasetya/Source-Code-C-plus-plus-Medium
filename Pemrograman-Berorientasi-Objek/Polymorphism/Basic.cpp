#include <iostream>
using namespace std;

class Kendaraan {
	protected :
		int kecepatan, berat;
		string medium;

	public :
		virtual void info() = 0;

		
};



class Darat : public Kendaraan {
	public :
		Darat(int k, int b, string m){
			this->kecepatan = k;
			this->berat = b;
			this->medium = m;
		}

		void info(){
			cout << "         Class Darat\n";
			cout << "         Kecepatan : " << this->kecepatan << endl;
			cout << "         Berat     : " << this->berat << endl;
			cout << "         Medium    : " << this->medium << endl;
		}
};

class Terbang : public Kendaraan {
	public :
		Terbang(int k, int b, string m){
			this->kecepatan = k;
			this->berat = b;
			this->medium = m;
		}

		void info(){
			cout << "         Class Terbang\n";
			cout << "         Kecepatan : " << this->kecepatan << endl;
			cout << "         Berat     : " << this->berat << endl;
			cout << "         Medium    : " << this->medium << endl;
		}
};



int main(){
	Kendaraan * trans;
	Darat mobil(90, 40, "Tanah");
	Terbang jet(300, 120, "Udara");

	trans = &mobil;
	trans->info();

	cout << endl;

	trans = & jet;
	trans->info();

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/