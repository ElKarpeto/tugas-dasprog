#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Orang
{
  long long H;
  float A;
  char gender[2];
  char nama[105];
};

bool cekPalindrome(struct Orang arr[], int tidakPalindrome[], int n)
{
  bool flag = true;
  for (int i = 0; i < n / 2; i++)
  {
    int palindrome = 0;

    if (arr[i].H == arr[n - i - 1].H)
      palindrome++;
    if (arr[i].A == arr[n - i - 1].A)
      palindrome++;
    if (strcmp(arr[i].gender, arr[n - i - 1].gender) == 0)
      palindrome++;
    if (strcmp(arr[i].nama, arr[n - i - 1].nama) == 0)
      palindrome++;

    if (palindrome < 2)
    {
      tidakPalindrome[i]++;
      tidakPalindrome[n - i - 1]++;
      flag = false;
    }
  }
  return flag;
}

int main()
{
  int x;

  scanf("%d", &x);

  struct Orang pahlawan[x];

  for (int i = 0; i < x; i++)
  {
    scanf("%lld %f %s %[^\n]s", &pahlawan[i].H, &pahlawan[i].A, pahlawan[i].gender, pahlawan[i].nama);
  }

  int tidakPalindrome[1001] = {0};

  if (x == 1 || cekPalindrome(pahlawan, tidakPalindrome, x) >= 1)
  {
    printf("Siap perang, Dewi Shita!");
  }
  else
  {
    cekPalindrome(pahlawan, tidakPalindrome, x);
    printf("Sebentar Dewi Shita, belum palindrom nih.\n");
    for (int i = 0; i < x; i++)
    {
      if (tidakPalindrome[i] != 0)
      {
        printf("%d ", i + 1);
      }
    }
  }

  return 0;
}
