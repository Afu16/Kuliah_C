//Soal 1: 13 + 9 + 7 + 3 + 1 = 33 buat perulangan menggunakan do-while yg outputnya adalah sebutkan angkanya lalu hasilnya berapa
#include <iostream>
using namespace std;

int main() {
    int angka = 13, total = 0, langkah = 4;
    do {
        cout << angka;
        total += angka;
        if (angka > 1) cout << " + ";
        angka -= langkah;
        langkah = (langkah == 4) ? 2 : 4;   // gantian 4 dan 2
    } while (angka >= 1);
    cout << " = " << total << endl;
    return 0;
}