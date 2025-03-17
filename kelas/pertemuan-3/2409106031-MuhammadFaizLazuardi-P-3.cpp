// #include <iostream>
// using namespace std;

// //                                 Deklarasi Struct
// // cara pertama
// struct Dokter1 {
//     string nama;
//     string spesialis;
// };

// // cara kedua
// typedef struct {
//     string nama;
//     string spesialis;
// } Dokter2;


// //                                 Mendeklarasi Struct
// // cara pertama
// struct Dokter1 dokter1;

// // cara kedua
// Dokter2 dokter2;


// //                               Mengakses Elemen Struct

// int main() {
//     // cara pertama
//     dokter1.nama = "Dr. Ahmad";
//     dokter1.spesialis = "Gigi";

//     // cara kedua
//     dokter2.nama = "Dr. Alfian";
//     dokter2.spesialis = "Kebidanan";

//     cout << "Dokter 1: " << dokter1.nama << ", Spesialis: " << dokter1.spesialis << endl;
//     cout << "Dokter 2: " << dokter2.nama << ", Spesialis: " << dokter2.spesialis << endl;

//     return 0;
// }


//                                     Contoh CRUD

#include <iostream>
using namespace std;

struct Alamat {
    string jalan;
    int nomor;
    string kota;
};

struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
    Alamat alamat;
};

#define MAX_MAHASISWA 100
int panjang = 0; // Jumlah elemen saat ini
Mahasiswa mhs[MAX_MAHASISWA]; // Array dengan ukuran tetap

int main() {
    system("clear");
    int pilihan, index;
    do {
        cout << "Menu Program" << endl;
        cout << "1. Tampilkan Mahasiswa" << endl;
        cout << "2. Tambah Mahasiswa" << endl;
        cout << "3. Ubah Mahasiswa" << endl;
        cout << "4. Hapus Mahasiswa" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: "; cin >> pilihan; cout << "\n" << endl;
        system("clear");
        
        switch (pilihan) {
        case 1:
        // Tampilkan Data Mahasiswa
            if (panjang == 0) {
                cout << "Belum ada mahasiswa\n" << endl;
            
            } else {
                cout << "Daftar Mahasiswa" << endl;
                cout << "==================" << endl;
                for (int i = 0; i < panjang; i++) {
                cout << "Mahasiswa ke-" << i + 1 << endl;
                cout << "Nama: " << mhs[i].nama << endl;
                cout << "Umur: " << mhs[i].umur << endl;
                cout << "Jurusan: " << mhs[i].jurusan << endl;
                cout << "Alamat: " << mhs[i].alamat.jalan << " No. "
                << mhs[i].alamat.nomor << ", " << mhs[i].alamat.kota <<
                
                endl;
                cout << endl;
                }
            }
            break;

        case 2:
        // Tambah Data Mahasiswa
            if (panjang < MAX_MAHASISWA) {
                cout << "Masukkan Nama Mahasiswa: ";
                cin.ignore();
                getline(cin, mhs[panjang].nama);
                cout << "Masukkan Umur Mahasiswa: ";
                cin >> mhs[panjang].umur;
                cout << "Masukkan Jurusan Mahasiswa: ";
                cin.ignore();
                getline(cin, mhs[panjang].jurusan);
                cout << "Masukkan Alamat Mahasiswa: " << endl;
                cout << "Jalan: ";
                getline(cin, mhs[panjang].alamat.jalan);
                cout << "Nomor: ";
                cin >> mhs[panjang].alamat.nomor;
                cout << "Kota: ";
                cin.ignore();
                getline(cin, mhs[panjang].alamat.kota);
                panjang++;
                cout << "Mahasiswa Berhasil Ditambahkan.\n" << endl;

            } else {
                cout << "Kapasitas penuh! Tidak bisa menambah mahasiswa lagi.\n" << endl;
            }
            break;

        case 3:
        // Ubah Data Mahasiswa
            if (panjang == 0) {
                cout << "Belum Ada Mahasiswa Untuk Diubah.\n" << endl;
            
            } else {
                cout << "Daftar Mahasiswa" << endl;
                cout << "==================" << endl;

                for (int i = 0; i < panjang; i++) {
                    cout << "Mahasiswa ke-" << i + 1 << endl;
                    cout << "Nama: " << mhs[i].nama << endl;
                    cout << endl;
                }
                cout << "Masukkan Nomor Mahasiswa Yang Akan Diubah: ";
                cin >> index;

                if (index > 0 && index <= panjang) {
                    cout << "Masukkan Nama Mahasiswa Baru: ";
                    cin.ignore();
                    getline(cin, mhs[index - 1].nama);

                // tambahkan untuk field lainnya
                cout << "Mahasiswa Berhasil Diubah.\n" << endl;
                } else {
                cout << "Nomor Mahasiswa Tidak Valid.\n" << endl;
                }
            }
            break;

        case 4:
        // Hapus Data Mahasiswa
            if (panjang == 0) {
                cout << "Belum Ada Mahasiswa Untuk Dihapus." << endl;

            } else {
                cout << "Daftar Mahasiswa" << endl;
                cout << "==================" << endl;
                for (int i = 0; i < panjang; i++) {
                    cout << "Mahasiswa ke-" << i + 1 << endl;
                    cout << "Nama: " << mhs[i].nama << endl;
                    cout << endl;
                }

                cout << "Masukkan Nomor Mahasiswa Yang Akan Dihapus: ";
                cin >> index;
                if (index > 0 && index <= panjang) {
                    for (int i = index - 1; i < panjang - 1; i++) {
                        mhs[i] = mhs[i + 1];
                    }
                    panjang--;
                    cout << "Mahasiswa Berhasil Dihapus.\n" << endl;
                } else {
                cout << "Nomor Mahasiswa Tidak Valid.\n" << endl;
                }
            }
            break;

        case 5:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid.\n" << endl;
            break;
        }
    } while (pilihan != 5);
return 0;
}