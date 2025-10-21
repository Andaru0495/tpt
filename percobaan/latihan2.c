#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char nama[50];
    char sapaan[100];

    printf("Masukkan nama: ");
    gets(nama);

    strcpy(sapaan, "halo ");
    strcat(sapaan, nama);
    strcat(sapaan, " selamat datang di program c. \n");

    printf("%s", sapaan);
    printf("tekan tombol untuk keluar ...");
    getch();

    system("cls");
    return 0;
}