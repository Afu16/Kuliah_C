// menampilkan bilangan 14 10 8 6 2 = 40 menggunakan perulangan while
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    bil = 14;
    while (bil >= 2)
    {
        if (bil == 12 or  bil == 4) {
            bil++;
            continue;
        }

        jumlah = jumlah + bil;
        cout << bil << ' ';
        bil--;
    }

    cout << "= " << jumlah;

    return 0;
}