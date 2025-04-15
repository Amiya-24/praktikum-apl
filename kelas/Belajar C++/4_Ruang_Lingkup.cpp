//                                                          Ruang Lingkup
// int main ()
// {
//     int c = a; // Kesalahan: nama 'a' tidak dalam lingkup / tidak ditemukan.
//     int a = 1; // ['a' Pertama] lingkup 'a' pertama dimulai.
//     ++ a; // nama 'a' adalah dalam lingkup dan mengacu pada 'a' yang pertama.
//     {
//         ++ a; // nama 'a' adalah dalam lingkup dan mengacu pada 'a' yang pertama.
//         int a = 2; // ['a' Kedua] lingkup 'a' kedua dimulai.
//         a = 42; // 'a' adalah dalam lingkup dan mengacu pada variabel 'a' yang kedua
//     } // Blok ujung, ruang lingkup 'a' kedua
//     // Ruang Lingkup 'a' pertama berlanjut
// } // Blok ujung, ruang lingkup 'a' pertama
// int b = a; // Kesalahan: nama 'a' tidak dalam ruang lingkup


//                                        Peraturan dalam ruang lingkup yang perlu diperhatikan:
/* Ruang lingkup bisa kita buat menggunakan sepasang tanda { dan } .
Sepasang tanda tersebut juga biasa digunakan dalam pembuatan function, class, struct dan lain sebagainya,
Semua yang ada dalam ruang lingkup akan disebut sebagai definisi.*/

/*Deklarasi harus dibuat dahulu sebelum dapat digunakan.*/

/* Dalam satu ruang lingkup, deklarasi tidak diperbolehkan untuk memiliki identitas yang sama */

/* Deklarasi yang didirikan di dalam ruang lingkup akan memiliki sifat lokal
yang memiliki arti hanya dapat digunakan di dalam ruang lingkup dimana deklarasi itu didirikan. */

/* Ruang Lingkup dimungkinkan untuk memiliki ruang lingkup di dalamya, hal itu dinamakan sebagai nested scope. 
Deklarasi yang didirikan di ruang lingkup induk akan dapat diakses di dalam anak ruang lingkup dan bahkan 
bisa digantikan dengan deklarasi baru yang memiliki nama yang sama di dalam anak ruang lingkup. 
Tapi deklarasi yang didirikan di dalam anak ruang linkup tidak bisa digunakan di induk ruang lingkup */


//                                                      contoh program 
#include <iostream>
using namespace std;
 
int main ()
{
    int a = 2;
    ++ a; // penjabaran: a + 1 , yang mana 'a' = 2 + 1 = 3
    {
        int a = 2;
        a = 42; // terjadi overwrite pada variabel 'a', yang semula bernilai 2 menjadi 42
        cout<<a<<endl;
    }
    cout<<a<<endl;
}
