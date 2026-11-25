//while loop
#include <iostream>
using namespace std;
int main() {
int baris = 1, total = 0;
while (baris <= 5) {
    int kolom = 1;
    while (kolom <= baris) {
        cout << kolom << " ";
        total += kolom;
        kolom++;
    }
    cout << endl;
    baris++;
}
cout << "Total = " << total << endl;
return 0;
}
