#include <stdio.h>
int main() {
  int x = 99;
  int *p1, *p2;
  p1 = &x;
  p2 = p1;
  /* cetak nilai x, dua kali */
  printf("Nilai pada p1 dan p2: %d %d\n", *p1, *p2);
  /* cetak alamat x, dua kali */
  printf("Alamat yg ditunjuk oleh p1 dan p2: %p %p", p1, p2);
  return 0;
}