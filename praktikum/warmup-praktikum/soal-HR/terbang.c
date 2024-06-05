#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, d, e, f, g;

    char A, B;
    char C[10], D[10], E[10];

    scanf("%d%c%d%c%d", &a, &A, &b, &B, &c);
    scanf("%d %s %d %s %d %s", &d, C, &e, D, &f, E);
    scanf("%d", &g);

    int jam = 0, menit = 0, detik = 0;

    jam = a + d + g;
    menit = b + e;
    detik = c + f;

    menit += detik / 60;
    detik %= 60;

    jam += menit / 60;
    menit %= 60;

    printf("Mehas akan sampai pada pukul %d:%d:%d waktu setempat", jam, menit, detik);
    return 0;
}
