#include <stdio.h>
#include <string.h>

struct Hero
{
  char nama[20];
  int atk;
  int def;
  int hp;
  int basic_atk;
  int heal;
  int super_atk;
  int max_hp;
  int max_def;
};

struct Monster
{
  char nama[20];
  int atk;
  int def;
  int hp;
  int basic_atk;
  int atk_counter;
  int max_hp;
  int max_def;
};

int main()
{
  int option;
  struct Hero H;
  struct Monster M;
  scanf("%s %d %d %d", H.nama, &H.atk, &H.def, &H.hp);
  H.max_hp = H.hp;
  H.max_def = H.def;
  scanf("%s %d %d %d", M.nama, &M.atk, &M.def, &M.hp);
  M.max_hp = M.hp;
  M.max_def = M.def;
  M.atk_counter = 0;

  while (scanf("%d", &option) == 1)
  {
    if (option == 1)
    {
      H.basic_atk = H.atk - M.def;
      M.hp -= H.basic_atk;
    }
    else if (option == 2)
    {
      H.heal = 2 * H.max_hp / 10;
      H.hp += H.heal;
      if (H.hp > H.max_hp)
        H.hp = H.max_hp;
    }
    else if (option == 3)
    {
      H.super_atk = M.max_hp / 4;
      M.hp -= H.super_atk;
    }
    else if (option == -1)
      break;

    if (M.hp <= 0)
    {
      M.hp = 0;
      break;
    }

    M.atk_counter++;

    if (M.atk_counter % 4 == 0)
    {
      int hp_curse, def_curse;
      hp_curse = H.max_hp / 4;
      def_curse = M.atk / 20;

      H.hp -= hp_curse;
      if (H.def > 0)
        H.def -= def_curse;
      else if (H.def < 0)
        H.def = 0;
      M.hp += hp_curse;
      if (M.hp > M.max_hp)
        M.hp = M.max_hp;

      M.atk_counter = 0;
    }
    else
    {
      M.basic_atk = M.atk - H.def;
      H.hp -= M.basic_atk;
    }
    if (H.hp <= 0)
    {
      H.hp = 0;
      break;
    }
  }
  printf("==Game selesai==\n");
  if (M.hp == 0)
    printf("%s memenangkan pertarungan dengan sisa hp: %d\n", H.nama, H.hp);
  else if (H.hp == 0)
    printf("%s memenangkan pertarungan dengan sisa hp: %d\n", M.nama, M.hp);
  else
  {
    printf("Sisa hp %s: %d\n", H.nama, H.hp);
    printf("Sisa hp %s: %d\n", M.nama, M.hp);
  }
}