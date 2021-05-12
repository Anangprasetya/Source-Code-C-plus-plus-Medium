#include <iostream>
using namespace std;

class SegitigaSiku {
	private :
		void nilai_max(){
			for (int i = 0; i < this->n; i++)
				for (int j = 0; j <= i; j++)
					this->picu += 1;

			while(this->picu != 0){
				this->picu = this->picu / 10;
				this->panjang++;
			}

			this->picu = 0;
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

		void cetak(){
			for (int i = 0; i < this->n; i++)
			{
				if (i % 2 == 0)
				{
					for (int j = 0; j <= i; j++)
					{
						this->picu += 1;
						cout << this->picu;
						this->jarak_tampil(this->picu);
					}
				}
				else{
					this->picu += i + 1;
					for (int j = 0; j <= i; j++)
					{
						cout << picu - j;
						this->jarak_tampil(this->picu - j);
					}
				}
				cout << endl;
			}
		}


	public :
		SegitigaSiku(){
			cout << "Masukkan banyak : ";
			cin >> this->n;
		}

		~SegitigaSiku(){
			this->nilai_max();
			this->cetak();
		}

	protected :
		int n, picu = 0;
		int panjang = 0, panjang2 = panjang, space;
};

int main(){
	SegitigaSiku sk;
	sk;
	return 0;
}




/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/