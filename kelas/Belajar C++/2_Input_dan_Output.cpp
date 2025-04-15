// Output 
/* Dalam bahasa C++ kita dapat melakukan output menggunakan object "cout" yang di ikuti oleh Insertion operator dengan tanda "<<" */

// Input
/* Dalam bahasa C++ kita dapat melakukan input menggunakan object "cin" yang di ikuti oleh Extraction Operator dengan tanda ">>" */

// Contoh input dan output
#include <iostream>
using namespace std;
int main ( ) {
   int x ; // x merupakan sebuah variabel dengan tipe data integer
   cout << "Masukkan sebuah angka : "; // agar terdapat output yang memberikan petunjuk untuk menginput sebuah angka
   cin >> x; // menginput kemudian disimpan pada variabel x
   cout << "Angka yang dimasukkan adalah " << x <<endl; // sebagai output yang dimenampilkan angka yang kita input
   return 0;
}