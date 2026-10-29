
#include <iostream>
#include <cstdlib>
using namespace std;

int hLuas(int, int);

int main() {
    int p, l, s, t;
    int isi, luas;
    char ulang, pilih;

    do {
        system("clear");

        cout << "Pilih jenis perhitungan:";
        cout << "\na. Luas persegi panjang";
        cout << "\nb. Luas bujur sangkar";
        cout << "\nc. Isi balok";
        cout << "\nd. Isi kubus";
        cout << "\n\nMasukkan huruf pilihan: ";

        cin >> pilih;

        switch (pilih) {
            case 'a':
            case 'A':
                cout << "\n\nMenghitung luas persegi panjang";
                cout << "\nInput panjang: ";
                cin >> p;
                cout << "Input lebar: ";
                cin >> l;

                luas = hLuas(p, l);
                cout << "Luas adalah: " << luas;
                break;

            case 'b':
            case 'B':
                cout << "\n\nMenghitung luas bujursangkar";
                cout << "\nInput sisi: ";
                cin >> s;

                luas = hLuas(s, s);
                cout << "Luas adalah: " << luas;
                break;

            case 'c':
            case 'C':
                cout << "\n\nMenghitung isi balok";
                cout << "\nInput panjang: ";
                cin >> p;
                cout << "Input lebar: ";
                cin >> l;
                cout << "Input tinggi: ";
                cin >> t;

                isi = hLuas(p, l) * t;
                cout << "Isi adalah: " << isi;
                break;

            case 'd':
            case 'D':
                cout << "\n\nMenghitung isi kubus";
                cout << "\nInput sisi: ";
                cin >> s;

                isi = hLuas(s, s) * s;
                cout << "Isi adalah: " << isi;
                break;

            default:
                cout << "\n\nSalah input pilihan";
                break;
        }

        cout << "\n\nApakah akan melakukan perhitungan lainnya? (Y/T): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}

int hLuas(int panjang, int lebar) {
    return panjang * lebar;
}
