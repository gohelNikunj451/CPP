#include <stdio.h>
// int main()
// {
//   FILE *f1;
//   f1 = fopen("data.txt", "w+");
//   char name[50], sname[50];
//   int value, svalue;
//   printf("Enter String : ");
//   gets(name);
//   printf("\nEnter value : ");
//   scanf("%d", &value);

//   fprintf(f1, "%s %d", name, value);

//   rewind(f1);

//   fscanf(f1, "%s %d", &sname, &svalue);

//   printf("\nSname : %s", sname);
//   printf("\nSname : %d", svalue);
//   fclose(f1);
// }

int main()
{
  FILE *sen, *vwl, *cns;
  char ch;
  int no;
  sen = fopen("data.txt", "w+");
  char str[50];
  printf("\nenter str : ");
  gets(str);
  fprintf(sen, "%s ", str);
  no = ftell(sen);
  printf("\nFtell  : %d", no);

  rewind(sen);
  // fseek(sen, 0, 0);

  no = ftell(sen);
  printf("\nFtell  : %d", no);

  printf("\nString : ");

  vwl = fopen("vwl.txt", "w+");
  cns = fopen("cns.txt", "w+");
  while ((ch = getc(sen)) != EOF)
  {
    printf("%c ", ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'i' || ch == 'I')
    {
      fprintf(vwl, "%c ", ch);
    }
    else
    {
      fprintf(cns, "%c ", ch);
    }
  }
  rewind(vwl);
  rewind(cns);
  printf("\nVowel : ");
  while ((ch = getc(vwl)) != EOF)
  {
    printf(" %c", ch);
  }
  printf("\nconsonent : ");
  while ((ch = getc(cns)) != EOF)
  {
    printf(" %c", ch);
  }
  fclose(vwl);
  fclose(cns);
  fclose(sen);
}