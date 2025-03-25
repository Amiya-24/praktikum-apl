#include <iostream>
using namespace std;

//                         // Perbedaan Fungsi & Prosedur
// Fungsi adalah blok kode yang berfungsi mengembalikan nilai. Fungsi dideklarasikan dengan tipe data yang akan dikembalikan.
/*

Tipe_data nama_fungsi(tipe_data_parameter nama_parameter){
    // isi fungsi
}

// Prosedur adalah blok kode yang tidak mengembalikan nilai. Prosedur dideklarasikan dengan void.
void nama_fungsi(tipe_data_parameter nama_parameter){
    // isi fungsi
}
*/ 

//                           // Parameter & Argumen
// Parameter adalah variabel yang digunakan dalam deklarasi
int tambah(int a, int b){
    return a + b;  // Menghasilkan nilai yang diambil dari a dan b
}

// Argumen adalah nilai yang dikirimkan saat fungsi dipanggil
int main(){
 int hasil = tambah(5, 6);
 cout << "Hasil penambahan: " << hasil << endl;
 return 0;
 
}


//                          // Jenis-jenis Parameter

// Pass by value
int ubahNilai(int a);

// Pass by reference
int ubahNilai(int &a);

// Default parameter
int ubahNilai(int a = 5);


//                           // Fungsi Overloading
/* Fungsi Overloading adalah teknik yang memungkinkan kita membuat beberapa fungsi dengan nama yang sama, 
tetapi dengan jumlah atau tipe parameter yang berbeda. */
int tambah(int a, int b);

double tambah(double a, double b);

int tambah(int a);


//                                // Rekursif
/* Rekursif adalah teknik pemrograman dimana sebuah fungsi memanggil dirinya sendiri. 
Rekursif memerlukan kondisi untuk menghentikan perulangan. */
int faktorialRekursif(int n) {
    if (n == 1) return 1; // Base case (berhenti saat n = 1)
    return n * faktorialRekursif(n - 1); // Rekursi
}


//                          // Variabel Global & Lokal
/* Variabel global adalah variabel yang dideklarasikan di luar fungsi dan bisa digunakan di seluruh bagian program.
Variabel lokal adalah variabel yang dideklarasikan di dalam fungsi dan hanya bisa digunakan dalam fungsi tersebut. */


//                                   // Contoh
//                  // Contoh Fungsi setelah Fungsi main() :
#include <iostream>
using namespace std;

//Deklarasi fungsi
int tambah(int a1, int a2);

int main(){
    //Pemanggilan fungsi
    int angka1, angka2;
    cout << "Angka Pertama : "; cin >> angka1;
    cout << "Angka Kedua : "; cin >> angka2;
    cout << "Hasil Penjumlahan = " << tambah(angka1, angka2);
}

//Definisi fungsi
int tambah(int a1, int a2){
    int hasil;
    //Perlu ditampung pada variabel
    hasil = a1 + a2;
    return hasil;
}

//                  // Contoh Fungsi sebelum Fungsi main() :
#include <iostream>
using namespace std;

//Definisi fungsi
int tambah(int a1, int a2){
    int hasil;
    hasil = a1 + a2;
    return hasil;
}

int main(){
    int angka1, angka2;
    cout << "Angka Pertama : "; cin >> angka1;
    cout << "Angka Kedua : "; cin >> angka2;

    //Pemanggilan Fungsi
    cout << "Hasil Penjumlahan = " << tambah(angka1, angka2);
}

//                  // Contoh Prosedur setelah main():
#include <iostream>
using namespace std;

// Deklarasi prosedur
void hasilTambah(int a, int b);

int main(){
    // Pemanggilan prosedur (tidak perlu ditampung pada variabel)
    hasilTambah(5, 3);
    return 0;
}

// Definisi prosedur
void hasilTambah(int a, int b){
    cout << "Hasil penjumlahan " << a << " + " << b << " = " << a + b << endl;
}

//                  // Contoh Prosedur sebelum main();
#include <iostream>
using namespace std;

// Definisi prosedur
void hasilTambah(int a, int b){
    cout << "Hasil penjumlahan " << a << " + " << b << " = " << a + b << endl;
}

int main(){
    // Pemanggilan prosedur
    hasilTambah(5, 3);
    return 0;
}

//            // Contoh Parameter & Argumen dalam Fungsi Prosedur:
#include <iostream>
using namespace std;

// Fungsi prosedur dengan parameter
void sapaUser(string nama){
    cout << "Halo, " << nama << "! Selamat datang di C++." << endl;
}

int main(){
    sapaUser("Ifnu"); // "Ifnu" adalah argumen
    return 0;
}

//              //  Parameter berdasarkan nilai (pass by value)
#include <iostream>
using namespace std;

void ubahNilai_(int x) {
    x = 10; // Hanya mengubah nilai dalam fungsi
}

int main() {
    int angka = 5;
    ubahNilai_(angka);
    cout << "Nilai angka setelah fungsi dipanggil: " << angka << endl; // Masih 5
    return 0;
}

//            // Parameter Berdasarkan Referensi (Pass by Reference)
#include <iostream>
using namespace std;

void ubahNilai1(int &x) {
    x = 10; // Mengubah nilai asli
}

int main() {
    int angka = 5;
    ubahNilai1(angka);
    cout << "Nilai angka setelah fungsi dipanggil: " << angka << endl; // Menjadi 10
    return 0;
}

//                      // Parameter dengan Default Value
#include <iostream>
using namespace std;

void sapaUser(string nama = "User") {
    cout << "Halo, " << nama << "!" << endl;
}
int main() {
    sapaUser(); // Output: "Halo, User!"
    sapaUser("Ifnu"); // Output: "Halo, Ifnu!"
    return 0;
}

//                          // Contoh Variabel Global:
#include <iostream>
using namespace std;

int globalVar = 20; // Variabel global

void contohFungsi() {
    cout << "Nilai globalVar dalam fungsi: " << globalVar << endl;
}
int main() {
    contohFungsi();
    cout << "Nilai globalVar dalam main: " << globalVar << endl;
    return 0;
}

//                          // Contoh Variabel Lokal:
#include <iostream>
using namespace std;

void contohFungsi() {
    int lokalVar = 10; // Variabel lokal
    cout << "Nilai lokalVar: " << lokalVar << endl;
}

int main() {
    contohFungsi();
    // cout << lokalVar; // ERROR! lokalVar tidak bisa diakses di sini
    return 0;
}

//                        // Contoh Shadowing Variabel:
#include <iostream>
using namespace std;

int angka = 50; // Variabel global
void contohFungsi() {
    int angka = 10; // Variabel lokal dengan nama yang sama
    cout << "Nilai angka dalam fungsi: " << angka << endl; // Menampilkan 10
}
int main() {
    contohFungsi();
    cout << "Nilai angka dalam main: " << angka << endl; // Menampilkan 50
    return 0;
}


// contoh crud login
bool login(string username, string password) {
    return username == "faiz" && password == "031";
}

int main() {
    if (!login("faiz", "031")) {
        cout << "Login gagal" << endl;
        exit(0);

    } else {
        cout << "Login berhasil" << endl;
    }
    return 0;
}