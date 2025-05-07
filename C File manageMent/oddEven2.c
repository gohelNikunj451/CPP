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
    fprintf(data, "%d ", no);
  }
  fclose(data);

  data = fopen("data.txt", "r");
  odd = fopen("odd.txt", "w");
  even = fopen("even.txt", "w");

  printf("\nData : ");
 
  for (int i = 1; i <= n; i++)
  {
    fscanf(data, "%d ", &no);
    printf(" %d", no);
    if (no % 2 == 0)
    {
      fprintf(even, "%d ", no);
    }
    else
    {
      fprintf(odd, "%d ", no);
    }
  }

  fclose(data);
  fclose(odd);
  fclose(even);

  odd = fopen("odd.txt", "r");
  even = fopen("even.txt", "r");

  printf("\nOdd : ");

  while ((fscanf(odd, "%d", &no)) != EOF)
  {
    printf(" %d", no);
  }
  printf("\nEven : ");


  while ((fscanf(even, "%d", &no)) != EOF)
  {
    printf(" %d", no);
  }
  fclose(odd);
  fclose(even);
}
