#include <iostream>
#include <string> // Menyertakan library string
using namespace std;

class Mahasiswa {
private:
    static int nim; // Variabel static shared

public:
    int id;
    string nama;

    // Prosedur yang akan didefinisikan di luar class
    void setID();
    void printAll();

    // Static function untuk memanipulasi variabel static
    static void setNim(int pnim) {
        nim = pnim;
    }

    static int getNim() {
        return nim;
    }

    // Constructor dengan member initialize list
    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};
// Inisialisasi variabel static di luar class
int Mahasiswa::nim = 0;

// Implementasi prosedur setID di luar class
void Mahasiswa::setID() {
    id = ++nim; // Prefix increment agar NIM naik sebelum diassign
}

// Implementasi prosedur printAll di luar class
void Mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}