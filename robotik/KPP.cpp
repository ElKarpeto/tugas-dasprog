#include <iostream>
using namespace std;

const int MAX_N = 100;

struct Position
{
  int x, y;
};

void findPosition(Position &pos, int n, int m, char arr[MAX_N][MAX_N], char target)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == target)
      {
        pos.x = i;
        pos.y = j;
        return;
      }
    }
  }
}

void printMovement(int n, int m, char arr[MAX_N][MAX_N])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
}

bool isValidMove(int x, int y, int n, int m, char arr[MAX_N][MAX_N], char command, int iterate)
{
  if (x < 0 || x >= n || y < 0 || y >= m)
  {
    cout << iterate << " Robot Menabrak Tembok" << endl;
    return false;
  }
  if (arr[x][y] == 'o')
  {
    cout << iterate << " Robot Menabrak Obstacle" << endl;
    return false;
  }

  return true;
}

void moveRobot(int &x, int &y, int n, int m, char arr[MAX_N][MAX_N], char command, int iterate)
{
  arr[x][y] = '#';

  switch (command)
  {
  case 'a':
    if (isValidMove(x, y - 1, n, m, arr, command, iterate))
    {
      y--;
      arr[x][y] = '*';
    }
    break;
  case 's':
    if (isValidMove(x + 1, y, n, m, arr, command, iterate))
    {
      x++;
      arr[x][y] = '*';
    }
    break;
  case 'd':
    if (isValidMove(x, y + 1, n, m, arr, command, iterate))
    {
      y++;
      arr[x][y] = '*';
    }
    break;
  case 'w':
    if (isValidMove(x - 1, y, n, m, arr, command, iterate))
    {
      x--;
      arr[x][y] = '*';
    }
    break;
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  char arena[MAX_N][MAX_N];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> arena[i][j];
    }
  }

  Position robotPos, finishPos;
  findPosition(robotPos, N, M, arena, '*');
  findPosition(finishPos, N, M, arena, '$');

  int x;
  cin >> x;

  char commands[x];
  cin >> commands;

  for (int i = 0; i < x; i++)
  {
    moveRobot(robotPos.x, robotPos.y, N, M, arena, commands[i], i);
  }

  printMovement(N, M, arena);

  if (robotPos.x == finishPos.x && robotPos.y == finishPos.y)
  {
    cout << "Robot Mencapai Finish" << endl;
  }
  else
  {
    cout << "Robot Tidak Mencapai Finish" << endl;
  }

  return 0;
}
