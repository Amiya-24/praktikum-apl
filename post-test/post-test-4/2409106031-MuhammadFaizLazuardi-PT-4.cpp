#include <iostream>
#include <string>
using namespace std;

struct jam_praktek {
    double jam_mulai;
    double jam_selesai;
};

struct jadwal_dokter {
    string nama_dokter;
    string spesialis;
    jam_praktek jadwal;
};

const int MAX_DOKTER = 10;
jadwal_dokter jadwal_praktek[MAX_DOKTER];
int jumlah_dokter = 0;
bool login_gagal = false;

void clear();
void menu_awal();
void menu_utama();
void login();
bool lihat_jadwal(int index = 0);
void tambah_jadwal();
bool tambah_jadwal(double jam_mulai, double jam_selesai);
bool tambah_jadwal(string nama_dokter, string spesialis);
void ubah_jadwal();
void hapus_jadwal();

void clear() {
    system("cls");
}

void menu_awal() {
    cout << "<===== Home Page =====>\n";
    cout << "1. Login\n";
    cout << "2. Keluar\n";
    cout << "Pilih Fitur: ";
}

void menu_utama() {
    cout << "\n<===== Jadwal Praktek Dokter =====>\n";
    cout << "1. Tampilkan Jadwal\n";
    cout << "2. Tambah Jadwal\n";
    cout << "3. Ubah Jadwal\n";
    cout << "4. Hapus Jadwal\n";
    cout << "5. Logout\n";
    cout << "Pilih Fitur: ";
}

void login() {
    int percobaan = 0;
    string username = "faiz", password = "031", login_user, login_password, pilih;
    bool login_berhasil = false;

    while (percobaan < 3) {
        cout << "\n<===== Login Page =====>\n";
        cout << "Username: "; cin >> login_user;
        cout << "Password: "; cin >> login_password;

        if (login_user == username and login_password == password) {
            cout << "Login berhasil!\n";
            login_berhasil = true;
            break;

        } else {
            cout << "Username atau password salah!\n";
            percobaan++;

        }
    }

    if (!login_berhasil){
        cout << "Login gagal! Program Berhenti.\n";
        login_gagal = true;
        return;
    }

    while (login_berhasil){
        menu_utama();
        cin >> pilih;
        cin.ignore();
        clear();

        if (pilih == "1"){
            lihat_jadwal();
        } else if (pilih == "2"){
            tambah_jadwal();
        } else if (pilih == "3"){
            ubah_jadwal();
        } else if (pilih == "4"){
            hapus_jadwal();
        } else if (pilih == "5"){
            login_berhasil = false;
        } else {
            cout << "Pilihan tidak valid! Coba lagi.\n";
        }
    }
}

bool lihat_jadwal(int index) {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
    }
    
    if (index == 0) {
        for(int i = 0; i < jumlah_dokter; ++i){
            cout << i + 1 << ". Nama: " << jadwal_praktek[i].nama_dokter << endl;
            cout << "   " << "Spesialis: " << jadwal_praktek[i].spesialis << endl;
            cout << "   " << "Jam Mulai: " << jadwal_praktek[i].jadwal.jam_mulai << endl;
            cout << "   " << "Jam Selesai: " << jadwal_praktek[i].jadwal.jam_selesai << endl;
            cout << " " << endl;
        }
    }

    if (index >= jumlah_dokter) {
        return true;
    }
    return lihat_jadwal(index + 1);
}

void tambah_jadwal() {
    if (jumlah_dokter >= MAX_DOKTER) {
        cout << "Jadwal Penuh.\n";
    }

    double jam_mulai, jam_selesai;
    string nama_dokter, spesialis;

    cout << "Masukkan Nama Dokter: "; 
    cin >> nama_dokter;
    cout << "Masukkan Spesialis: "; 
    cin >> spesialis;
    cin.ignore();
    cout << "Masukkan Jam Mulai: "; 
    cin >> jam_mulai;
    cout << "Masukkan Jam Selesai: "; 
    cin >> jam_selesai;

    if (tambah_jadwal(nama_dokter, spesialis) && tambah_jadwal(jam_mulai, jam_selesai)) {
        cout << "Jadwal berhasil ditambahkan!\n";

    } else {
        cout << "Gagal menambahkan jadwal.\n";
    }
}

bool tambah_jadwal(string nama_dokter, string spesialis) {
    if (jumlah_dokter >= MAX_DOKTER) return false;
    jadwal_praktek[jumlah_dokter].nama_dokter = nama_dokter;
    jadwal_praktek[jumlah_dokter].spesialis = spesialis;
    return true;
}

bool tambah_jadwal(double jam_mulai, double jam_selesai) {
    if (jumlah_dokter >= MAX_DOKTER) return false;
    jadwal_praktek[jumlah_dokter].jadwal.jam_mulai = jam_mulai;
    jadwal_praktek[jumlah_dokter].jadwal.jam_selesai = jam_selesai;
    jumlah_dokter++;
    return true;
}

void ubah_jadwal() {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
    } else {
        lihat_jadwal();
        int index;
        cout << "Pilih Jadwal Yang Ingin Di Ubah: ";
        cin >> index;
        if (index > 0 && index <= jumlah_dokter) {
            cout << "Masukkan Nama Dokter baru: "; cin >> jadwal_praktek[index - 1].nama_dokter;
            cout << "Masukkan Spesialis baru: "; cin >> jadwal_praktek[index - 1].spesialis;
            cout << "Masukkan Jam Mulai baru: "; cin >> jadwal_praktek[index - 1].jadwal.jam_mulai;
            cout << "Masukkan Jam Selesai baru: "; cin >> jadwal_praktek[index - 1].jadwal.jam_selesai;
            cout << "Jadwal berhasil diperbarui!\n";
    
        } else {
            cout << "Jadwal Tidak Valid!\n";
        }
    }
}

void hapus_jadwal() {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
    } else {
        lihat_jadwal();
        int index;
        cout << "Pilih Jadwal Yang Ingin Di Hapus: ";
        cin >> index;
        if (index > 0 && index <= jumlah_dokter) {
            for (int i = index - 1; i < jumlah_dokter - 1; i++) {
                jadwal_praktek[i] = jadwal_praktek[i + 1];
            }
            jumlah_dokter--;
            cout << "Jadwal berhasil dihapus!\n";

        } else {
            cout << "Jadwal Tidak Valid!\n";
        }

    }

}

int main() {
    clear();
    string pilih;
    while(true) {
        menu_awal();
        cin >> pilih;
        cin.ignore();
        if (pilih == "1") {
            login();
            if (login_gagal)
            break;

        } else if (pilih == "2"){
            cout << "Keluar dari program.\n";
            break;

        } else {
            cout << "Input Yang Anda Pilih Tidak Valid. Silahkan Coba lagi.\n\n";
        }
    }
    return 0;
}