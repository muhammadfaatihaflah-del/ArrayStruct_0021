#include <iostream>
#include <string>
using namespace std;

struct alamatdetail
{
    string desa;
    string kota;
};
struct mahasiswa
{
    string nama;
    alamatdetail alamat;
    int umur;
};

int main()
{
    // deklarasi variabel struct
    mahasiswa mhs;
    //mengisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "data mahasiswa "  << endl;
    cout << "nama : "  <<mhs.nama << endl;
    cout << "desa : "  <<mhs.alamat.desa << endl;
    cout << "kota : "  <<mhs.alamat.kota << endl;
    cout << "usia : "  <<mhs.umur << endl;
}