#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int umur;
    float tinggi;

    cout << "Masukkan nama: ";
    cin >> nama;
    
    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tinggi badan anda(dalam cm): ";
    cin >> tinggi;

    cout << "\n --data anda-- \n";
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "Tinggi : " << tinggi << " cm" << endl;
}
