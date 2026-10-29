//dalam C
#include <stdio.h>
#include <stdlib.h>
int hLuas(int, int);
int main() {
   int p, l, s, t;
   int isi, luas;
   char ulang, pilih;
   do{
     system("cls");
     printf("Pilih jenis perhitungan:");
     printf("\na. Luas persegi panjang");
     printf("\nb. Luas bujur sangkar");
     printf("\nc. Isi balok");
     printf("\nd. Isi Kubus");
     printf("\n\nMasukkan huruf pilihan: ");
     scanf(" %c", &pilih);
     switch(pilih){
        case 'a':
        case 'A': printf("\n\nMenghitung luas persegi ");
                  printf("\nInput panjang : ");
                  scanf("%d", &p);
                  printf("Input lebar: ");
                  scanf("%d", &l);
                  luas = hLuas(p, l);
                  printf("Luas adalah: %d", luas);
                  break;
        case 'b':
        case 'B': printf("\n\nMenghitung luas bujursangkar");
                  printf("\nInput sisi : ");
                  scanf("%d", &s);
                  luas = hLuas(s, s);
                  printf("Luas adalah: %d", luas);
                  break;
        case 'c':
        case 'C': printf("\n\nMenghitung isi balok");
                  printf("\nInput panjang : ");
                  scanf("%d", &p);
                  printf("Input lebar: ");
                  scanf("%d", &l);
                  printf("Input tinggi: ");
                  scanf("%d", &t);
                  isi = hLuas(p, l) * t;
                  printf("Isi adalah: %d", isi);
                  break;
                          case 'd':
        case 'D': printf("\n\nMenghitung isi kubus");
                  printf("\nInput sisi : ");
                  scanf("%d", &s);
                  isi = hLuas(s, s) * s;
                  printf("Isi adalah: %d", isi);
                  break;
default:printf("\n\ninput pilihan yang salah"); break;
}
     printf("\n\nApakah akan melakukan perhitungan lainnya?");
    scanf(" %c", &ulang);
   }while(ulang=='y' || ulang =='Y');
return 0; }
//fungsi untuk menghitung luas persegi
int hLuas(int panjang, int lebar)
{
int luas;
   luas = panjang * lebar;
   return luas;
}