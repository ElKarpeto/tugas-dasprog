#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100
#define MAX_M 100

int N, M;
int field[MAX_N][MAX_M];
bool visited[MAX_N][MAX_M];

int sizes[MAX_N * MAX_M];
int sizes_count = 0;

void dfs(int x, int y, int size)
{
  if (x < 0 || x >= N || y < 0 || y >= M || field[x][y] == 1 || visited[x][y])
  {
    return;
  }

  visited[x][y] = true;
  size++;

  // Check neighboring cells
  dfs(x - 1, y, size);
  dfs(x + 1, y, size);
  dfs(x, y - 1, size);
  dfs(x, y + 1, size);
}

int main()
{
  scanf("%d %d", &N, &M);

  // Read the field
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      scanf("%d", &field[i][j]);
      visited[i][j] = false;
    }
  }

  int largest_size = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (field[i][j] == 0 && !visited[i][j])
      {
        sizes[sizes_count] = 0;
        dfs(i, j, 0);
        sizes_count++;
      }
    }
  }

  int total_genangan = sizes_count;

  for (int i = 0; i < sizes_count; i++)
  {
    if (sizes[i] > largest_size)
    {
      largest_size = sizes[i];
    }
  }

  // Sorting sizes in descending order
  for (int i = 0; i < sizes_count - 1; i++)
  {
    for (int j = i + 1; j < sizes_count; j++)
    {
      if (sizes[i] < sizes[j])
      {
        int temp = sizes[i];
        sizes[i] = sizes[j];
        sizes[j] = temp;
      }
    }
  }

  printf("Banyak genangan: %d\n", total_genangan);
  printf("Luas terbesar: %d\n", largest_size);
  printf("List lubang:\n");

  for (int i = 0; i < sizes_count; i++)
  {
    int current_size = sizes[i];
    int current_count = 0;

    for (int j = 0; j < sizes_count; j++)
    {
      if (sizes[j] == current_size)
      {
        current_count++;
      }
    }

    if (current_count > 0)
    {
      printf("#%d = %d\n", current_size, current_count);
      sizes_count = sizes_count - current_count;
    }
  }

  return 0;
}
