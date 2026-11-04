#include <stdio.h>
int main(void)
{
  double x = 100.1, y;
  int *p;
  // p (pointer integer) digunakan untuk merujuk
  // pada tipe data double
  p = (int *) &x;
  // meletakkan nilai yang ada pada alamat p ke dalam y
  // namun tidak memberikan hasil seperti yang diharapkan
  y = *p; // meletakkan nilai x ke dalam y melalui p
  // output yang diharapkan adalah 100.1.
  printf("Nilai (yg salah) dari x adalah: %f", y);
  printf("\n\nisi p dan alamat dari variabel x");
  printf("\np : %p", p);
  printf("\n&x: %p", &x);
  return 0;
}