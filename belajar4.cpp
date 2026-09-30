#include <iostream>
using namespace std;
int main() {
    const float phi = 3.14;
    int r;
    float luas;
    cout << "Masukkan jari-jari: ";
    cin >> r;
    luas = phi * r * r;
    cout << "Luas lingkaran adalah: " << luas << "cm^2" << endl;
}