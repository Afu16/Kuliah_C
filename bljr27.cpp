// hanya if dan angka di tentukan

/* #include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "iput angka: "; cin >> angka;
    if (angka == 5)
        cout << "Kondisi Benar, Angka = 5" <<endl;
    else
        cout << "kondisi salah, Angka = " << angka << endl;
} */

#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "iput angka: "; cin >> angka;
    if (angka == 5){
        cout << "Kondisi Benar, Angka = 5" <<endl;
        cout << "========================" <<endl;
    }
    else{
        cout << "kondisi salah, Angka = " << angka << endl;
        cout << "\n========================" <<endl;
    }
}