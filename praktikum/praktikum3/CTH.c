#include <stdio.h>

int n, m, arr[100][100];
int hitungLobang(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m || arr[x][y] != 0)
    {
        return 0;
    }

    arr[x][y] = -1;
    int total = 1;
    total += hitungLobang(x + 1, y);
    total += hitungLobang(x - 1, y);
    total += hitungLobang(x, y + 1);
    total += hitungLobang(x, y - 1);
    total += hitungLobang(x + 1, y + 1);
    total += hitungLobang(x + 1, y - 1);
    total += hitungLobang(x - 1, y + 1);
    total += hitungLobang(x - 1, y - 1);

    return total;
}

int main()
{
    scanf("%d %d", &n, &m);
    int jawaban[10001] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = -1;
    int banyakgenangan = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int result = hitungLobang(i, j);
            if (max < result)
                max = result;
            if (result != 0)
                banyakgenangan++;

            jawaban[result]++;
        }
    }

    printf("Banyak genangan: %i\n", banyakgenangan);
    printf("Luas terbesar: %i\n", max);
    printf("List lubang:\n");
    for (int i = 10000; i >= 1; i--)
    {
        if (jawaban[i] != 0)
        {
            printf("#%i = %i\n", i, jawaban[i]);
        }
    }

    return 0;
}
