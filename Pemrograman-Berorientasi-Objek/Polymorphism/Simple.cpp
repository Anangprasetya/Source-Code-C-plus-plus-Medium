#include <iostream>
using namespace std;

class OrangTua {
   public :
      virtual void cetak() = 0;
};


class AnakSatu : public OrangTua {
   private :
      void cetak(){
         cout << "    Class Anak Satu  \n";
      }
};


class AnakDua : public OrangTua {
   private :
      void cetak(){
         cout << "    Class Anak Dua  \n";
      }
};


int main(){
   OrangTua * ot;

   AnakSatu as;
   AnakDua ad;

   ot = &as;
   ot->cetak();


   ot = &ad;
   ot->cetak();

   return 0;
}


/* 
==================================================================
===================== ANANG NUR PRASETYA     =====================
===================== anangnr.pras@gmail.com =====================
==================================================================
*/