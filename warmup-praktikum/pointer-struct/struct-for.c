#include <stdio.h>
#include <string.h> // Required for strcmp

struct nilai
{
    char nama[64];
    int nilai1;
    int nilai2;
    int nilai3;
    int nilai4;
};

int main()
{
    int n;

    scanf("%d", &n);
    getchar(); // To consume the newline left by scanf

    struct nilai data[n];

    for (int i = 0; i < n; i++)
    {
        fgets(data[i].nama, sizeof(data[i].nama), stdin);
        data[i].nama[strcspn(data[i].nama, "\n")] = 0; // Remove newline from fgets input
        scanf("%d", &data[i].nilai1);
        scanf("%d", &data[i].nilai2);
        scanf("%d", &data[i].nilai3);
        scanf("%d", &data[i].nilai4);
        getchar(); // To consume the newline left by scanf
    }

    int m;
    scanf("%d", &m);
    getchar(); // To consume the newline left by scanf

    while (m--)
    {
        char name[64];

        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // Remove newline from fgets input

        for (int i = 0; i < n; i++)
        {
            if (strcmp(name, data[i].nama) == 0)
            {
                printf("nilai %s\n", name);
                printf("matematika : %d\n", data[i].nilai1);
                printf("IPA : %d\n", data[i].nilai2);
                printf("Bahasa Indonesia : %d\n", data[i].nilai3);
                printf("Bahasa Inggris : %d\n", data[i].nilai4);
            }
            else
            {
                printf("Nilai %s tidak ditemukan\n", data[i].nama);
            }
        }
    }

    return 0;
}
