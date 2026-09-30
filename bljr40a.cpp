// perulangan for
#include <iostream>
using namespace std;

int main() {
    int bil, jlh = 0;

    for (bil = 1; bil <= 10; bil++) 
    {
        if (bil == 5 or bil == 8)
            continue;

        jlh = jlh + bil;
        cout << bil << ' ';
    }

    cout << "\nJumlah: " << jlh;

    return 0;
}