# include <iostream>
using namespace std;

// //                                      passByValue
// struct Address{
//     string kota;
//     string provinsi;
//     string negara;
// };
// int main(){
//     // deklarasi variabel dengan struct
//     Address address_1, address_2;

//     // mengisi value address_1
//     address_1.kota = "Samarinda";
//     address_1.provinsi = "Kalimantan Timur";
//     address_1.negara = "Indonesia";

//     // mengcopy value address_1 ke address_2
//     address_2 = address_1;

//     // mengganti property kota dari samarinda ke ikn
//     address_2.kota = "Balikpapan";

//     // value address_1
//     cout << address_1.kota <<endl;

//     // value address_2
//     cout << address_2.kota;
//     return 0;
// }

// //                                  ADDRESS-OF OPERATOR ( & )
// int main () {
//     string nama = "Faiz";
//     cout << &nama << " adalah alamat dari data " << nama <<endl;
//     return 0;
// }


// //                                  DEREFERENCE OPERATOR ( * )
// int main () {
//     string var = "Aku Variabel";
//     // berikut adalah variabel pointer bernama varPtr
//     // yang menampung alamat dari variabel var
//     // dengan begini akan ada variabel varPtr yang memiliki value alamat
//     // dari variabel var

//     string *varPtr = &var; // ini adalah variabel pointer
//     // jika kita print varPtr maka akan mengeluarkan output alamat dari
//     // variabel var

//     cout << "Hasil dari varPtr: " << varPtr << endl;
//     // karena varPtr adalah pointer yang menunjuk ke var maka varPtr
//     // bisa menggunakan value dari var
//     // dengan ini kita memanfaatkan operator Dereference ( * )

//     cout << "Hasil dari *varPtr: " << *varPtr <<endl;
//     cout << endl << "Kesimpulannya varPtr isi nya alamatnya var"<<endl;
//     cout << "*varPtr hasilnya value dari var"<<endl;
//     cout << "Jika masih bingung bisa amati output berikut"<<endl;
//     cout <<endl;
//     cout << "Hasil/value dari var " << var <<endl;
//     cout << "Hasil/value dari alamat var (&var) " << &var<<endl;
//     cout << "Hasil/value dari varPtr " << varPtr <<endl;
//     cout << "Hasil/value dari *varPtr " << var <<endl;
//     return 0;
// }


// //                                          POINTER PADA ARRAY
// int main () {
//     cout << "pointer yang menunjuk ke suatu array"<< endl;
//     int a[5] = {1,2,3,4,5};
//     int (*aPtr)[5] = &a;

//     for (int i =0; i <5; i++){
//         cout << *aPtr <<endl;
//     }
    
//     cout << "Pointer yang menunjuk ke arah elemen array" <<endl;
//     int b[5] = {1,2,3,4,5,};
//     int *bPtr = b;
    
//     for (int i = 0; i < 5; i++){
//         cout << bPtr <<endl;
//         // cout << *bPtr <<endl;
//         bPtr++;
//     }
//     return 0;
// }

// //                                      POINTER SEBAGAI PARAMETER FUNGSI
// int ubahNilai(int a, int b){
//     return a=b;
// }
// int main () {
//     int a,b;
//     a=5;
//     b=20;
//     ubahNilai( a, b );
//     cout << a << endl;
//     cout << b << endl;
//     return 0;
// }

// // Penggunaan Address-of Operator ( & ) sebagai parameter fungsi
// int ubahNilai(int a, int &b){
//     return b=a;
// }
// int main () {
//     int a,b;
//     a=25;
//     b=20;
//     ubahNilai( a, b );
//     cout << b;
//     return 0;
// }

// // Penggunaan Dereference Operator ( * ) sebagai parameter fungsi
// int ubahNilai(int a, int *b){
//     return *b=a;
// }
// int main () {
//     int a,b;
//     a=25;
//     b=20;
//     ubahNilai( a, &b );
//     cout << a;
//     return 0;
// }

// // POINTER PADA STRUCT
// struct Menu {
//     string nama;
//     float harga;
// };
// int main () {
//     Menu nasgor;
//     Menu *nasgorPtr = &nasgor;
//     nasgor.nama = "Nasi Goreng Cumi Hitam Pak Kris";
//     nasgor.harga = 15000;
//     cout << nasgor.nama << " " << nasgor.harga<<endl;
//     // kita bisa mengakses/manipulasi value variabel nasgor
//     // melalui variabel nasgorPtr

//     nasgorPtr->nama = "Nasi Goreng Mawut";
//     nasgorPtr->harga = 13000;
//     cout << nasgor.nama << " " << nasgor.harga <<endl;
    
//     // kalau memberi value pada atribut biasa pakai ( . )
//     // kalau memberi value pada atribut dari pointer pakai ( -> )
//     return 0;
// }