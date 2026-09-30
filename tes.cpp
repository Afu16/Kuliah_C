#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama, nim, alamat;
    int tahunLahir,umur;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan alamat: ";
    cin >> alamat;
    cout << "Masukkan tahun lahir: ";
    cin >> tahunLahir;
    umur = 2026 - tahunLahir;
    cout << "Umur: " << umur << " tahun";
}