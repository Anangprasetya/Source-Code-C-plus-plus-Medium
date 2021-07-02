#include <iostream>
using namespace std;

const int ukuran = 20;

class Array {
	private :
		int arr[ukuran];

	public :
		Array(){
			int i;
			for (i = 0; i < ukuran; i++)
			{
				arr[i] = i + 3;
			}

		}

		int operator [] (int i){
			if (i > ukuran){
				cout << "  Indek tidak ditemukan \n";
				return arr[0];
			}

			return arr[i];
		}
};


int main(){
	Array X;
	cout << " x[2]  : " << X[2] << endl;
	cout << " x[6]  : " << X[6] << endl;
	cout << " x[9]  : " << X[9] << endl;
	cout << " x[1]  : " << X[1] << endl;


	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/