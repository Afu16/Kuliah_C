// menampilkan bilangan 14 10 8 6 2 = 40 menggunakan perulangan for
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    for (bil = 14; bil >= 2; bil--) 
    {
        if (bil == 13 or bil == 12 or bil == 11 or bil == 9 or bil == 7 or bil == 5 or bil == 4 or bil == 3)
            continue;

        jumlah = jumlah + bil;
        cout << bil << ' ';
    }

    cout << "= " << jumlah;

    return 0;
}