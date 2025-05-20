#include <iostream>
#include <string>
using namespace std;

class Barang
{
    private :
    int KodeBarang;
    string NamaBarang;

    public :
    Barang(int iKodeBarang, string iNamaBarang);
    void cetak();
};

Barang::Barang(int iKodeBarang, string iNamaBarang){
    KodeBarang = iKodeBarang;
    NamaBarang = iNamaBarang;
}

void Barang::cetak(){
    cout<<endl<< "KodeBarang =" <<KodeBarang;
    cout<<endl<< "NamaBarang =" <<NamaBarang;
}

int main(){
    Barang brg(203, "chocolatos");

    brg.cetak();

    return 0;
}