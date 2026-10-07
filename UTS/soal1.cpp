// program menampilkan bilangan 1 2 3 5 9 = 20 menggunakan perulangan for
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    for (bil = 1; bil <= 9; bil++) 
    {
        if (bil == 4 or bil == 6 or bil == 7 or bil == 8)
            continue;

        jumlah = jumlah + bil;
        cout << bil << ' ';
    }

    cout << "= " << jumlah;

    return 0;
}