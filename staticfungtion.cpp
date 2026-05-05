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

int main() {
    // Membuat object dan memberi nilai awal
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    // Mengubah nilai shared NIM menggunakan static function
    Mahasiswa::setNim(9);

    // Object yang dibuat setelah setNim(9) akan melanjutkan dari angka tersebut
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    // Menampilkan semua data mahasiswa
    mhs1.printAll(); // ID: 1
    mhs2.printAll(); // ID: 2
    mhs3.printAll(); // ID: 10 (9 + 1)
    mhs4.printAll(); // ID: 11 (10 + 1)

    // Menampilkan status NIM terakhir melalui akses static function
    cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl;
    
    system("pause"); // Menghentikan console agar tidak langsung tertutup
    return 0;
}