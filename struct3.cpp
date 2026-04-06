#include <iostream>
using namespace std;

struct alamardetail
{
    string desa;
    string kota;
};
struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    // deklarasi variabel struct
    mahasiswa mhs;
    //mengisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "data mahasiswa "  << endl;
    cout << "nama : "  <<mhs.nama << endl;
    cout << "alamat : "  <<mhs.alamat << endl;
    cout << "umur : "  <<mhs.umur << endl;
}