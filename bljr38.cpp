//perulangan for
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Menampilkan bilangan genap yg nilainya" << endl;
    cout << "kurang atau sama dg n" << endl;
    cout << "Masukkan nilai n : ";
    cin >> n;
    //if ganjil, maka dikurangi 1
    if (n % 2 )
        n--;
    for ( ; n >= 0; n -= 2) 
        cout << n << ' ';
    
}