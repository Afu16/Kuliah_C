//C++
#include <iostream>
#include <string>
using namespace std;    
int main() {
   string warna;
   cout << "Masukkan warna favorit anda: ";
   getline(cin, warna);
   cout << "\nWarna anda adalah " << warna;
   return 0;
}

// C
// #include <stdio.h>
// int main() {
//    char warna[12];
//    printf("Masukkan warna favorit anda: ");
//    scanf("%s", warna);
//    printf("\nWarna anda adalah %s", warna);
// }