#include <iostream>
using namespace std;

class SegitigaSikuKiri{
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
		void tampi(){
			for (int i = 0; i < this->n; i++)
			{
				// Analisis untuk yang warna hitam
				this->picu = i + 1; 

				for (int j = 0; j <= i; j++)
				{
					if (j == 0){
						cout << this->picu;
						this->jarak_tampil(this->picu);
					}
					else{
						// Analisis untuk yang warna merah
						this->picu = this->picu + (this->n - j);
						cout << this->picu;
						this->jarak_tampil(this->picu);
					}
				}
				cout << endl;
			}
		}
	public :
		SegitigaSikuKiri(){
			cout << "\n\n\n";
			cout << "Masukkan angka : ";
			cin >> this->n;
		}
		~SegitigaSikuKiri(){
			this->nilai_max();
			this->tampi();
			cout << "\n\n\n";
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