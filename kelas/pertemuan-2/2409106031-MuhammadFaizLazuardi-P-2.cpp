#include <iostream>
using namespace std;

// int main() {
//     // Deklarasi array dan inisialisasi elemen array
//     string nama[5] = {"Faiz", "Fathur", "Amin", "Zeydan"}; // nama[5] dihitung dari 1 bukan 0 karena yang di hitung adalah banyaknya data dalam array

//     // Deklarasi array tanpa inisialisasi elemen array
//     int angka[5];
//     angka[0] = 10;
//     angka[1] = 19;
//     angka[2] = 30;
//     angka[3] = 40;
//     angka[4] = 50;

//     // Mengganti isi array
//     nama[4] = "Muhzy"; // nama[4] dihitung dari 0 bukan 1 karena yang di hitung adalah index keberapa yang akan diganti 
//     for (int i = 0; i < 5; i++) { // i < 5 berarti selama index masih lebih kecil dari 5 maka proses akan dijalankan
//         cout << nama[i] << endl;
//     }

//     // Menampilkan isi array
//     cout << "\n" << nama[0] << endl; // "\n" untuk memberi jarak | nama[0] mengambil nilai pada array dengan index yang sudah ditentukan
//     cout << angka[2] << "\n"  << endl; // sama seperti line 23\5

//     for (string x : nama) {
//         cout << x << endl;
//     }

//     // Panjang Data Pada Array
//     int angka_2[5] = {110, 2, 35, 4, 500}; // satu element array butuh 4 bytes. Jadi jika angka_3[20] maka hasil yang akan muncul adalah 80
//     cout << "\n" << sizeof(angka_2) << endl;
//     cout << sizeof(angka[0]) << endl; 

//     // Panjang Data Pada Array Yang Sebenarnya
//     int angka_3[20] = {1, 2, 3, 4, 5}; // untuk mendapatkan panjang data yang sebenarnya tinggal bagi panjang data pada array dengan ukuran dari satu elemen array yaitu 4
//     cout << "\n" << sizeof(angka_3) << endl;
//     int panjangArray = sizeof(angka_3) / sizeof(angka_3[0]);
//     cout << "Panjang dari array angka adalah: " <<panjangArray << endl;


//     return 0;
// }


// //                                                               Array Satu Dimensi
// #define MAX_BUAH 100 // Ukuran maksimum array buah
// int main() {
//     int panjang = 0; // Jumlah elemen saat ini
//     string buah[MAX_BUAH]; // Array dengan ukuran tetap
//     int pilihan, index;
//     do {
//         cout << "Menu Program" << endl;
//         cout << "1. Tampilkan Buah" << endl;
//         cout << "2. Tambah Buah" << endl;
//         cout << "3. Ubah Buah" << endl;
//         cout << "4. Hapus Buah" << endl;
//         cout << "5. Keluar" << endl;
//         cout << "Pilihan: ";
//         cin >> pilihan;
//         system("clear");

//         switch (pilihan) {
//         case 1:
//             if (panjang == 0) {
//                 cout << "Belum ada buah\n" << endl;

//             } else {
//                 for (int i = 0; i < panjang; i++) {
//                 cout << "Buah ke-" << i + 1 << ": " << buah[i] << "\n" << endl;
//                 }
//             }
//             break;

//         case 2:
//             if (panjang < MAX_BUAH) {
//                 cout << "Masukkan nama buah: ";
//                 cin.ignore();
//                 getline(cin, buah[panjang]);
//                 panjang++;
//                 cout << "Buah berhasil ditambahkan" << endl;

//             } else {
//                 cout << "Kapasitas penuh! Tidak bisa menambah buah lagi." << endl;
//             }
            
//             break;

//         case 3:
//             if (panjang == 0) {
//                 cout << "Belum ada buah untuk diubah." << endl;
//             } else {
//                 for (int i = 0; i < panjang; i++) {
//                 cout << "Buah ke-" << i + 1 << ": " << buah[i] << endl;
//                 }

//                 cout << "Masukkan nomor buah yang akan diubah: ";
//                 cin >> index;

//                 if (index > 0 && index <= panjang) {
//                     cout << "Masukkan nama buah baru: ";
//                     cin.ignore();
//                     getline(cin, buah[index - 1]);
//                     cout << "Buah berhasil diubah" << endl;

//                 } else {
//                     cout << "Nomor buah tidak valid" << endl;
//                 }
//             }
            
//             break;

//         case 4:
//             if (panjang == 0) {
//                 cout << "Belum ada buah untuk dihapus." << endl;
//             } else {
//                 for (int i = 0; i < panjang; i++) {
//                     cout << "Buah ke-" << i + 1 << ": " << buah[i] << endl;
//                 }

//                 cout << "Masukkan nomor buah yang akan dihapus: ";
//                 cin >> index;
                
//                 if (index > 0 && index <= panjang) {
//                     for (int i = index - 1; i < panjang - 1; i++) {
//                         buah[i] = buah[i + 1]; // Ngegeser elemen ke kiri kek nimpa jadinya
//                     }
                    
//                     panjang--;
//                     cout << "Buah berhasil dihapus" << endl;
                
//                 } else {
//                     cout << "Nomor buah tidak valid" << endl;
//                 }
//             }

//             break;

//         case 5:
//             cout << "Program selesai" << endl;
//             break;

//         default:
//             cout << "Pilihan tidak valid" << endl;
//             break;
//         }
//     } while (pilihan != 5);
//  return 0;
// }

