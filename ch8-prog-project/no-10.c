#include <stdio.h>
#include <string.h>

const int MAX_DRUGS = 100;
const int MAX_INSTRUCTIONS = 120;

void replaceSemicolonWithNewline(char *str)
{
  while (*str)
  {
    if (*str == ';')
    {
      *str = '\n';
    }
    str++;
  }
}

int main()
{
  char drugNames[MAX_DRUGS][50];
  char dosingInstructions[MAX_DRUGS][MAX_INSTRUCTIONS];

  FILE *file = fopen("data.txt", "r");

  if (!file)
  {
    printf("Error opening data file!\n");
    return 1;
  }

  int drugCount = 0;
  while (fscanf(file, "%s %[^\n]s", drugNames[drugCount], dosingInstructions[drugCount]) == 2)
  {
    replaceSemicolonWithNewline(dosingInstructions[drugCount]);
    drugCount++;
  }

  fclose(file);

  char userInput[4];
  while (1)
  {
    printf("Enter the first three characters of a desired drug (or 'q' to quit): ");
    scanf("%3s", userInput);

    if (userInput[0] == 'q')
    {
      break;
    }

    int found = 0;
    for (int i = 0; i < drugCount; i++)
    {
      if (strncmp(userInput, drugNames[i], 3) == 0)
      {
        printf("Full drug name: %s\n", drugNames[i]);
        printf("Dosing instructions:\n%s\n", dosingInstructions[i]);
        found = 1;
        break;
      }
    }

    if (!found)
    {
      printf("Drug not found!\n");
    }
  }

  return 0;
}
