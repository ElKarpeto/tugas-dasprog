#include <stdio.h>
#include <math.h>

/*
disini saya menganggap soal meminta saya untuk menampilkan sisa Cobalt tiap tahun selama 7 tahun
dengan massa awal Cobalt ditentukan oleh user
*/

int main()
{
    double jumlah;

    scanf("%lf", &jumlah);

    printf("Jumlah awal Cobalt : %.10lf\n", jumlah);
    for (double i = 1; i <= 7; i++)
    {
        // saya assign jumlah dengan jumlah dikali dengan C^(y/H), dimana ini adalah exponential decay
        jumlah = jumlah * pow(2.71828, (-0.693 * (i / 5272)));
        // saya menampilkan sisa Cobalt tiap tahunnya dengan ketelitian 10 digit dibelakang koma
        printf("Pada tahun ke-%.0lf, sisa isotop Cobalt : %.10lf\n", i, jumlah);
    }

    return 0;
}