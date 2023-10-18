#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arr[T], bukuPrima = 0;
    int buku = 0;
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
        buku += arr[i];
        int A;
        for (int j = 0; j < arr[i]; j++)
        {
            scanf("%d", &A);
            int tanda = 0;
            if (A > 1)
            {
                for (int k = 2; k * k <= A; k++)
                {
                    if (A % k == 0)
                    {
                        tanda = 1;
                        break;
                    }
                }
                if (tanda == 0)
                {
                    bukuPrima++;
                }
            }
        }
    }

    if (bukuPrima == 0)
    {
        printf("Cici sedih, bot Mr. Biti gak ngirim apa apa");
    }
    else if (bukuPrima == buku)
    {
        printf("Cici senang, bot Mr. Biti berhasil ngirim semua buku");
    }
    else
    {
        printf("Cici kecewa, bot Mr. Biti cuman kirim %d dari %d buku", bukuPrima, buku);
    }

    return 0;
}
