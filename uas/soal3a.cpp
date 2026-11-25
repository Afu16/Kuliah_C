#include <iostream>
using namespace std;
int main() {
int angka = 5, total = 0;
while (angka >= 1) {
    if (angka != 2) {
        int i = 1;
        while (i <= angka) {
            cout << angka << " ";
            total += angka;
            i++;
        }
        cout << endl;
    }
    angka--;
}
cout << "Total = " << total << endl;
return 0;
}