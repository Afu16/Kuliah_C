
#include <stdio.h>
#include <stdlib.h>

void inputMatrik(int[][3]);
void cetakMatrik(int[][3]);
void jmlMatrik(int[][3], int[][3], int[][3]);

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input elemen matriks A
    printf("Masukkan nilai elemen matriks A\n");
    inputMatrik(A);

    // Input elemen matriks B
    printf("\nMasukkan nilai elemen matriks B\n");
    inputMatrik(B);

    // Penjumlahan matriks A dan B
    jmlMatrik(A, B, C);

    system("clear");

    // Cetak matriks A
    printf("Matriks A:\n");
    cetakMatrik(A);

    // Cetak matriks B
    printf("\nMatriks B:\n");
    cetakMatrik(B);

    // Cetak matriks C
    printf("\nHasil penjumlahan matriks A dan B:\n");
    cetakMatrik(C);

    return 0;
}

void inputMatrik(int X[][3]) {
    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("[%d][%d] : ", i, j);
            scanf("%d", &X[i][j]);
        }
    }
}

void cetakMatrik(int X[][3]) {
    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%5d", X[i][j]);

        printf("\n");
    }
}

void jmlMatrik(int X[][3], int Y[][3], int Z[][3]) {
    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }
}
