#include <iostream>
using namespace std;

class Struktur {
	public :
		void prima(int a, int b){
			this->n = b;
			int i;
			int hasil[n];
			bil=a; 
		    while(bil<=n){
		    	cek=0;
	            for(int j=2;j<=bil;j++){
                  if(bil%j==0){
                        cek++; 
                  }
	            }
	            if(cek==1){
	                 hasil[i]=bil; //simpan prima di array
	                 i++; //penambahan index array
	            }
	            bil++;
		    }
		    this->cetak(hasil, i);

		}


		void fibonannci(int a){
			int fibo_n, fibo_n2=1, fibo_n1=0;
			int hasil[a];
			int x = 0;

			for (int i = 0; i < a; i++)
			{
				fibo_n = fibo_n1 + fibo_n2;
				hasil[x] = fibo_n1;
				x++;


				fibo_n1 = fibo_n2;
				fibo_n2 = fibo_n;
			}

		    this->cetak(hasil, x);


		}


	private :
		int bil;
		int n;
		int cek;

		void cetak(int x[], int y){
			for(int j=0;j<y;j++){ //mencetak semua bilangan prima
            cout<<x[j];
              if(j < y-1){ 
                   cout<<", ";
              }else{
                   cout<<".\n";
              }
	      }
		}
};



int main(){
	Struktur obj;

	obj.prima(3, 15);
	obj.fibonannci(6);

	return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/