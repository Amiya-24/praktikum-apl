/*                                              Tipe data yang umum digunakan

Tipe Data                   Bentuk Penulisan
Boolean	                         bool
Character	                     char
Integer	                         int
Floating Point	                 float
Double Floating Point	         double
String	                         string
Valueless	                     void

Dari tipe data di atas bisa kita modifikasi menggunakan Modifiers Type untuk memberikan fungsi lebih kepada Variabel.

Modifiers Type	                Fungsi
signed	                        Untuk membuat Tipe Data Numerik menjadi Negatif
unsigned	                    Untuk membuat Tipe Data Numerik menjadi Positif
short	                        Pemesanan Jarak dan Ukuran memori lebih Kecil
long	                        Pemesanan Jarak dan Ukuran memori lebih Besar

Daftar Lengkap Tipe data C++

Tipe Data	                Bentuk Penulisan	                    Ukuran Memori
Integer	                    int	                                    4 byte = 32 bit
                            signed int	                            4 byte = 32 bit
                            signed short int	                    2 byte = 16 bit
                            signed long int	                        4 byte = 32 bit
                            signed long long int	                4 byte = 32 bit
                            unsigned int	                        4 byte = 32 bit
                            unsigned short int	                    2 byte = 16 bit
                            unsigned long int	                    4 byte = 32 bit
                            unsigned long long int	                4 byte = 32 bit

Floating Point	            float	                                4 byte = 32 bit

Double Floating Point	    double	                                8 byte = 64 bit
                            long double	                            12 byte = 96 bit

Boolean	                    bool	                                1 byte = 8 bit

Character	                char	                                1 byte = 8 bit
                
(C++ 11)	                char16_t	                            2 byte = 16 bit
                
(C++ 11)	                char32_t	                            4 byte = 32 bit
                            wchar_t	                                2 byte = 16 bit
                            unsigned char	                        1 byte = 8 bit
                            signed char	                            1 byte = 8 bit

String	                    string	                                4 byte = 32 bit

Pointer Null (C++ 11)	    decltype(nullptr)	                    4 byte = 32 bit

Valueless	                void	                                1 byte = 8 bit
*/

// contoh program
#include <iostream>
using namespace std;
 
int main()
{
    cout << "--> Integer " << endl;
    cout << "Ukuran Memori dari int : " << sizeof(int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed short int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned short int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long long int) << endl;
 
    cout << endl << "--> Floating Point " << endl;
    cout << "Ukuran Memori dari float : " << sizeof(float) << endl;
 
    cout << endl << "--> Double Floating Point " << endl;
    cout << "Ukuran Memori dari Double : " << sizeof(double) << endl;
    cout << "Ukuran Memori dari Long Double : " << sizeof(long double) << endl;
 
    cout << endl << "--> Boolean " << endl;
    cout << "Ukuran Memori dari Boolean : " << sizeof(bool) << endl;
 
    cout << endl << "--> Character " << endl;
    cout << "Ukuran Memori dari Char : " << sizeof(char) << endl;
    cout << "Ukuran Memori dari Singned Char : " << sizeof(signed char) << endl;
    cout << "Ukuran Memori dari Unsigned Char : " << sizeof(unsigned char) << endl;
    cout << "Ukuran Memori dari char16_t : " << sizeof(char16_t) << endl;
    cout << "Ukuran Memori dari char32_t : " << sizeof(char32_t) << endl;
    cout << "Ukuran Memori dari wchar_t : " << sizeof(wchar_t) << endl;
 
    cout << endl << "--> String " << endl;
    cout << "Ukuran Memori dari String: " << sizeof(string) << endl;
 
    cout << endl << "--> Pointer Null " << endl;
    cout << "Ukuran Memori dari decltype(nullptr): " << sizeof(decltype(nullptr)) << endl;
 
    cout << endl << "--> Valueless " << endl;
    cout << "Ukuran Memori dari void: " << sizeof(void) << endl;
 
    return 0;
}

//                                        Fungsi dan Cara penggunaan macam-macam dasar Tipe Data

