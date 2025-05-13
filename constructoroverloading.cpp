#include <iostream>
#include <string>
using namespace std;

class mahasisa{
    private:
int nim
string nama;

public:
mahasiswa();
mahasiswa(int);
mahsiswa(string);
mahasiswa(int nim, string nama);
}

void cetak();
};

mahsiswa :: mahasiswa(int iNim){
    nim = iNim;
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama;
}

mahasiswa :: mahasiwa(int iNim, string iNama){
    nim = iNim;
    nama = inama;
}

void mahasiswa::cetak(){

    cout << endl << "Nim = " <<nim << endl;
    cout << "Nama = " << nama << endl;
}

int main(0{
    mahasiswa mhs1(102030);
    mahasiswa mhs2("Andi");
    mahasiswa mhs3(010203, "Santi");

    cout << "mahasiswa 1:"; mhs1.cetak();
    cout << "mahasiswa 2:"; mhs2.cetak();
    cout << "mahasiswa 3:"; mhs3.cetak();

    return 0;
})
