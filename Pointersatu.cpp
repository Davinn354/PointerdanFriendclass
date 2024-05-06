#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<< "No Induk = " <<nim << endl;
    }
};

int main(){

    mahasiswa mhs{1}; //Object mhs
    mhs.showNim(); // Member access Operator

    mahasiswa &refMhs = mhs; // Pointer reference pointer
    refMhs.nim = 2; // Member access Operator

    mahasiswa *pMhs = &mhs; //pointer Deference pMhs
    pMhs->nim = 3; // Arrow operator
    pMhs->showNim();
    return 0;
}