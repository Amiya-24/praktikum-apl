#include <iostream>
using namespace std;

int main() {
    // Login
    string username = "Faiz";
    string password = "031";
    string login_password;
    string login_username;
    int percobaan = 0;

    while (percobaan < 3) {
        cout << "Masukkan Username Anda: ";
        cin >> login_username;
        cout << "Masukkan Password Anda: ";
        cin >> login_password;

        if (login_username == username && login_password == password) {
            cout << "Login Berhasil!" << endl;
            break;

        } else {
            cout << "Username atau Password Salah. Silahkan Coba Lagi\n" << endl;
            percobaan++;
            if (percobaan == 3) {
                cout << "Percobaan Login Telah Habis. Program Di Hentikan.";
                exit(0);
            }
        }
    }

    // Program Konversi Suhu
    while (true) {
        cout << "\nProgram Konversi Suhu" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Reamur" << endl;
        cout << "4. Kelvin" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih Jenis Suhu Awal: ";
        
        string pilih;
        cin >> pilih;
        
        while (true){
            if (pilih == "1") {
                cout << "Masukkan Suhu dalam Celcius(C): ";
                double celcius;
                cin >> celcius;

                cout << "\nKonversi Menjadi" << endl;
                cout << "1. Fahrenheit" << endl;
                cout << "2. Reamur" << endl;
                cout << "3. Kelvin" << endl;
                cout << "4. Kembali" << endl;
                cout << "Pilih Jenis Konversi: ";
                
                string pilih_konversi;
                cin >> pilih_konversi;
    
                if (pilih_konversi == "1") {
                    float hasil = celcius * 9/5 + 32;
                    cout << celcius << " Derajat Celcius Sama Dengan " << hasil << " Fahrenheit(F)" << endl;
                    break;
    
                } else if (pilih_konversi == "2") {
                    float hasil = celcius * 4/5;
                    cout << celcius << " Derajat Celcius Sama Dengan " << hasil << " Reamur(R)" << endl;
                    break;
    
                } else if (pilih_konversi == "3") {
                    float hasil = celcius + 273.15;
                    cout << celcius << " Derajat Celcius Sama Dengan " << hasil << " Kelvin(K)" << endl;
                    break;
    
                } else if (pilih_konversi == "4") {
                    break;
    
                } else {
                    cout << "Pilihan Tidak Valid." << endl;
                }
            
            } else if (pilih == "2") {
                cout << "Masukkan Suhu dalam Fahrenheit(F): ";
                double fahrenheit;
                cin >> fahrenheit;

                cout << "\nKonversi Menjadi" << endl;
                cout << "1. Celcius" << endl;
                cout << "2. Reamur" << endl;
                cout << "3. Kelvin" << endl;
                cout << "4. Kembali" << endl;
                cout << "Pilih Jenis Konversi: ";
                
                string pilih_konversi;
                cin >> pilih_konversi;
                
                if (pilih_konversi == "1") {
                    float hasil = (fahrenheit - 32) / 1.8;
                    cout << fahrenheit << " Derajat Fahrenheit Sama Dengan " << hasil << " Celcius(C)" << endl;
                    break;
                
                } else if (pilih_konversi == "2") {
                    float hasil = (fahrenheit - 32) / 2.25;
                    cout << fahrenheit << " Derajat Fahrenheit Sama Dengan " << hasil << " Reamur(R)" << endl;
                    break;
                    
                } else if (pilih_konversi == "3") {
                    float hasil = (fahrenheit + 32) / 1.8 + 273.15;
                    cout << fahrenheit << " Derajat Fahrenheit Sama Dengan " << hasil << " Kelvin(K)" << endl;
                    break;
                    
                } else if (pilih_konversi == "4") {
                    break;
                    
                } else {
                    cout << "Pilihan Tidak Valid." << endl;
                }

            } else if (pilih == "3") {
                cout << "Masukkan Suhu dalam Reamur(R): ";
                double reamur;
                cin >> reamur;

                cout << "\nKonversi Menjadi" << endl;
                cout << "1. Celcius" << endl;
                cout << "2. Fahrenheit" << endl;
                cout << "3. Kelvin" << endl;
                cout << "4. Kembali" << endl;
                cout << "Pilih Jenis Konversi: ";
                
                string pilih_konversi;
                cin >> pilih_konversi;
                
                if (pilih_konversi == "1") {
                    float hasil = reamur * 5/4;
                    cout << reamur << " Derajat Reamur Sama Dengan " << hasil << " Celcius(C)" << endl;
                    break;
                    
                } else if (pilih_konversi == "2") {
                    float hasil = reamur * 9/4 + 32;
                    cout << reamur << " Derajat Reamur Sama Dengan " << hasil << " Fahrenheit(F)" << endl;
                    break;
                    
                } else if (pilih_konversi == "3") {
                    float hasil = reamur * 5/4 + 273.15;
                    cout << reamur << " Derajat Reamur Sama Dengan " << hasil << " Kelvin(K)" << endl;
                    break;
                    
                } else if (pilih_konversi == "4") {
                    break;
                    
                } else {
                    cout << "Pilihan Tidak Valid." << endl;
                }
            
            } else if (pilih == "4") {
                cout << "Masukkan Suhu dalam Kelvin(K): ";
                double kelvin;
                cin >> kelvin;

                cout << "\nKonversi Menjadi" << endl;
                cout << "1. Celcius" << endl;
                cout << "2. Fahrenheit" << endl;
                cout << "3. Reamur" << endl;
                cout << "4. Kembali" << endl;
                cout << "Pilih Jenis Konversi: ";
                
                string pilih_konversi;
                cin >> pilih_konversi;
                
                if (pilih_konversi == "1") {
                    float hasil = kelvin - 273.15;
                    cout << kelvin << " Derajat Kelvin Sama Dengan " << hasil << " Celcius(C)" << endl;
                    break;
                    
                } else if (pilih_konversi == "2") {
                    float hasil = (9/5) * (kelvin - 273.15) + 32;
                    cout << kelvin << " Derajat Kelvin Sama Dengan " << hasil << " Fahrenheit(F)" << endl;
                    break;
                    
                } else if (pilih_konversi == "3") {
                    float hasil = (4/5) * (kelvin - 273.15);
                    cout << kelvin << " Derajat Kelvin Sama Dengan " << hasil << " Reamur(R)" << endl;
                    break;
                    
                } else if (pilih_konversi == "4") {
                    break;
                    
                } else {
                    cout << "Pilihan Tidak Valid." << endl;
                }
        
        } else if (pilih == "5") {
            cout << "Program Dihentikan." << endl;
            exit(0);
        }
        else {
            cout << "Pilihan Tidak Valid. Silahkan Masukkan Ulang." << endl;
            break;
        }
        }
        return 0;
    }
    return 0;
}
