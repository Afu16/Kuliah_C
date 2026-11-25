#include <iostream>
using namespace std;
int main() {
int angka = 5, total = 0;
do {
    if (angka != 2) {
        int i = 1;
        do {
            cout << angka << " ";
            total += angka;
            i++;
        } while (i <= angka);
        cout << endl;
    }
    angka--;
} while (angka >= 1);
cout << "Total = " << total << endl;
return 0;
}