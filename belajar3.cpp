#include <iostream>
using namespace std;

int main() {
 int alas, tinggi;
 float luas;
 cout << "Masukkan alas: ";
 cin >> alas;
 cout << "Masukkan tinggi: ";
 cin >> tinggi;
 system("cls");
 luas = 0.5 * alas * tinggi;
 cout << "Luas segitiga adalah: " << luas;
}