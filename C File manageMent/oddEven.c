#include <stdio.h>
int main()
{
  FILE *data, *odd, *even;
  int n;
  data = fopen("data.txt", "w");
  printf("Enter Data no : ");
  scanf("%d", &n);
  int no;
  for (int i = 1; i <= n; i++)
  {
    printf("\nEnter %d : ", i);
    scanf("%d", &no);
    putw(no, data);
  }
  fclose(data);

  data = fopen("data.txt", "r");
  odd = fopen("odd.txt", "w");
  even = fopen("even.txt", "w");

  printf("\nData : ");
  while ((no = getw(data)) != EOF)
  {
    printf("%d ", no);
    if (no % 2 == 0)
    {
      putw(no, even);
    }
    else
    {
      putw(no, odd);
    }
  }

  fclose(data);
  fclose(odd);
  fclose(even);

  odd = fopen("odd.txt", "r");
  even = fopen("even.txt", "r");

  printf("\nOdd : ");
  while ((no = getw(odd)) != EOF)
  {
    printf("%d ", no);
  }

  printf("\nEven : ");
  while ((no = getw(even)) != EOF)
  {
    printf("%d ", no);
  }

  fclose(odd);
  fclose(even);
}
