//if-else if-else
#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    if (angka > 0) 
        cout << "Angka " << angka << " adalah positif." << endl;
     else if (angka == 0) 
        cout <<"yg d input adalah nol" << endl;
     else 
        cout << "Angka " << angka << " adalah negatif." << endl;
    return 0;
}