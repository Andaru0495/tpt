#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    string nama;
    int umur;
    float nilai;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    ofstream fileout("data.txt");
    fileout << "nama: " << nama << endl;
    fileout << "umur: " << umur << endl;
    fileout << fixed << setprecision(2);
    fileout << "nilai akhir: " << nilai << endl;
    fileout.close();
    
    cout << "\n data telah disimpan kedalam file data.txt \n";

    cout << "\n --data anda-- \n";
    ifstream filein("data.txt");
    string baris 
    while 
}