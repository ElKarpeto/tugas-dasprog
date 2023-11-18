#include <stdio.h>
#include <string.h>

typedef struct character
{
  char nama[20];
  int atk;
  int def;
  int hp;
} kar;

int main()
{
  kar karakter[2];
  for (int i = 0; i < 2; i++)
  {
    scanf("%s", &karakter[i].nama);
    scanf("%d", &karakter[i].atk);
    scanf("%d", &karakter[i].def);
    scanf("%d", &karakter[i].hp);
  }
}