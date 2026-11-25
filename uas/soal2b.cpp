//do-while loop
#include <iostream>
using namespace std;
int main() {

int baris = 1, total = 0;
do {
    int kolom = 1;
    do {
        cout << kolom << " ";
        total += kolom;
        kolom++;
    } while (kolom <= baris);
    cout << endl;
    baris++;
} while (baris <= 5);
cout << "Total = " << total << endl;
return 0;
}