#include <iostream>
#include <cmath> 
using namespace std;

void tampilkanMenu() {
    cout << "============================" << endl;
    cout << "    KALKULATOR MATEMATIKA   " << endl;
    cout << "============================" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Pangkat" << endl;
    cout << "6. Akar Kuadrat" << endl;
    cout << "7. Keluar" << endl;
    cout << "----------------------------" << endl;
    cout << "Masukkan pilihan Anda (1-7): ";
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;

    do {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 6) {
            if (pilihan == 6) { 
                cout << "Masukkan angka: ";
                cin >> angka1;

                if (angka1 >= 0) {
                    hasil = pow(angka1, 0.5); 
                    cout << "Hasil akar kuadrat: " << hasil << endl;
                } else {
                    cout << "Error: Tidak bisa menghitung akar kuadrat dari angka negatif." << endl;
                }
            } else {
                cout << "Masukkan angka pertama: ";
                cin >> angka1;

                if (pilihan != 6) {
                    cout << "Masukkan angka kedua: ";
                    cin >> angka2;
                }
