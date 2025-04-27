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
jadwal_dokter jadwal_praktek[MAX_DOKTER] = {
    {"faiz", "gigi", {07.30, 09.00 }},
    {"fathur", "bedah", {13.30, 15.45 }},
    {"zaky", "jantung", {09.30, 11.00 }},
    {"zeydan", "mata", {11.30, 13.00 }},
};

int jumlah_dokter = 4;
bool login_gagal = false;

void clear();
void menu_awal();
void menu_utama();
void login();
bool lihat_jadwal(int& index);
void tambah_jadwal();
bool tambah_jadwal(double* jam_mulai, double* jam_selesai);
bool tambah_jadwal(string* nama_dokter, string* spesialis);
void ubah_jadwal();
void hapus_jadwal();
void sorting_jadwal();
void sort_nama(jadwal_dokter arr[], int low, int high, bool asc);
void sort_jam(jadwal_dokter arr[], int low, int high, bool asc);


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
    cout << "5. Sorting Jadwal\n";
    cout << "6. Logout\n";
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
            int index = 0;
            lihat_jadwal(index);
        } else if (pilih == "2"){
            tambah_jadwal();
        } else if (pilih == "3"){
            ubah_jadwal();
        } else if (pilih == "4"){
            hapus_jadwal();
        } else if (pilih == "5"){
            sorting_jadwal();
        } else if (pilih == "6"){
            login_berhasil = false;
        } else {
            cout << "Pilihan tidak valid! Coba lagi.\n";
        }
    }
}

bool lihat_jadwal(int& index) {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
        return false;
    }
    
    if (index == 0) {
        for(int i = 0; i < jumlah_dokter; ++i){
            cout << i + 1 << ". Nama: " << jadwal_praktek[i].nama_dokter << endl;
            cout << "   " << "Spesialis: " << jadwal_praktek[i].spesialis << endl;
            cout << "   " << "Jam Mulai: " << jadwal_praktek[i].jadwal.jam_mulai << endl;
            cout << "   " << "Jam Selesai: " << jadwal_praktek[i].jadwal.jam_selesai << endl;
            cout << " " << endl;
            index++;
        }
    }

    if (index >= jumlah_dokter) {
        return true;
    }
    return lihat_jadwal(index);
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

    if (tambah_jadwal(&nama_dokter, &spesialis) && tambah_jadwal(&jam_mulai, &jam_selesai)) {
        cout << "Jadwal berhasil ditambahkan!\n";

    } else {
        cout << "Gagal menambahkan jadwal.\n";
    }
}

bool tambah_jadwal(string* nama_dokter, string* spesialis) {
    if (jumlah_dokter >= MAX_DOKTER) return false;
    jadwal_praktek[jumlah_dokter].nama_dokter = *nama_dokter;
    jadwal_praktek[jumlah_dokter].spesialis = *spesialis;
    return true;
}

bool tambah_jadwal(double* jam_mulai, double* jam_selesai) {
    if (jumlah_dokter >= MAX_DOKTER) return false;
    jadwal_praktek[jumlah_dokter].jadwal.jam_mulai = *jam_mulai;
    jadwal_praktek[jumlah_dokter].jadwal.jam_selesai = *jam_selesai;
    jumlah_dokter++;
    return true;
}

