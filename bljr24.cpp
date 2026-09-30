// penggunaan pernyataan if lebih besar atau kecil dari 10

#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
   if (angka > 10) {
        cout << "10 <" << angka << endl;
    } else if (angka < 10) {
        cout << "10 > " << angka << endl;
    } else {
        cout << " 10 = " << angka << endl;
    }
}