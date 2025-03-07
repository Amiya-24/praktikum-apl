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
}