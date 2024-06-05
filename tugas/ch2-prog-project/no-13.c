#include <stdio.h>

/* program untuk menentukan banyaknya section dan sisa siswa */

/* aturan input */

/*
0 <= siswa <= batas maksimum int
*/

int main() {
    int siswa;
    int section, sisa;

    scanf("%d", &siswa);

    section = siswa / 30; //menentukan banyaknya section
    sisa = siswa % 30; // menentukan banyaknya sisa siswa

    printf("banyak siswa yang mendaftar : %d\n", siswa);
    printf("banyak section dalam batch : %d\n", section);
    printf("banyak siswa yang tersisa : %d", sisa);

    return 0;
}