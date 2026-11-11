// C++
#include <iostream>

int main() {
   const char *strNama[5] = {};
   int x;
   strNama[0] = "David";
   strNama[1] = "Sheila";
   strNama[2] = "Marta";
   strNama[3] = "Bima";
   strNama[4] = "Rahma";
   std::cout << "Nama-nama dalam array pointer bertipe char:\n\n";
   for ( x = 0; x < 5; x++ )
      std::cout << strNama[x] << '\n';
}

// C
// #include <stdio.h>
// main() {
//    char *strNama[5] = {0};
//    char answer[80] = {0};
//    int x;
//    strNama[0] = "David";
//    strNama[1] = "Sheila";
//    strNama[2] = "Marta";
//    strNama[3] = "Bima";
//    strNama[4] = "Rahma";
//    printf("Nama-nama dalam array pointer bertipe char:\n\n");
//    for ( x = 0; x < 5; x++ )
//       printf("%s\n", strNama[x]);
// }