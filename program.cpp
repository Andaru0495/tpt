#include <iostream>
using namespace std;

class mahasiswa{
    public:
    string nama;
    int umur;
};

int main(){
    mahasiswa m;
    m.nama="andaru";
    m.umur = 19;

    cout << "nama" << m.nama << endl;
    cout <<"umur" << m.umur << endl;
    return 0;
}