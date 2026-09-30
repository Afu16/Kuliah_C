//menghitung Luas Persegi Panjang
#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;
    float luas;
    cout << "Inputkan panjang: "; cin >> panjang;
    cout << "Inputkan lebar: "; cin >> lebar;

    luas = panjang * lebar;
    cout << "Luas persegi panjang adalah: " << luas << endl;
}