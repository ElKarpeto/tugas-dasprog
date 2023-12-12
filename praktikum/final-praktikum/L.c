#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int N, K;
    scanf("%d %d", &N, &K);
    int istirahat = 0, diff = 2, firstPos = 1, shift = 0;
    int shooting = 1;

    while (istirahat <= K)
    {
      if (shooting == 1)
      {
        if ((N - istirahat) % 2 == 1)
          shooting = 0;
        istirahat += ceil((double)N / (double)diff);
        if (istirahat >= K)
        {
          istirahat -= ceil((double)N / (double)diff);
          shooting = 1;
          break;
        }
        if (shift == 0)
          firstPos *= 2;
        else
        {
          firstPos += 2 * shift;
          shift *= 2;
        }
      }
      else
      {
        if ((N - istirahat) % 2 == 1)
          shooting = 1;
        istirahat += floor((double)N / (double)diff);
        if (istirahat >= K)
        {
          istirahat -= floor((double)N / (double)diff);
          shooting = 0;
          break;
        }
        shift = diff / 2;
      }
      diff *= 2;
    }
    printf("%d\n", firstPos + diff * (K - istirahat - 1) + diff * (!shooting) / 2);
  }
}