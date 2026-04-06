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
    mahasiswa mhs[3];
    //mengisi data
    for (int i = 0 ; i <= 2; i++)
    {
    cout << "isikan data nama : ";
    getline (cin, mhs[i].nama );
    cout << "Isikan data desa : ";
    getline (cin, mhs[i].alamat.desa );
    cout << "Isikan data kota : ";
    getline (cin, mhs[i].alamat.kota );
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    
    }

    cout << "Data Mahasiswa" << endl;
    for(int i = 0; i < 2; i++)
    {
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Usia : " << mhs[i].umur << endl;
    }
}