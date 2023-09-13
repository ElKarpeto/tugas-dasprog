#include <stdio.h>

/* program untuk menghitung waktu memotong rumput halaman rumah */

/* aturan input */
/* 
0 <= panjangLapangan, lebarLapangan, panjangRumah, lebarRumah <= kapasitas maksimal double type
panjangLapangan >= panjangRumah
lebarLapangan >= lebarRumah
*/

int main() {
    double panjangLapangan, lebarLapangan, panjangRumah, lebarRumah;
    double luasLapangan, luasRumah, selisihLuas;
    double kecPemotong = 2; // kecepatan pemotong rumput

    scanf("%lf%lf%lf%lf", &panjangLapangan, &lebarLapangan, &panjangRumah, &lebarRumah);

    luasLapangan = panjangLapangan * lebarLapangan;
    luasRumah = panjangRumah * lebarRumah;

    selisihLuas = luasLapangan - luasRumah;

    double waktu = selisihLuas / kecPemotong;

    printf("waktu yang dibutuhkan untuk memotong rumput adalah %lf detik", waktu);
    
    return 0;
}