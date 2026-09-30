#include <iostream>
using namespace std;
//12 operator relasi, lebih dll.
int main() {
    int bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    cout << "Apakah bilangan pertama lebih besar dari bilangan kedua? " << (bil1 > bil2) << endl;
    cout << "Apakah bilangan pertama lebih kecil dari bilangan kedua? " << (bil1 < bil2) << endl;
    cout << "Apakah bilangan pertama sama dengan bilangan kedua? " << (bil1 == bil2) << endl;
    cout << "Apakah bilangan pertama tidak sama dengan bilangan kedua? " << (bil1 != bil2) << endl;
}