//pernyataan do while
#include <iostream>
using namespace std;
int main() {
    int i; //sebagai variabel pencacah yg menyatakan
           //jumlah perulangan tulisan Nilai i
    i = 1; //di isi dg 1
    do {
        cout << i <<". C++ "  << endl;
        i++; //menambah nilai i sebanyak 1 setiap perulangan
    } while (i <= 10);
}