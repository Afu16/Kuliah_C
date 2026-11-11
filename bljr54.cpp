// C++ program to demonstrate the use of arrays
#include <iostream>
#include <string>

int main() {
    std::string warna[5];

    for (int x = 0; x < 5; x++) {
        std::cout << "Masukkan warna favorit ke-" << x + 1 << " anda: ";
        std::getline(std::cin, warna[x]);
    }

    std::cout << "\nWarna-warna yang anda masukkan adalah\n";
    for (int x = 0; x < 5; x++) {
        std::cout << warna[x] << '\n';
    }

    return 0;
}

// C
// #include <stdio.h>
// main() {
//    char warna[5][12];
//    int x;
//    for(x=0; x<5; x++)
//    {
//      printf("Masukkan warna favorit ke-%d anda: ", x+1);
//      gets(warna[x]);
//    }
//    printf("\nWarna-warna yang anda masukkan adalah\n");
//    for(x=0; x<5; x++)
//      puts(warna[x]);
// }