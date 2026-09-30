#include <iostream>
using namespace std;
//11 operator kondisi bilangan terkecil dri 2 bilangan bisa masukkan bilangan dari user/otomatiss
int main (){
    int bil1, bil2, bilTerkecil;
    // bil1 = 22;
    // bil2 = 33;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    bilTerkecil = (bil1 < bil2) ? bil1 : bil2;
    cout << "Bilangan terkecil adalah: " << bilTerkecil << endl;
}