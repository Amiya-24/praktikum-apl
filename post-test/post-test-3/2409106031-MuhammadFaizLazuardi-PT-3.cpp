#include <iostream>
#include <string>
using namespace std;

struct jam_praktek {
    string jam_mulai;
    string jam_selesai;
};

struct jadwal_dokter {
    string nama_dokter;
    string spesialis;
    jam_praktek jadwal;
};

const int MAX_DOKTER = 10;
int jumlah_dokter = 0;
jadwal_dokter jadwal_praktek[MAX_DOKTER];

int main() {
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
                
                while (true) {
                    int pilih;
                    cout << "\n<===== Jadwal Praktek Dokter =====>\n";
                    cout << "1. Tampilkan Jadwal\n";
                    cout << "2. Tambah Jadwal\n";
                    cout << "3. Ubah Jadwal\n";
                    cout << "4. Hapus Jadwal\n";
                    cout << "5. Keluar\n";
                    cout << "Pilih Fitur: "; cin >> pilih;
                    system("cls");
            
                    switch (pilih) {
                        case 1:
                            if (jumlah_dokter == 0) {
                                cout << "Jadwal Kosong" << endl;
                            }
                            
                            for(int i = 0; i < jumlah_dokter; ++i){
                                cout << i + 1 << ". Nama: " << jadwal_praktek[i].nama_dokter << endl;
                                cout << "   " << "Spesialis: " << jadwal_praktek[i].spesialis << endl;
                                cout << "   " << "Jam Mulai: " << jadwal_praktek[i].jadwal.jam_mulai << endl;
                                cout << "   " << "Jam Selesai: " << jadwal_praktek[i].jadwal.jam_selesai << endl;
                                cout << " " << endl;
                            }
                        
                            break;
                        case 2:
                            if (jumlah_dokter < MAX_DOKTER) {
                                cout << "Masukkan Nama Dokter: "; cin >> jadwal_praktek[jumlah_dokter].nama_dokter;
                                cout << "Masukkan Spesialis: "; cin >> jadwal_praktek[jumlah_dokter].spesialis;
                                cout << "Masukkan Jam Mulai: "; cin >> jadwal_praktek[jumlah_dokter].jadwal.jam_mulai;
                                cout << "Masukkan Jam Selesai: "; cin >> jadwal_praktek[jumlah_dokter].jadwal.jam_selesai;
                                jumlah_dokter++;
                                cout << "Jadwal berhasil ditambahkan!\n";
                        
                            } else {
                                cout << "Jadwal Penuh.\n";
                            }
                        
                            break;
                        case 3:
                            if (jumlah_dokter == 0) {
                                cout << "Jadwal Kosong" << endl;
                            }
                            for(int i = 0; i < jumlah_dokter; ++i){
                                cout << i + 1 << ". Nama: " << jadwal_praktek[i].nama_dokter << endl;
                                cout << "   " << "Spesialis: " << jadwal_praktek[i].spesialis << endl;
                                cout << "   " << "Jam Mulai: " << jadwal_praktek[i].jadwal.jam_mulai << endl;
                                cout << "   " << "Jam Selesai: " << jadwal_praktek[i].jadwal.jam_selesai << endl;
                                cout << " " << endl;
                            }

                            if(jumlah_dokter == 0) {
                        
                            } else {
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
                            break;

                        case 4:
                            if (jumlah_dokter == 0) {
                                cout << "Jadwal Kosong" << endl;
                            }
                            for(int i = 0; i < jumlah_dokter; ++i){
                                cout << i + 1 << ". Nama: " << jadwal_praktek[i].nama_dokter << endl;
                                cout << "   " << "Spesialis: " << jadwal_praktek[i].spesialis << endl;
                                cout << "   " << "Jam Mulai: " << jadwal_praktek[i].jadwal.jam_mulai << endl;
                                cout << "   " << "Jam Selesai: " << jadwal_praktek[i].jadwal.jam_selesai << endl;
                                cout << " " << endl;
                            }

                            if(jumlah_dokter == 0) {
                        
                            } else {
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
                            break;
                        case 5:
                            cout << "Terima kasih telah menggunakan program ini!\n";
                            exit(0);
                        default:
                            cout << "Pilihan tidak valid! Coba lagi.\n";
                    }
                }


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
    return 0;
} 