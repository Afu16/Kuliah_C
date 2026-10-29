#include <stdio.h>
void printAngka(void);
int main() {
   int num1 = 10;
   printf("nilai num1 dalam fungsi main: %d\n", num1);
   printAngka();
   printf("nilai num1 dalam fungsi main: %d\n", num1);
return 0; }
// void printAngka()
// {
//    float num1 = 5.5;
//    printf("nilai num1 dalam fungsi printAngka: %.2f\n", num1);
// }

void printAngka()
{
int num1 = 5;
   printf("nilai num1 dalam fungsi printAngka: %d\n", num1);
}