void ubah_jadwal() {
    if (jumlah_dokter == 0) {
        cout << "Jadwal Kosong" << endl;
    } else {
        int index = 0;
        lihat_jadwal(index);
        int pilih;
        cout << "Pilih Jadwal Yang Ingin Di Ubah: ";
        cin >> pilih;
        if (pilih > 0 && pilih <= jumlah_dokter) {
            cout << "Masukkan Nama Dokter baru: "; cin >> jadwal_praktek[pilih - 1].nama_dokter;
            cout << "Masukkan Spesialis baru: "; cin >> jadwal_praktek[pilih - 1].spesialis;
            cout << "Masukkan Jam Mulai baru: "; cin >> jadwal_praktek[pilih - 1].jadwal.jam_mulai;
            cout << "Masukkan Jam Selesai baru: "; cin >> jadwal_praktek[pilih - 1].jadwal.jam_selesai;
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
        int index = 0;
        lihat_jadwal(index);
        int pilih;
        cout << "Pilih Jadwal Yang Ingin Di Hapus: ";
        cin >> pilih;
        if (pilih > 0 && pilih <= jumlah_dokter) {
            for (int i = pilih - 1; i < jumlah_dokter - 1; i++) {
                jadwal_praktek[i] = jadwal_praktek[i + 1];
            }
            jumlah_dokter--;
            cout << "Jadwal berhasil dihapus!\n";

        } else {
            cout << "Jadwal Tidak Valid!\n";
        }

    }

}
void sorting_jadwal() {
    while (true) {
        if (jumlah_dokter == 0) {
            cout << "Jadwal Kosong" << endl;
            return;
        }

        cout << "<===== Menu Sorting =====>\n";
        cout << "1. Berdasarkan Nama ascending\n";
        cout << "2. Berdasarkan Nama Descending\n";
        cout << "3. Berdasarkan Jam Mulai ascending\n";
        cout << "4. Berdasarkan Jam Mulai Descending\n";
        cout << "5. Kembali\n";
        cout << "Pilih Fitur: ";

        int pilih;
        cin >> pilih;
        cin.ignore();
        clear();

        switch (pilih) {
            case 1:
                sort_nama(jadwal_praktek, 0, jumlah_dokter - 1, true);
                cout << "Produk diurutkan berdasarkan nama (asccending).\n";
                break;
            case 2:
                sort_nama(jadwal_praktek, 0, jumlah_dokter - 1, false);
                cout << "Produk diurutkan berdasarkan nama (descending).\n";
                break;
            case 3:
                sort_jam(jadwal_praktek, 0, jumlah_dokter - 1, true);
                cout << "Produk diurutkan berdasarkan Jam Mulai (ascending).\n";
                break;
            case 4:
                sort_jam(jadwal_praktek, 0, jumlah_dokter - 1, false);
                cout << "Produk diurutkan berdasarkan Jam Mulai (descending).\n";
                break;
            case 5:
                clear();
                return;
            default:
                cout << "Pilihan tidak valid!\n";
                continue;
        } 
        return;
    }
}

void tukar_jadwal(jadwal_dokter &a, jadwal_dokter&b) {
    jadwal_dokter temp = a;
    a = b;
    b = temp;
}

void sort_jam(jadwal_dokter arr[], int low, int high, bool asc) {
    if (low < high) {
        int pivot = low;
        int i = low;
        int j = high;
        while (i <= j) {
            if (asc) {
                while (arr[i].jadwal.jam_mulai <= arr[pivot].jadwal.jam_mulai && i <= high) i++;
                while (arr[j].jadwal.jam_mulai > arr[pivot].jadwal.jam_mulai && j >= low) j--;
            } else {
                while (arr[i].jadwal.jam_mulai >= arr[pivot].jadwal.jam_mulai && i <= high) i++;
                while (arr[j].jadwal.jam_mulai < arr[pivot].jadwal.jam_mulai && j >= low) j--;
            }
            if (i < j) tukar_jadwal(arr[i], arr[j]);
        }
        tukar_jadwal(arr[j], arr[pivot]);
        sort_jam(arr, low, j - 1, asc);
        sort_jam(arr, j + 1, high, asc);
    }
}

void sort_nama(jadwal_dokter arr[], int low, int high, bool asc) {
    if (low < high) {
        int pivot = low;
        int i = low;
        int j = high;
        while (i <= j) {
            if (asc) {
                while (arr[i].nama_dokter <= arr[pivot].nama_dokter && i <= high) i++;
                while (arr[j].nama_dokter > arr[pivot].nama_dokter && j >= low) j--;
            } else {
                while (arr[i].nama_dokter >= arr[pivot].nama_dokter && i <= high) i++;
                while (arr[j].nama_dokter < arr[pivot].nama_dokter && j >= low) j--;
            }
            if (i < j) tukar_jadwal(arr[i], arr[j]);
        }
        tukar_jadwal(arr[j], arr[pivot]);
        sort_nama(arr, low, j - 1, asc);
        sort_nama(arr, j + 1, high, asc);
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
