#include <iostream>
using namespace std;

int main(){
    int pertama;
    int kedua;
    int penjumlahan;
    int pengurangan;
    int perkalian;
    int pembagian;

    cout << "Masukkan angka pertama: ";
    cin >> pertama;
    cout << "Masukkan angka kedua: ";
    cin >> kedua;
    penjumlahan = pertama + kedua;
    cout << "Hasil penjumlahan dari " << pertama << " + " << kedua << " adalah: " << penjumlahan << endl;
    pengurangan = pertama - kedua;
    cout << "Hasil pengurangan dari " << pertama << " - " << kedua << " adalah: " << pengurangan << endl;
    perkalian = pertama * kedua;
    cout << "Hasil perkalian dari " << pertama << " * " << kedua << " adalah: " << perkalian << endl;
    pembagian = pertama / kedua;
    cout << "Hasil pembagian dari " << pertama << " / " << kedua << " adalah: " << pembagian << endl;
}