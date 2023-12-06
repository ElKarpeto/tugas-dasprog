#include <stdio.h>

int main()
{
  int N, H;

  // Input jumlah robot rusak (N) dan jumlah hari maksimum (H)
  scanf("%d %d", &N, &H);

  int arr[N];
  int maxAwal = 0;

  // Input berat robot rusak dan mencari nilai maksimum awal
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > maxAwal)
    {
      maxAwal = arr[i];
    }
  }

  int left = maxAwal, right = maxAwal * N; // Batasan pencarian biner
  int result = 0;

  // Pencarian biner untuk mencari nilai minimum energi
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    int days = 0;

    // Menghitung jumlah hari yang dibutuhkan dengan kapasitas mid
    for (int i = 0; i < N; i++)
    {
      days += (arr[i] + mid - 1) / mid; // Menggunakan pembulatan ke atas
    }

    // Memperbarui hasil dan membatasi pencarian biner
    if (days <= H)
    {
      result = mid;
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }

  printf("%d\n", result); // Output hasil minimum energi yang dibutuhkan
  return 0;
}
