//array dimensi satu dg data
#include <iostream>
using namespace std;

int main()
{
    float suhu[14]={0};
    float suhuMin,suhuMax,jumlah,xRata;
    int j;
    for(j=0;j<14;j++)
    {
        cout<<"Masukkan suhu hari ke-"<<j+1<<" : ";
        cin>>suhu[j];
    }
    suhuMin=suhu[1];
    suhuMax=suhu[1];
    jumlah=0.0;
    for(j=0;j<14;j++)
    {
        //mencari suhu minimum
        if(suhu[j]<suhuMin)
            suhuMin=suhu[j];
        //mencari suhu maximum
        if(suhu[j]>suhuMax)
            suhuMax=suhu[j];
        //menghitung jumlah suhu
        jumlah+=suhu[j];
    }
    //menghitung rata-rata suhu 2 minggu
    xRata=jumlah/14;
    cout <<"\nData suhu yg dimasukkan : \n";
    for(j=0;j<14;j++)
        cout<<suhu[j]<<"\t";
    cout<<"\nSuhu minimum: "<<suhuMin<<endl;
    cout<<"\nSuhu maximum: "<<suhuMax<<endl;
    cout<<"\nRata-rata suhu: "<<xRata<<endl;
}