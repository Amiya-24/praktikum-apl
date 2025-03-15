#include <iostream>
#include <string>
using namespace std;

const int MAX_DOKTER = 10;
string nama_dokter[MAX_DOKTER];
string spesialis[MAX_DOKTER];
string jadwal_mulai[MAX_DOKTER];
string jadwal_selesai[MAX_DOKTER];
int jumlah_dokter = 0;

int tampilkan_jadwal() {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
        return 0;
    }
    for(int i = 0; i < jumlah_dokter; ++i){
        cout << i + 1 << ". Nama: " << nama_dokter[i] << endl;
        cout << "   " << "Spesialis: " << spesialis[i] << endl;
        cout << "   " << "Jam Mulai: " << jadwal_mulai[i] << endl;
        cout << "   " << "Jam Selesai: " << jadwal_selesai[i] << endl;
        cout << " " << endl;
    }
    return 1;
}

bool tambah_jadwal() {
    if (jumlah_dokter < MAX_DOKTER) {
        cout << "Masukkan Nama Dokter: "; cin >> nama_dokter[jumlah_dokter];
        cout << "Masukkan Spesialis: "; cin >> spesialis[jumlah_dokter];
        cout << "Masukkan Jam Mulai: "; cin >> jadwal_mulai[jumlah_dokter];
        cout << "Masukkan Jam Selesai: "; cin >> jadwal_selesai[jumlah_dokter];
        jumlah_dokter++;
        cout << "Jadwal berhasil ditambahkan!\n";

    } else {
        cout << "Jadwal Penuh.\n";
    }
    return 1;
}

bool ubah_jadwal() {
    tampilkan_jadwal();
    int index;
    cout << "Pilih Jadwal Yang Ingin Di Ubah: ";
    cin >> index;
    if (index > 0 && index <= jumlah_dokter) {
        cout << "Masukkan Nama Dokter baru: "; cin >> nama_dokter[index - 1];
        cout << "Masukkan Spesialis baru: "; cin >> spesialis[index - 1];
        cout << "Masukkan Jam Mulai baru: "; cin >> jadwal_mulai[index - 1];
        cout << "Masukkan Jam Selesai baru: "; cin >> jadwal_selesai[index - 1];
        cout << "Jadwal berhasil diperbarui!\n";

    } else {
        cout << "Jadwal Tidak Valid!\n";
    }
    return 1;
}

bool hapus_jadwal() {
    int index;
    tampilkan_jadwal();
    if(jumlah_dokter == 0) {
        return 0;

    } else {
        cout << "Pilih Jadwal Yang Ingin Di Hapus: ";
        cin >> index;
        if (index > 0 && index <= jumlah_dokter) {
            for (int i = index - 1; i < jumlah_dokter - 1; i++) {
                nama_dokter[i] = nama_dokter[i + 1];
                spesialis[i] = spesialis[i + 1];
                jadwal_mulai[i] = jadwal_mulai[i + 1];
                jadwal_selesai[i] = jadwal_selesai[i + 1];
            }
            jumlah_dokter--;
            cout << "Jadwal berhasil dihapus!\n";

        } else {
            cout << "Jadwal Tidak Valid!\n";
        }
    }
    return 1;
}

int login(){
    int percobaan = 0;
    string username = "faiz", password = "031", login_user, login_password, pilih;
    while (percobaan < 3) {
        cout << "<===== Home Page =====>\n";
        cout << "1. Login\n";
        cout << "2. Keluar\n";
        cout << "Pilih Fitur: "; cin >> pilih;

        if(pilih == "1"){
            cout << "\n<===== Login Page =====>\n";
            cout << "Username: "; cin >> login_user;
            cout << "Password: "; cin >> login_password;
            system("cls");

            if (login_user == username and login_password == password) {
                cout << "Login berhasil!\n";
                return 0;

            } else {
                cout << "Username atau password salah!\n";
                percobaan++;
                if (percobaan == 3) {
                    cout << "Login gagal! Program Berhenti.\n";
                    exit(0);
                }
            }
        }else if(pilih == "2"){
            cout << "Keluar dari program.\n";
            exit(0);
        }else {
            cout << "Input Yang Anda Pilih Tidak Valid. Silahkan Coba lagi.\n\n";
        }

    }
    return 1;
}

int main() {
    login();
    while (true) {
        int pilih;
        cout << "\n<===== Jadwal Praktik Dokter =====>\n";
        cout << "1. Tampilkan Jadwal\n";
        cout << "2. Tambah Jadwal\n";
        cout << "3. Ubah Jadwal\n";
        cout << "4. Hapus Jadwal\n";
        cout << "5. Keluar\n";
        cout << "Pilih Fitur: "; cin >> pilih;
        system("cls");

        switch (pilih) {
            case 1:
                tampilkan_jadwal();
                break;
            case 2:
                tambah_jadwal();
                break;
            case 3:
                ubah_jadwal();
                break;
            case 4:
                hapus_jadwal();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini!\n";
                exit(0);
            default:
                cout << "Pilihan tidak valid! Coba lagi.\n";
        }
    }
    return 0;
} 