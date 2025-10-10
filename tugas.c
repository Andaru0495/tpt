#include <stdio.h>

#define MAKS_nilai 100

void hitungRataRata(int nilai1, int nilai2){
    float rataRata = (nilai1 + nilai2) / 2.0;
    printf("Rata-rata: %.2f\n", rataRata);
}

int main(){
    int nilai1 = 85;
    int nilai2 = 90;

    int totalnilai = nilai1 + nilai2;
    const float PI = 3.14159;
    hitungRataRata(nilai1, nilai2);
    
    printf("Total Nilai: %d\n", totalnilai);
    printf("Nilai PI: %.5f\n", PI);
    printf("Maksimal Nilai: %d\n", MAKS_nilai);
    return 0;
}