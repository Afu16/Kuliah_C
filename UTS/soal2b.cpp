//menampilkan bilangan 14 10 8 6 2 = 40 menggunakan perulangan while
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    bil = 14;
    while (bil >= 2) 
    {
        if (bil == 14 or bil == 10 or bil == 8 or bil == 6 or bil == 2) {
            jumlah = jumlah + bil;
            cout << bil << ' ';
        }
        bil--;
    }

    cout << "= " << jumlah;

    return 0;
}