//                                                                  Array Dua Dimensi
#define MAX_BUAH 100 // Ukuran maksimum array buah
#define INFO 2 // Kolom untuk menyimpan informasi tambahan (misal: nama dan kategori)
int main() {
    int panjang = 0; // Jumlah elemen saat ini
    string buah[MAX_BUAH][INFO]; // Array 2 dimensi
    int pilihan, index;

    do {
        cout << "Menu Program" << endl;
        cout << "1. Tampilkan Buah" << endl;
        cout << "2. Tambah Buah" << endl;
        cout << "3. Ubah Buah" << endl;
        cout << "4. Hapus Buah" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        system("clear");
    
        switch (pilihan) {
        case 1:
            if (panjang == 0) {
                cout << "Belum ada buah" << endl;
            
            } else {
                for (int i = 0; i < panjang; i++) {
                    cout << "Buah ke-" << i + 1 << ": " << buah[i][0] << " (" << buah[i][1] << ")" << endl;
                }
            }
            break;

        case 2:
            if (panjang < MAX_BUAH) {
                cout << "Masukkan nama buah: ";
                cin.ignore();
                getline(cin, buah[panjang][0]);
                cout << "Masukkan kategori buah: ";
                getline(cin, buah[panjang][1]);
                panjang++;
                cout << "Buah berhasil ditambahkan" << endl;

            } else {
                cout << "Kapasitas penuh! Tidak bisa menambah buah lagi." << endl;
            }
            break;

        case 3:
            if (panjang == 0) {
                cout << "Belum ada buah untuk diubah." << endl;
            
            } else {
                for (int i = 0; i < panjang; i++) {
                    cout << "Buah ke-" << i + 1 << ": " << buah[i][0] << " (" << buah[i][1] << ")" << endl;
                }
                cout << "Masukkan nomor buah yang akan diubah: ";
                cin >> index; 
                if (index > 0 && index <= panjang) {
                    cout << "Masukkan nama buah baru: ";
                    cin.ignore();
                    getline(cin, buah[index - 1][0]);
                    cout << "Masukkan kategori baru: ";
                    getline(cin, buah[index - 1][1]);
                    cout << "Buah berhasil diubah" << endl;
                } else {
                    cout << "Nomor buah tidak valid" << endl;
                }
            }
            break;

        case 4:
            if (panjang == 0) {
                cout << "Belum ada buah untuk dihapus." << endl;
            
            } else {
                for (int i = 0; i < panjang; i++) {
                    cout << "Buah ke-" << i + 1 << ": " << buah[i][0] << " (" << buah[i][1]<< ")" << endl;
                }
                
                cout << "Masukkan nomor buah yang akan dihapus: ";
                cin >> index;
                
                if (index > 0 && index <= panjang) {
                    for (int i = index - 1; i < panjang - 1; i++) {
                        buah[i][0] = buah[i + 1][0];
                        buah[i][1] = buah[i + 1][1];
                    }

                    panjang--;
                    cout << "Buah berhasil dihapus" << endl;
                
                } else {
                    cout << "Nomor buah tidak valid" << endl;
                }
            }
            break;

        case 5:
            cout << "Program selesai" << endl;
            break;

        default:
            cout << "Pilihan tidak valid" << endl;
            break;
        }
    } while (pilihan != 5);
    return 0;
}

// //                                                                     Array Multi Dimensi
// int main() {
//     int arr[2][2][2];
//     arr[0][0][0] = 10;
//     arr[0][0][1] = 20;
//     arr[0][1][0] = 30;
//     arr[0][1][1] = 40;
//     arr[1][0][0] = 11;
//     arr[1][0][1] = 22;
//     arr[1][1][0] = 33;
//     arr[1][1][1] = 44;

//     cout << "Isi variabel arr:" << endl;
//     cout << "=================" << endl;
//     cout << endl;
//     cout << "Element di [0][0][0]: "<< arr[0][0][0] << endl;
//     cout << "Element di [0][0][1]: "<< arr[0][0][1] << endl;
//     cout << "Element di [0][1][0]: "<< arr[0][1][0] << endl;
//     cout << "Element di [0][1][1]: "<< arr[0][1][1] << endl;
//     cout << "Element di [1][0][0]: "<< arr[1][0][0] << endl;
//     cout << "Element di [1][0][1]: "<< arr[1][0][1] << endl;
//     cout << "Element di [1][1][0]: "<< arr[1][1][0] << endl;
//     cout << "Element di [1][1][1]: "<< arr[1][1][1] << endl;
//     return 0;
//     }

// //                                                                       Latihan 1
// int main(int argc, char const * argv[]) {
//     int number[4] = {1,2,3,4};

//     int totalBytes = sizeof(number);
//     int singleByte = sizeof(number[0]);
//     int pamjangArray = sizeof(number) / sizeof(number[0]);

//     cout 
//         << totalBytes << "\n" 
//         << singleByte << "\n"
//         << pamjangArray << "\n";

//         // cout << __cplusplus; // mengecek versi cpp

//     return 0;
// }


// //                                                                       Latihan 2
// int main(int argc, char const * argv[]){
//     int number[] = {1,2,3,4,5,6,7,8,9,10};
//     int totalBytes = sizeof(number);
//     int pamjangArray = sizeof(number) / sizeof(number[0]);

//     for (int i = 0; i < pamjangArray; i++) {
//         cout << "Nilai Array " << number[i] << endl;
//     }
// }