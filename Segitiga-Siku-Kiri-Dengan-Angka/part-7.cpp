#include <iostream>
using namespace std;

class SegitigaSikuKiri {
	public :
		SegitigaSikuKiri(){
			cout << "Masukkan besar segitiga : ";
			cin >> this->n;
		}

		~SegitigaSikuKiri(){
			this->nilai_max();
			this->tampil();
		}
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
				int ganjil = -1;
				int genap = 0;

				for (int j = 0; j <= i; j++)
				{
					// Kondisi saat kolom 0 
					if (j == 0)
					{
						this->angka = i + 1;
						cout << this->angka;
						this->jarak_tampil(this->angka);
					}

					// Kondisi saat kolom genap
					else if (j % 2 == 0)
					{
						// Perulangan dari j sampai i untuk mendapatkan interval di baris ke-i dan kolom ke-j
						for (int k = j; k <= i; k++)
							genap += 2;


						this->angka = this->angka + genap;
						cout << this->angka;
						this->jarak_tampil(this->angka);

						// reset variabel untuk interval genap
						genap = 0;

					}

					// Kondisi saat kolom ganjil
					else {
						// Perulangan dari i sampai n untuk mendapatkan interval di baris ke-i
						for (int k = i; k < this->n; k++)
							ganjil += 2;



						this->angka = this->angka + ganjil;
						cout << this->angka;
						this->jarak_tampil(this->angka);


						// reset variabel untuk interval ganjil
						ganjil = -1;
					}
				}

				cout << endl;
			}
		}

	protected :
		int n, angka;
		int panjang = 0, panjang2 = 0, picu = 0;

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