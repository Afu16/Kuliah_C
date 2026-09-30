//menentukan keliling lingkaran
#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14;
    int r;
    float keliling;
    cout << "Masukkan jari-jari lingkaran: "; cin >> r;
    keliling = 2 * phi * r;
    cout << "Keliling lingkaran adalah: " << keliling << endl;

    return 0;
}