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
    Barang Elektronik;
    Elektronik.nama = "Samsung A56";
    Elektronik.jumlah = 10;
    Elektronik.kategori = "Elektronik";
    Elektronik.tanggalProduksi = 20250315;

    Barang nonElektronik;
    nonElektronik.nama = "Buku Dasar Pemrograman C++";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = 20231128;

    Elektronik.printData();
    nonElektronik.printData();
}