#include <iostream>
using namespace std;

// Variabel adalah suatu tempat yang berfungsi untuk menyimpan nilai atau konstanta
// Nilai tersebut biasanya di dapat dari masukan pengguna, programmer, lingkungan, atau merupakan hasil dari proses program

//                                                Cara Mendirikan Variabel
// Deklarasi variabel adalah proses mendirikan atau pembuatan variabel dalam kode program
// Untuk mendirikan variabel kita membutuhkan sebuah tipe data yang berguna untuk mewakili bentuk nilai yang akan disimpan dan sebuah nama (identifier) sebagai pengenal

// contoh penulisan
int umur; // umur merupakan variabel dengan tipe data integer dengan nilai yang belum diketahui
int umur = 18; // umur merupakan variabel dengan tipe data integer dengan nilai yang telah ditentukan yaitu 18


//                                          Peraturan pemberian identitas variabel
// Dalam peraturan pemberian identitas variabel dapat terdiri dari huruf, angka dan karakter "_"
// Nama variabel harus dimulai dengan huruf atau tanda garis bawah "_"
// Huruf besar dan huruf kecil dalam pemrograman C++ akan dianggap berbeda meskipun memiliki nama yang sama karena C++ merupakan Bahasa Pemrograman Case-Sensitive
// Ada satu peraturan lainnya dalam pemberian nama pada variabel yaitu tidak boleh menggunakan spasi saat penamaan variabel

// contoh penulisan yang benar
int belajarcpp;
int belajar_cpp;
int belajarCpp5;


//                                            Jenis-jenis Tipe Data pada Variabel
// Tipe data variable secara umum bisa dibedakan menjadi tiga, yaitu:

//    Variabel Numerik: Memungkinkan pengguna menyimpan data dalam bentuk angka atau bilangan.Variabel numerik dapat dibagi menjadi  
//                      beberapa bagian yaitu: Bilangan Bulat (Integer int), 
//                                             Bilangan Desimal Berpresisi Tunggal (Floating Point float). 
//                                             Bilangan Desimal Berpresisi Ganda (Double Precision double).

//    Variabel Text: Memungkinkan pengguna untuk menyimpan data berbentuk karakter. 
//                   Bahasa pemrograman C++ menyediakan beberapa tipe data untuk variabel jenis ini, seperti char (Character / Karakter tunggal), 
//                   dan string (kumpulan dari karakter atau kata) dll.

//    Boolean: merupakan jenis yang hanya dapat mewakili satu dari dua pilihan yaitu 1 (True) atau 0 (False). 
//    Pada pemrograman C++ kita dapat gunakan tipe data jenis ini, dengan memberikan keyword bool.


//                                        Mendirikan banyak Variabel dengan satu tipe data
// Pada bahasa pemrograman kita dimungkinkan untuk mendirikan banyak variabel dalam satu baris dan satu tipe data
// Jika memang variabel-variabel yang kita butuhkan memiliki tipe data yang sama.


//                                                     contoh penulisan 
bool variabelBool = 0, variabel_boolean;
char variabelChar, variabel_char = 'a';
string variabelString = "Belajar Cpp", variabel_string;
int variabelInt, variabel_int = 9;
float variabelFloat = 20.9 , variabel_float;
double variabelDouble, variabel_double = 90.0;


//                                                      contoh program
#include <iostream>
using namespace std;
 
int main ()
{
   // Pendeklarasian variabel:
   int a, b = 2;
   int hasil;
 
   // Operasi
   a = 5; //Assignment Operator bukan inisialisasi
   a = a + 1;
   hasil = a - b;
 
   //Output hasil operasi di atas
   cout <<"Hasil dari operasi variabel adalah :"<<hasil;
 
  return 0;
}
