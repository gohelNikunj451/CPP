#include <stdio.h>
int main()
{
  FILE *f1;
  f1 = fopen("data.txt", "w+");
  int n;
  printf("Enter N : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      fprintf(f1, "* ");
    }
    fprintf(f1, "\n");
  }
  rewind(f1);
  char ch;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      fscanf(f1, "%c", &ch);
      printf("%c ", ch);
    }
    fscanf(f1, "%c", &ch);
    printf("%c ", ch);
  }
  fclose(f1);
}