// Contoh Dasar Program C++
#include <iostream> // Preprocessor Directive (kompiler), berarti dia menggunakan library iostream
int main1(/*bisa berisi parameter*/) // Main Function (fungsi utama)
{ // buka kurung kurawal sebagai Blok pembuka
    std::cout<< /*'std::cout' merupakan salah satu fitur dari iostream*/"Selamat Datang Di BelajarC++"; // Pernyataan (Statement)
    return 0; // merupakan pernyataan pengembalian, untuk memberitahu kepada sistem operasi bahwa program telah berakhir secara normal dengan nilai 0 yang berarti tanpa kesalahan
} // tutup kurung kurawal sebagai Blok Penutup


// bentuk lain dari contoh di atas
int main2(){std::cout<<"Selamat Datang Di BelajarC++";} // dijadikan satu baris (tidak disarankan karena akan susah dibaca)


// // statement dan expression
// std::cout<< "Selamat Datang Di BelajarC++"; // Statement
// std::cout<< 7+7; // Expression

// contoh lain
using namespace std; //  menyatakan bahwa program akan menggunakan 'namespace' yang bernama std
 
int main3(){
    cout<<"belajarcpp"<<endl; // 'endl' merupakan anggota dari iostream dan masuk sebagai anggota namespace std yang digunakan untuk mengakhiri baris/pindah baris pada hasil layar program
    return 0; // merupakan pernyataan pengembalian, untuk memberitahu kepada sistem operasi bahwa program telah berakhir secara normal dengan nilai 0 yang berarti tanpa kesalahan
}


// komentar pada c++

// Single-line : dengan tanda '//' 
int main4(){
    //cetak "belajarcpp"
    cout<<"belajarcpp"<<endl; //Komentar
    //Komentar
    return 0;
} //akhir


// Multiline : dengan tanda '/**/'
/* program ini adalah contoh program penggunaan fitur komentar multi line.
meskipun anda menulis sebanyak mungkin di dalam fitur komentar ini
kompiler akan mengabaikan semua karakter di dalam komentar.
Komentar multi line akan berakhir sampai tanda */
 
int main5(){
    cout<<"belajarcpp"<<endl;
    return 0;
} //akhir