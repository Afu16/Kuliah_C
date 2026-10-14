//array dimensi satu
#include <iostream>
using namespace std;

int main() {
    int i,tgSiswa[5];
    //pemberian nilai array
    for (i=0; i<5; i++)
    tgSiswa[i] = i*2;
    //mencetak nilai array
    for (i=0; i<5; i++)
    cout <<"isi pada index ke-"<<i<<" : "<<tgSiswa[i]<<endl;
}