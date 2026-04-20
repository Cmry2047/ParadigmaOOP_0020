#include <iostream>
using namespace std;

class Mahasiswa{

    public :
        int nim;
        string nama;
        float nilai;
        void printData(){
            cout << "NIM : " << nim << endl;
        }
}; //batas Class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2025;
    mhs.nama = "Fadhil";
    mhs.nilai = 85.5;

    mhs.printData();
}