#include <iostream>
using namespace std;

class SegiEmpat {
	public :
		void isiPanjang(int p){
			this->panjang = p;
		}

		void isiLebar(int l){
			this->lebar = l;
		}

	protected :
		int panjang;
		int lebar;

};

class PersegiPanjang : public SegiEmpat {
	public :
		int luas(){
			return this->panjang * this->lebar;
		}
};


int main(){
	PersegiPanjang pp;

	// Perhatikan, class PersegiPanjang dapat mengakses
	// method yang ada di class SegiEmpat dan Keliling

	pp.isiPanjang(4);
	pp.isiLebar(5);
	cout << "Luas : " << pp.luas() << endl;
	
	return 0;
}





