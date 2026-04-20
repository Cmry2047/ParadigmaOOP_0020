#include <iostream>
using namespace std;

class Barang{

    public :
        string nama;
        int jumlah;
        string kategori;
        int tanggalProduksi;
        void printData(){
            cout << "Nama : " << nama << endl;
            cout << "Jumlah : " << jumlah << endl;
            cout << "Kategori : " << kategori << endl;
            cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        }
}; //batas Class


int main(){
    Barang B1;
    B1.nama = "Samsung A56";
    B1.jumlah = 10;
    B1.kategori = "Elektronik";
    B1.tanggalProduksi = 2025;

    Barang B2;
    B2.nama = "Buku Dasar Pemrograman C++";
    B2.jumlah = 50;
    B2.kategori = "nonElektronik";
    B2.tanggalProduksi = 2023;

    B1.printData();
    B2.printData();
}