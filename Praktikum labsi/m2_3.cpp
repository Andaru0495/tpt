#include <iostream>
using namespace std;
int main(){
    float total_belanja;
    double harga_setelah_diskon;
    cout << "Masukkan total belanja: ";
    cin >> total_belanja;
    if (total_belanja > 100000)
    { harga_setelah_diskon = total_belanja *(1-(20.0/100)); }
    else if (total_belanja >= 50000 && total_belanja <= 100000)
    { harga_setelah_diskon = total_belanja *(1-(10.0/100)); }
    else
    { harga_setelah_diskon = total_belanja; }
    cout << "Harga setelah diskon: " << harga_setelah_diskon << endl;
}