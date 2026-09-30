#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;
int main() {
    string nama, nim, alamat;
    int tahunLahir;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    getline(cin, nim);

    cout << "Masukkan alamat: ";
    getline(cin, alamat);

    cout << "Masukkan tahun lahir (YYYY): ";
    if (!(cin >> tahunLahir)) return 0;

    auto now = chrono::system_clock::now();
    time_t t = chrono::system_clock::to_time_t(now);
    tm local = *localtime(&t);

    int tahunSekarang = local.tm_year + 1900;
    int umur = tahunSekarang - tahunLahir;

    cout << "\n--- Data ---\n";
    cout << "Nama   : " << nama << '\n';
    cout << "NIM    : " << nim << '\n';
    cout << "Alamat : " << alamat << '\n';
    cout << "Umur   : " << umur << " tahun\n";

    return 0;
}