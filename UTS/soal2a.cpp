// menampilkan bilangan 14 10 8 6 2 = 40 menggunakan perulangan for
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    for (bil = 14; bil >= 2; bil--) 
    {
        if (bil == 14 or bil == 10 or bil == 8 or bil == 6 or bil == 2) {
            jumlah = jumlah + bil;
            cout << bil << ' ';
        }
    }

    cout << "= " << jumlah;

    return 0;
}