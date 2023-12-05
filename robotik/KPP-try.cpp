#include <iostream>
using namespace std;

const int MAX_N = 100;

class Objek
{
public:
  int x;
  int y;
};

class Solution
{
public:
  void findPosition(Objek &koordinat, int n, int m, char arr[MAX_N][MAX_N], char target)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (arr[i][j] == target)
        {
          koordinat.x = i;
          koordinat.y = j;
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
};

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

  Objek robot, finish;

  Solution result;

  result.findPosition(robot, N, M, arena, '*');
  result.findPosition(finish, N, M, arena, '$');

  int x;
  cin >> x;

  char commands[x];
  cin >> commands;

  for (int i = 0; i < x; i++)
  {
    result.moveRobot(robot.x, robot.y, N, M, arena, commands[i], i);
  }

  result.printMovement(N, M, arena);

  if (robot.x == finish.x && robot.y == finish.y)
  {
    cout << "Robot Mencapai Finish" << endl;
  }
  else
  {
    cout << "Robot Tidak Mencapai Finish" << endl;
  }

  return 0;
}