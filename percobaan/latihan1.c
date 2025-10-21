#include <stdio.h>

int main(){
    char nama[50];
    int umur;
    float tinggi;

    printf("Masukkan nama: ");
    gets(nama, sizeof(nama));
    
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan tinggi badan anda(dalam cm): ");
    scanf("%f", &tinggi);

    printf("\n --data anda-- \n");
    printf("Nama: %s\n", nama);
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi : %.2f cm\n", tinggi);
}