#include <stdio.h>

/*
karena perintah soal meminta saya untuk menampilkan hasil akhir dari pi dengan ketelitian
7 digit dibelakang koma, maka saya memilih tipe data float
*/

float countPi(float *target, float iterasi)
{
    float perulangan = 0;
    int plus = 1; // untuk kondisi awal, perulangan akan bertanda (plus)
    for (float i = 1; i <= iterasi; i += 2)
    {
        if (plus)
        {
            perulangan += 1 / i;
            plus = 0;
        }
        else
        {
            perulangan -= 1 / i;
            plus = 1;
        }
    }

    // kita ubah nilai pi dengan hasil rumus yang diberikan oleh soal
    *target = 4 * perulangan;
}

int main()
{
    float pi = 0; // untuk kondisi awal pi, saya set pi bernilai 0
    int n;        // n mengatur seberapa banyak iterasi yang kita inginkan

    scanf("%d", &n);

    countPi(&pi, n);

    // saya print nilai pi dengan ketelitian hingga 7 digit di belakang koma
    printf("Nilai pi dengan iterasi sebanyak %d kali adalah %.7f", n, pi);
}