#include <iostream>
using namespace std;

class CetakData {
	public :
		void tampil(int i){
			cout << "Ini adalah tampil int " << i;
		}

		void tampil(double i){
			cout << "Ini adalah tampil double " << i;
		}

		void tampil(string i){
			cout << "Ini adalah tampil character " << i;
		}
};

int main(){
	CetakData ceda;

	ceda.tampil(28.654);
	cout << endl;
	ceda.tampil("Anang Nur Prasetya | C++");
	cout << endl;
	ceda.tampil(20);
	cout << endl;
	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/