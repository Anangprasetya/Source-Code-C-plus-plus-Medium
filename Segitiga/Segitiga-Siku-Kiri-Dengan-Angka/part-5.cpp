#include <iostream>
using namespace std;
class SegitigaSikuKiri {
	private :
		void nilai_max(){
			for (int i = 0; i < this->n; i++)
				for (int j = 0; j <= i; j++)
					this->picu += 1;

			while(this->picu != 0){
				this->picu = this->picu / 10;
				this->panjang++;
			}
		}
		inline void jarak_tampil(int x){
			while(x != 0){
				x = x / 10;
				this->panjang2++;
			}
			for (int i = this->panjang2; i < this->panjang + 1; i++)
				cout << " ";

			this->panjang2 = 0;
		}
		void tampil(){
			for (int i = 0; i < this->n; i++)
			{
				// Korelasi antara baris dan nilai terbesar
				this->picu = i + 1;  

				for (int j = 0; j <= i; j++){
					cout << this->picu - j;
					this->jarak_tampil(this->picu - j);
				}

				cout << endl;
			}
		}
	public :
		SegitigaSikuKiri(){
			cout << "Masukkan banyak : ";
			cin >> this->n;
		}
		~SegitigaSikuKiri(){
			this->nilai_max();
			this->tampil();
		}
	protected :
		int n, picu = 0;
		int panjang = 0, panjang2 = 0;
};
int main(){
	SegitigaSikuKiri ssk;
	ssk;
	return 0;
}







/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/