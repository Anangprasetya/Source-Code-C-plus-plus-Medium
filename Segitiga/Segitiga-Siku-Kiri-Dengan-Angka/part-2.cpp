#include <iostream>
using namespace std;

int main(){
	int n;
	int picu = 0;
	int panjang = 0, panjang2 = 0;
	int space;
	cout << "Masukkan banyak : ";
	cin >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			picu += 1;
		}
	}

	while(picu != 0){
		picu = picu / 10;
		panjang++;

	}
	picu = 0;
	cout << "maksimal panjang : " << panjang << endl << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			picu += 1;
			cout << picu;
			space = picu;
			while(space != 0){
				space = space / 10;
				panjang2++;
			}
			for (int k = panjang2; k < panjang + 1; k++)
				cout << " ";
			
			panjang2 = 0;
		}
		cout << endl;
	}
	return 0;
}






/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/