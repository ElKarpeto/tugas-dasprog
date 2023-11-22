#include <stdio.h>
#include <string.h>

struct Pegawai
{
  char nama[21];
  char id[6];
  char jabatan[21];
  double performa;
  double nilai;
};

int main()
{
  int N, M;
  scanf("%d", &N);
  struct Pegawai staff[60];
  for (int i = 0; i < N; i++)
    scanf("%s %s %s %lf %lf", staff[i].nama, staff[i].id, staff[i].jabatan, &staff[i].performa, &staff[i].nilai);

  scanf("%d", &M);
  while (M--)
  {
    char query1[10];
    scanf("%s", query1);
    if (strcmp(query1, "CREATE") == 0)
    {
      char id_temp[6];
      char nama_temp[21];
      char jabatan_temp[21];
      double performa_temp;
      double nilai_temp;

      scanf("%s %s %s %lf %lf", nama_temp, id_temp, jabatan_temp, &performa_temp, &nilai_temp);
      int match = 0;
      for (int i = 0; i < N; i++)
      {
        if (strcmp(id_temp, staff[i].id) == 0)
        {
          match = 1;
          break;
        }
      }
      if (match == 0)
      {
        strcpy(staff[N].id, id_temp);
        strcpy(staff[N].nama, nama_temp);
        strcpy(staff[N].jabatan, jabatan_temp);
        staff[N].performa = performa_temp;
        staff[N].nilai = nilai_temp;
        N++;
        printf("DATA CREATED.\n");
      }
      else
        printf("ERROR CANNOT CREATE.\n");
    }
    else if (strcmp(query1, "READ") == 0)
    {
      char query2[10];
      scanf("%s", query2);
      if (strcmp(query2, "ALL") == 0)
      {
        if (N == 0)
          printf("DATA NOT FOUND.\n");
        else
          for (int i = 0; i < N; i++)
            printf("%s %s %s %.0lf %.2lf\n", staff[i].nama, staff[i].id, staff[i].jabatan, staff[i].performa, staff[i].nilai);
      }
      else
      {
        int match = 0;
        for (int i = 0; i < N; i++)
        {
          if (strcmp(query2, staff[i].id) == 0)
          {
            printf("%s %s %s %.0lf %.2lf\n", staff[i].nama, staff[i].id, staff[i].jabatan, staff[i].performa, staff[i].nilai);
            match = 1;
            break;
          }
        }
        if (match == 0)
          printf("DATA NOT FOUND.\n");
      }
    }
    else if (strcmp(query1, "UPDATE") == 0)
    {
      char id_temp[6];
      char nama_temp[21];
      char jabatan_temp[21];
      double performa_temp;
      double nilai_temp;

      scanf("%s TO %s %s %lf %lf", id_temp, nama_temp, jabatan_temp, &performa_temp, &nilai_temp);
      int match = 0;
      for (int i = 0; i < N; i++)
      {
        if (strcmp(id_temp, staff[i].id) == 0)
        {
          strcpy(staff[i].nama, nama_temp);
          strcpy(staff[i].jabatan, jabatan_temp);
          staff[i].performa = performa_temp;
          staff[i].nilai = nilai_temp;
          match = 1;
          break;
        }
      }
      if (match == 1)
        printf("DATA UPDATED.\n");
      else
        printf("ERROR CANNOT UPDATE.\n");
    }
    else if (strcmp(query1, "DELETE") == 0)
    {
      char query2[10];
      scanf("%s", query2);
      if (strcmp(query2, "ALL") == 0)
      {
        if (N == 0)
          printf("ERROR CANNOT DELETE.\n");
        else
        {
          for (int i = 0; i < N; i++)
          {
            strcpy(staff[i].nama, "");
            strcpy(staff[i].jabatan, "");
            staff[i].performa = 0;
            staff[i].nilai = 0;
          }
          printf("DATA DELETED.\n");
          N = 0;
        }
      }
      else
      {
        int match = 0;
        for (int i = 0; i < N; i++)
        {
          if (strcmp(query2, staff[i].id) == 0)
          {
            strcpy(staff[i].nama, "");
            strcpy(staff[i].jabatan, "");
            strcpy(staff[i].id, "");
            staff[i].performa = 0;
            staff[i].nilai = 0;
            for (int j = i; j < N - 1; j++)
            {
              strcpy(staff[j].nama, staff[j + 1].nama);
              strcpy(staff[j].jabatan, staff[j + 1].jabatan);
              strcpy(staff[j].id, staff[j + 1].id);
              staff[j].performa = staff[j + 1].performa;
              staff[j].nilai = staff[j + 1].nilai;
            }
            N--;
            match = 1;
            break;
          }
        }
        if (match == 1)
          printf("DATA DELETED.\n");
        else
          printf("ERROR CANNOT DELETE.\n");
      }
    }
    else
    {
      printf("INVALID COMMAND.\n");
    }
  }
}