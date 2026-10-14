//array dua dimensi
#include <iostream>
using namespace std;

int main(){
    int i,j,A[3][3],B[3][3],C[3][3];
    //input matrix A
    cout<<"Masukkan nilai matrix A : \n";
    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
    {
        cout<<"A["<<i<<"]["<<j<<"] : ";
        cin>>A[i][j];
    }
    //input matrix B
    cout<<"Masukkan nilai matrix B : \n";
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        cout<<"B["<<i<<"]["<<j<<"] : ";
        cin>>B[i][j];
    }
    //penjumlahan matriks A & B
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    C[i][j]=A[i][j]+B[i][j];
    //cetak matriks C
    cout<<"\nHasil penjumlahan matriks A & B : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<C[i][j]<<"\t";
        cout<<"\n";
    }
}