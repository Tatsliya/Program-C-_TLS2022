//Mencari Grade dari Sebuah Nilai
#include <iostream>

using namespace std;

int main()
{
    double NilaiUjian;
    char grade;
    
    cout<<"Masukkan Nilai Ujian : ";
    cin>>NilaiUjian;
    
    if(NilaiUjian >= 85)
    grade= 'A';
    else
    
    if(NilaiUjian >= 75)
    grade= 'B';
    else
    
    if(NilaiUjian >= 65)
    grade= 'C';
    else
    
    if(NilaiUjian >= 55)
    grade= 'D';
    else
    grade= 'E';
    
    cout<<"Grade : "<<grade<<endl;
}
    
