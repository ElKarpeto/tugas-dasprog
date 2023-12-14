#include <stdio.h>
#include <string.h>

#define DATABASE_FILE "final-project.txt"
#define CATEGORY_MAX_LENGTH 100

struct Barang
{
  char kategori[CATEGORY_MAX_LENGTH];
  char nama[100];
  int jumlah;
};

void displayMenu()
{
  printf("\n================= Menu Pilihan =================\n");
  printf("(1) Masukan Data\n");
  printf("(2) Tampilkan Data Berdasarkan Kategori\n");
  printf("(3) Memperbarui Data\n");
  printf("(4) Menghapus Semua Data pada Suatu Kategori\n");
  printf("(5) Menghapus 1 Data pada Kategori Tertentu\n");
  printf("(6) Keluar Dari Program\n");
  printf("================================================\n");
}

void displayNameCount()
{
  printf("\n= Data Yang Ingin Anda Update =\n");
  printf("(1) Ubah Nama dan Jumlah\n");
  printf("(2) Ubah Nama\n");
  printf("(3) Ubah Jumlah\n");
  printf("===============================\n");
}

void displayCategory()
{
  FILE *dokumen = fopen(DATABASE_FILE, "r");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  struct Barang temp;
  char currentCategory[CATEGORY_MAX_LENGTH] = "";

  printf("\n====== Kategori ======\n");
  while (fscanf(dokumen, "%s %s %d", temp.kategori, temp.nama, &temp.jumlah) != EOF)
  {
    if (strcmp(currentCategory, temp.kategori) != 0)
    {
      strcpy(currentCategory, temp.kategori);
      printf("-> %s\n", currentCategory);
    }
  }

  printf("======================\n");

  fclose(dokumen);
}

void addData(char kategori[])
{
  FILE *dokumen = fopen(DATABASE_FILE, "a");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  struct Barang temp;
  printf("Masukan Nama Barang : ");
  scanf("%s", temp.nama);
  printf("Masukan Jumlah Barang : ");
  scanf("%d", &temp.jumlah);

  fprintf(dokumen, "%s %s %d\n", kategori, temp.nama, temp.jumlah);

  fclose(dokumen);

  printf("Penambahan Data Pada Kategori %s Telah Berhasil\n", kategori);
}

void displayDataByCategory(char kategori[])
{
  FILE *dokumen = fopen(DATABASE_FILE, "r");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  struct Barang temp;
  printf("\n========= %s =========\n", kategori);
  while (fscanf(dokumen, "%s %s %d", temp.kategori, temp.nama, &temp.jumlah) != EOF)
  {
    if (strcmp(kategori, temp.kategori) == 0)
    {
      printf("%-20s %-20d\n", temp.nama, temp.jumlah);
    }
  }
  printf("================================\n");

  fclose(dokumen);
}

void updateData(char kategori[], char nama[], int ubahData)
{
  FILE *dokumen = fopen(DATABASE_FILE, "r");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  FILE *tempFile = fopen("temp.txt", "w");

  if (tempFile == NULL)
  {
    perror("ERROR MEMBUAT FILE TEMP");
    fclose(dokumen);
    return;
  }

  struct Barang temp;
  int updated = 0;

  char namaUbah[100];
  int jumlahUbah;

  while (fscanf(dokumen, "%s %s %d", temp.kategori, temp.nama, &temp.jumlah) != EOF)
  {
    if (strcmp(temp.kategori, kategori) == 0 && strcmp(temp.nama, nama) == 0)
    {
      switch (ubahData)
      {
      case 1:
        printf("Masukan Nama Baru : ");
        scanf("%s", namaUbah);
        printf("Masukan Jumlah Baru : ");
        scanf("%d", &jumlahUbah);
        fprintf(tempFile, "%s %s %d\n", kategori, namaUbah, jumlahUbah);
        break;
      case 2:
        printf("Masukan Nama Baru : ");
        scanf("%s", namaUbah);
        fprintf(tempFile, "%s %s %d\n", kategori, namaUbah, temp.jumlah);
        break;
      case 3:
        printf("Masukan Jumlah Baru : ");
        scanf("%d", &jumlahUbah);
        fprintf(tempFile, "%s %s %d\n", kategori, temp.nama, jumlahUbah);
        break;
      default:
        break;
      }

      updated = 1;
    }
    else
    {
      fprintf(tempFile, "%s %s %d\n", temp.kategori, temp.nama, temp.jumlah);
    }
  }

  fclose(dokumen);
  fclose(tempFile);

  if (!updated)
  {
    printf("Data Tidak Ditemukan dengan Kategori '%s' dan Nama '%s'.\n", kategori, nama);
    remove("temp.txt");
  }
  else
  {
    remove(DATABASE_FILE);
    rename("temp.txt", DATABASE_FILE);
    printf("Memperbarui Data Telah Berhasil\n");
  }
}

