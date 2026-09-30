// Membaca karakter dengan getch() dan getche()
#include <iostream>
#include <termios.h>
#include <unistd.h>

using namespace std;

// Pengganti getch() di Mac/Linux
char getch() {
    char buf = 0;
    struct termios old = {};

    tcgetattr(STDIN_FILENO, &old);

    struct termios new_mode = old;
    new_mode.c_lflag &= ~(ICANON | ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &new_mode);

    read(STDIN_FILENO, &buf, 1);

    tcsetattr(STDIN_FILENO, TCSANOW, &old);

    return buf;
}

// Pengganti getche() di Mac/Linux
    char getche() {
    char karakter = getch();
    cout << karakter;
    return karakter;
}

int main() {
    char karakter;

    cout << "Masukkan karakter dengan getch(): ";
    karakter = getch();

    cout << "Karakter yang dimasukkan: " << karakter << endl;

    cout << "Masukkan karakter dengan getche(): ";
    karakter = getche();
    cout << " Karakter yang dimasukkan: " << karakter << endl;

    return 0;
}