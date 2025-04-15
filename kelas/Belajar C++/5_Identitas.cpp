//                                                  Pengertian Identifier
// Identifier atau dalam bahasa Indonesia merupakan Identitas. 
// Identifier adalah identitas atau nama yang telah diberikan kepada function, variabel, obyek, class, namespace dan lain-lain.

// Identifier merupakan suatu identitas untuk sebuah deklarasi yang kita dirikan agar CPU, programmer maupun manusia dapat 
// Mudah mengenali deklarasi dalam kode program. Berikut adalah hal yang harus anda perhatikan dalam pembuatan nama atau identitas:


//                                          Hal dan Peraturan Pembuatan Identifier
/*  1. Identifier dapat terdiri dari satu atau beberapa karakter yang terdiri dari angka (0-9), huruf (A-Z, a-z), Simbol Dollar ($), 
       garis bawah (_). Tapi ingat dalam pembuatan identifier tidak boleh menggunakan angka pada awal dari dari identitas, 
       contoh: 5 menit.

    2. Case Sensitive: yang harus anda perhatikan di sini adalah membedakan Huruf besar dan huruf kecil. 
       Dalam pemrograman jika kita membuat nama identifier dengan memiliki nama yang sama akan dianggap berbeda jika bentuk hurufnya 
       berbeda. contoh : namaidentifier tidak sama dengan Namaidentifier.

    3. Simbol lain yang tidak disebutkan di peraturan no 1, tidak bisa digunakan dalam pembuatan identifier. 
       Seperti (-),(,),(.),(+),(\) dan lain-lain.

    4. dalam pembuatan identifier tidak diperbolehkan menggunakan spasi.

    5. Tidak bisa menggunakan nama yang sama dengan beberapa standar keyword pada C++, 
       contoh: int, float, char, private, class, struct dan lain-lain.

    6. Panjang Identifier tidak dibatasi.
*/

/*
Di bawah ini adalah macam" identifier yang tidak bisa dipakai karena sudah menjadi keyword dalam standar pustaka bahasa pemrograman C++.
alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, compl, const, 
constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, export, extern, false, 
float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, or_eq, private, 
protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, struct, switch, 
template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, 
while, xor, xor_eq dan lain-lain*/

//                                                       contoh program
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string $BelajarCpp, BelajarCPP, belajar_cpp, belajarcpp;
   
    $BelajarCpp = "$BelajarCpp.com";
    BelajarCPP = "BelajarCPP.com";
    belajar_cpp = "belajar_cpp.com";
    belajarcpp = "belajarcpp.com";
 
    cout<<$BelajarCpp<<endl;
    cout<<BelajarCPP<<endl;
    cout<<belajar_cpp<<endl;
    cout<<belajarcpp<<endl;
 
    return 0;
}