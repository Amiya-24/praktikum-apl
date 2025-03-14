#include <iostream>
using namespace std;

string jadwal[10][4];
int jumlah_dokter = 0;

int main() {
    system("cls");
    // LOGIN
    int percobaan = 0;
    string username = "faiz", password = "031", login_user, login_password, pilih;

    while(true){
        cout << "<===== Home Page =====>\n";
        cout << "1. Login\n";
        cout << "2. Keluar\n";
        cout << "Pilih Fitur: "; cin >> pilih;
        system("cls");

        if(pilih == "1"){
            while(percobaan < 3){
                cout << "<===== Login Page =====>\n";
                cout << "Username: "; cin >> login_user;
                cout << "Password: "; cin >> login_password;
                system("cls");

                if(login_user == username and login_password == password){
                    cout << "Login Berhasil!" << endl;

                    // CRUD
                    while (true){
                        cout << "\n<===== Jadwal Praktik Dokter =====>\n";
                        cout << "1. Tampilkan Jadwal\n";
                        cout << "2. Tambah Jadwal\n";
                        cout << "3. Ubah Jadwal\n";
                        cout << "4. Hapus Jadwal\n";
                        cout << "5. Keluar\n";
                        cout << "Pilih Fitur: "; cin >> pilih;
                        system("cls");

                        if(pilih == "1"){
                            // Tampilkan Jadwal
                            system("cls");
                            if (jumlah_dokter >= 1){
                                for(int i = 0; i < jumlah_dokter; ++i){
                                    cout << i + 1 << ". Nama: " << jadwal[i][0] << endl;
                                    cout << "   " << "Spesialis: " << jadwal[i][1] << endl;
                                    cout << "   " << "Jam Mulai: " << jadwal[i][2] << endl;
                                    cout << "   " << "Jam Selesai: " << jadwal[i][3] << endl;
                                    cout << " " << endl;
                                }

                            }else{
                                cout << "Jadwal Kosong" << endl;
                            }

                        } else if(pilih == "2"){
                            // Tambah Jadwal
                            system("cls");
                            if(jumlah_dokter >= 1){
                                for(int i = 0; i <jumlah_dokter; ++i){
                                    cout << i + 1 << ". Nama: " << jadwal[i][0] << endl;
                                    cout << "   " << "Spesialis: " << jadwal[i][1] << endl;
                                    cout << "   " << "Jam Mulai: " << jadwal[i][2] << endl;
                                    cout << "   " << "Jam Selesai: " << jadwal[i][3] << endl;
                                    cout << " " << endl;
                                }

                            }
                            cout << "\nNama Dokter: "; cin >> jadwal[jumlah_dokter][0];
                            cout << "Spesialis: "; cin >> jadwal[jumlah_dokter][1];
                            cout << "Jam Mulai: "; cin >> jadwal[jumlah_dokter][2];
                            cout << "Jam Selesai: "; cin >> jadwal[jumlah_dokter][3];
                            jumlah_dokter++;
                        
                        } else if(pilih == "3"){
                            // Ubah Jadwal
                            system("cls");
                            if(jumlah_dokter == 0){
                                cout << "Jadwal Kosong" << endl;

                            }else{
                                for(int i = 0; i <jumlah_dokter; ++i){
                                    cout << i + 1 << ". Nama: " << jadwal[i][0] << endl;
                                    cout << "   " << "Spesialis: " << jadwal[i][1] << endl;
                                    cout << "   " << "Jam Mulai: " << jadwal[i][2] << endl;
                                    cout << "   " << "Jam Selesai: " << jadwal[i][3] << endl;
                                }

                                int index;
                                cout << "Pilih ID Dokter Yang Ingin Di Ubah\n"; cin >> index;
                                string nama, spesialis, jam_mulai, jam_selesai;
    
                                if(index >= 1 and index <= jumlah_dokter){
                                    cout << "Masukan Nama Dokter: "; cin >> jadwal[index-1][0];
                                    cout << "Masukkan Spesialis: "; cin >> jadwal[index-1][1];
                                    cout << "Masukkan Jam Mulai: "; cin >> jadwal[index-1][2];
                                    cout << "Masukkan Jam Selesai: "; cin >> jadwal[index-1][3];
    
                                }else{
                                    cout << "ID Dokter Tidak Valid\n";
                                }
    
                            }


                        } else if(pilih == "4"){
                            // Hapus Jadwal
                            system("cls");
                            if(jumlah_dokter == 0){
                                cout << "Jadwal Kosong" << endl;

                            }else{
                                for(int i = 0; i < jumlah_dokter; ++i){
                                    cout << i + 1 << ". Nama: " << jadwal[i][0] << endl;
                                    cout << "   " << "Spesialis: " << jadwal[i][1] << endl;
                                    cout << "   " << "Jam Mulai: " << jadwal[i][2] << endl;
                                    cout << "   " << "Jam Selesai: " << jadwal[i][3] << endl;
                                }
                                
                                int index;
                                cout << "Pilih ID Dokter Yang Ingin Di Hapus"; cin >> index;
                                if(index >= 1 and index <= jumlah_dokter){
                                    for(int j = index-1; j < jumlah_dokter-1; ++j){
                                        jadwal[j][0] = jadwal[j+1][0];
                                        jadwal[j][1] = jadwal[j+1][1];
                                        jadwal[j][2] = jadwal[j+1][2];
                                        jadwal[j][3] = jadwal[j+1][3];
                                    }

                                    jumlah_dokter--;
                                    cout << "Jadwal Dokter Berhasil Dihapus\n";

                                } else{
                                    cout << "ID Dokter Tidak Valid\n";
                                }
                            }

                        } else if(pilih == "5"){
                            system("cls");
                            cout << "Program Di Hentikan";
                            exit(0);
                            
                        } else{
                            cout << "Pilihan Tidak Valid\n";
                        }
                    }


                } else {
                    cout << "Login Gagal! Percobaan ke-" << percobaan + 1 << "\n" << endl;
                    percobaan++;
                    if(percobaan == 3){
                        cout << "Percobaan Melewati Batas\n";
                        cout << "Program Di Hentikan";
                        exit(0);
                    }
                }
            }
        
        } else if(pilih == "2"){
            cout << "Program Di Hentikan";
            exit(0);

        } else{
            cout << "Pilihan Tidak Valid\n";
        }
    }

    return 0;
}