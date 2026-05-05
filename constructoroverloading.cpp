#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa() {
}

mahasiswa :: mahasiswa(int iNim) {
    nim = iNim; // Definisi hanya nim
}

mahasiswa :: mahasiswa(string iNama) {
    nama = iNama; // Definisi hanya nama
}

mahasiswa :: mahasiswa(int iNim, string iNama) {
    nim = iNim; // Definisi nim dan nama
    nama = iNama;
}

void mahasiswa :: cetak() {
    cout << endl << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
}