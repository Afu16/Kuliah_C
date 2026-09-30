// perulangan for
#include <iostream>
using namespace std;

int main() {
    int bil, jlh = 0;

    for (bil = 5; bil >= 1; bil--) 
    {
        if (bil == 2 or bil == 4)
            continue;
        cout << bil << ' ';
        jlh = jlh + bil;
    }

    cout << "\nJumlah: " << jlh;

    return 0;
}