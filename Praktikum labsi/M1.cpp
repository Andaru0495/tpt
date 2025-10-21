#include <iostream>
using namespace std;

int main(){
    int panjang;
    int lebar;
    int luas;
    int keliling;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    cout << "luas persegi panjang adalah: " << luas << endl;
    cout << "keliling persegi panjang adalah: " << keliling << endl;
}