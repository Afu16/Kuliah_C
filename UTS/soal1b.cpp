// program menampilkan bilangan 1 2 3 5 9 = 20 menggunakan perulangan while
#include <iostream>
using namespace std;

int main() {
    int bil, jumlah = 0;

    bil = 1;
    while (bil <= 9) 
    {
        if (bil == 4 or bil == 6 or bil == 7 or bil == 8)
            continue;

        jumlah = jumlah + bil;
        cout << bil << ' ';
        bil++;  
    }

    cout << "= " << jumlah;

    return 0;
}