void deleteDataCategory(char kategori[])
{
  FILE *dokumen = fopen(DATABASE_FILE, "r");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  FILE *tempFile = fopen("temp.txt", "w");

  if (tempFile == NULL)
  {
    perror("ERROR MEMBUAT FILE TEMP");
    fclose(dokumen);
    return;
  }

  struct Barang temp;
  int deleted = 0;

  while (fscanf(dokumen, "%s %s %d", temp.kategori, temp.nama, &temp.jumlah) != EOF)
  {
    if (strcmp(temp.kategori, kategori) == 0)
    {
      deleted = 1;
    }
    else
    {
      fprintf(tempFile, "%s %s %d\n", temp.kategori, temp.nama, temp.jumlah);
    }
  }

  fclose(dokumen);
  fclose(tempFile);

  if (!deleted)
  {
    printf("Kategori '%s' Tidak Ditemukan\n", kategori);
    remove("temp.txt");
  }
  else
  {
    remove(DATABASE_FILE);
    rename("temp.txt", DATABASE_FILE);
    printf("Data Pada Kategori '%s' Telah Dihapus\n", kategori);
  }
}

void deleteData(char kategori[], char nama[])
{
  FILE *dokumen = fopen(DATABASE_FILE, "r");

  if (dokumen == NULL)
  {
    perror("ERROR DALAM MEMBUKA FILE");
    return;
  }

  FILE *tempFile = fopen("temp.txt", "w");

  if (tempFile == NULL)
  {
    perror("ERROR MEMBUAT FILE TEMP");
    fclose(dokumen);
    return;
  }

  struct Barang temp;
  int deleted = 0;

  while (fscanf(dokumen, "%s %s %d", temp.kategori, temp.nama, &temp.jumlah) != EOF)
  {
    if ((strcmp(temp.kategori, kategori) == 0) && (strcmp(temp.nama, nama) == 0))
    {
      deleted = 1;
    }
    else
    {
      fprintf(tempFile, "%s %s %d\n", temp.kategori, temp.nama, temp.jumlah);
    }
  }

  fclose(dokumen);
  fclose(tempFile);

  if (!deleted)
  {
    printf("Data dengan Kategori '%s' dan Nama '%s' Tidak Ditemukan\n", kategori, nama);
    remove("temp.txt");
  }
  else
  {
    remove(DATABASE_FILE);
    rename("temp.txt", DATABASE_FILE);
    printf("Data dengan Kategori '%s' dan Nama '%s' Telah Dihapus\n", kategori, nama);
  }
}

int main()
{
  int pilihan = 0;
  int dataUbah;
  char namaData[100], pilihanKategori[100];

  while (pilihan != 6)
  {
    displayMenu();
    printf("Masukan Pilihan Menu : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
      printf("Masukan Kategori yang Anda Ingin Tambahkan Datanya : ");
      scanf("%s", pilihanKategori);
      addData(pilihanKategori);
      break;
    case 2:
      displayCategory();
      printf("Masukan Kategori yang Anda Ingin Tampilkan Datanya : ");
      scanf("%s", pilihanKategori);
      displayDataByCategory(pilihanKategori);
      break;
    case 3:
      displayCategory();
      printf("Masukan Kategori yang Anda Ingin Ubah Datanya : ");
      scanf("%s", pilihanKategori);
      printf("Masukan Nama dari Data yang Ingin Anda Update : ");
      scanf("%s", namaData);
      displayNameCount();
      printf("Masukan Data yang ingin Anda Update : ");
      scanf("%d", &dataUbah);
      updateData(pilihanKategori, namaData, dataUbah);
      break;
    case 4:
      displayCategory();
      printf("Masukan Kategori yang Ingin Anda Hapus Semua Datanya : ");
      scanf("%s", pilihanKategori);
      deleteDataCategory(pilihanKategori);
      break;
    case 5:
      displayCategory();
      printf("Masukan Kategori : ");
      scanf("%s", pilihanKategori);
      displayDataByCategory(pilihanKategori);
      printf("Masukan Nama Data yang Ingin Anda Hapus : ");
      scanf("%s", namaData);
      deleteData(pilihanKategori, namaData);
      break;
    case 6:
      printf("Keluar dari Program\n");
      break;
    default:
      printf("Pilihan Tidak Valid. Silakan Coba Lagi\n");
      break;
    }
  }

  return 0;
}
