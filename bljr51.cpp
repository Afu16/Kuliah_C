
#include <iostream>
using namespace std;

int main() {
    char *namaku = (char*)"Susi";
    int x = 0;

    cout << "\nNilai variabel pointer adalah: "
         << (void*)namaku << endl;

    cout << "\nPointer merujuk pada string: "
         << namaku << endl;

    // Alamat memori dicetak dalam format hexadecimal
    cout << "\n\nLokasi memori untuk tiap karakter adalah:\n";

    while (namaku[x] != '\0') {
        cout << "Huruf " << namaku[x]
             << ": " << (void*)&namaku[x] << endl;
        x++;
    }

    return 0;
}
