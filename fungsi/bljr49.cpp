#include <stdio.h>
void tukar(int *x, int *y);
int main (void)
{
  int i, j;
  i = 10;
  j = 20;
  printf("i dan j sebelum pertukaran: %d %d\n", i, j);
  tukar(&i, &j); /* mengirimkan alamat i dan j */
  printf("i dan j setelah pertukaran: %d %d\n", i, j);
  return 0;
}
void tukar(int *x, int *y)
{
  int temp;
  temp =  *x; /* simpan nilai yang ada pada alamat x */
  *x = *y;    /* simpan nilai pada alamat y ke alamat x */
  *y = temp;  /* simpan nilai temp ke alamat y */
}