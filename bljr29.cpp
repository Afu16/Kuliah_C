//nested if
#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    if (angka != 0)
            if (angka < 0) 
                cout << "Angka " << angka << " adalah negatif." << endl;
            else
                cout << "Angka " << angka << " adalah positif." << endl;
    else 
      cout << "yg d input adalah NOL" << endl;
    
}