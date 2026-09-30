//switch case
#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan sebuah angka (0-9): ";
    cin >> angka;
    switch (angka) {
        case 0:
            cout << "Anda memilih angka 0." << endl;
            break;
        case 1:
            cout << "Anda memilih angka 1." << endl;
            break;
        case 2:
            cout << "Anda memilih angka 2." << endl;
            break;
        case 3:
            cout << "Anda memilih angka 3." << endl;
            break;
        case 4:
            cout << "Anda memilih angka 4." << endl;
            break;
        case 5:
            cout << "Anda memilih angka 5." << endl;
            break;
        case 6:
            cout << "Anda memilih angka 6." << endl;
            break;
        case 7:
            cout << "Anda memilih angka 7." << endl;
            break;
        case 8:
            cout << "Anda memilih angka 8." << endl;
            break;
        case 9:
            cout << "Anda memilih angka 9." << endl;
            break;
        default:
            cout << endl << "Angka yang dimasukan bukan antara 0-9.";
            break;
    }
    return 0;
}