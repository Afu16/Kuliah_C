#include <iostream>
using namespace std;

int main() 
 {
    int panjang;
    int lebar;
    int luas;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Panjang: " << panjang << endl;
    cout << "Lebar: " << lebar << endl;
    cout << "Luas persegi panjang adalah: " << luas << endl;
}