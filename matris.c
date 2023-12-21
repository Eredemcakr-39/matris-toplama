/*
  Grup 15 // Şube-2
  Erdem Çakır 23181616008
  Alper Yıldırım 23181616031
  Hazalnur Dağlı 23181616058
  */





#include <stdio.h>
int matrisAl(int satir, int sutun, int matris[][sutun]) {
    printf("Matris elemanlarini giriniz:\n");

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}

int matrisTopla(int satir, int sutun, int matris1[][sutun], int matris2[][sutun], int sonuc[][sutun]) {
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            sonuc[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}

int matrisYazdir(int satir, int sutun, int matris[][sutun]) {


    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int satir, sutun,satir_2,sutun_2;

    printf(" 1. Matrisin satir sayisini giriniz: ");
    scanf("%d",&satir);

    printf("1. Matrisin sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int matris1[satir][sutun];
    matrisAl(satir, sutun, matris1);
    printf("1. Matris:\n");
    matrisYazdir(satir,sutun,matris1);

    printf("2. Matrisin satir sayisini giriniz: ");
    scanf("%d",&satir_2);

    printf("2. Matrisin sutun sayisini giriniz: ");
    scanf("%d",&sutun_2);
    if(satir!=satir_2 || sutun!=sutun_2)
    {
        printf("2 matrisin satir veya sutun sayilarini esit girmediniz");
        return 0;
    }

    int matris2[satir_2][sutun_2];
    matrisAl(satir_2, sutun_2, matris2);
    printf("2. Matris:\n");
    matrisYazdir(satir_2,sutun_2,matris2);

    int sonuc[satir][sutun];

    matrisTopla(satir, sutun, matris1, matris2, sonuc);

    printf("\nToplam Matris:\n");
    matrisYazdir(satir, sutun, sonuc);
    return 0;
}