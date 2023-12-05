#include <stdio.h>
#include <string.h>

int main()
{
  char password[101];
  int K;

  scanf("%100s", password);
  scanf("%d", &K);

  for (int i = 0; i < strlen(password); i++)
  {
    if (password[i] + K > 122)
      printf("%c", (password[i] + K - 26));
    else
      printf("%c", (password[i] + K));
  }

  return 0;
}