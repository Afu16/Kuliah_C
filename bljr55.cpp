//Dalam bahasa C++
#include <cctype>
#include <iostream>
#include <string>

void cekVokal(char);
int jmlA, jmlE, jmlI, jmlO, jmlU;

int main() {
    std::string kalimat;

    std::cout << "Masukkan sebuah kalimat:\n";
    std::getline(std::cin, kalimat);

    jmlA = jmlE = jmlI = jmlO = jmlU = 0;
    for (std::size_t i = 0; i < kalimat.length(); ++i)
        cekVokal(kalimat[i]);

    std::cout << "\n\nJumlah karakter: " << kalimat.length();
    std::cout << "\n\nJumlah huruf A: " << jmlA;
    std::cout << "\nJumlah huruf E: " << jmlE;
    std::cout << "\nJumlah huruf I: " << jmlI;
    std::cout << "\nJumlah huruf O: " << jmlO;
    std::cout << "\nJumlah huruf U: " << jmlU << std::endl;

    return 0;
}

void cekVokal(char huruf) {
    switch (std::tolower(static_cast<unsigned char>(huruf))) {
        case 'a':
            jmlA++;
            break;
        case 'e':
            jmlE++;
            break;
        case 'i':
            jmlI++;
            break;
        case 'o':
            jmlO++;
            break;
        case 'u':
            jmlU++;
            break;
        default:
            break;
    }
}