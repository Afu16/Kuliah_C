
#include <stdio.h>

// deklarasi fungsi
void tambahDua(int []);

int main() {
    int arAngka[5] = {3, 40, 5, 16, 9};
    int i;

    printf("Isi array sebelum dikirim ke dalam fungsi\n");
    for (i = 0; i < 5; i++)
        printf("%d\t", arAngka[i]);

    tambahDua(arAngka);

    printf("\n\nIsi array setelah dikirim ke dalam fungsi\n");
    for (i = 0; i < 5; i++)
        printf("%d\t", arAngka[i]);

    return 0;
}

void tambahDua(int angka[]) {
    int i;

    printf("\n\nIsi array di dalam fungsi tambahDua\n");

    for (i = 0; i < 5; i++) {
        angka[i] += 2;
        printf("%d\t", angka[i]);
    }
}