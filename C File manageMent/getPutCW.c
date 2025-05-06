#include<stdio.h>
#include<conio.h>

void main(){
  FILE *f1;
  char ch;
  int no;
  f1 = fopen("getPutC.text", "w");
  printf("Enter string : ");
  while((ch=getchar())!=EOF){
    putc(ch, f1);
    
  }
  fclose(f1);
  f1 = fopen("getPutC.text", "r");
  printf("\nString : ");
  while((ch=getc(f1))!=EOF){
    printf("%c", ch);
  }
  fclose(f1);

  f1 = fopen("getPutW.text", "w");
  printf("\nEnter integer : ");
  for (int i = 1; i <= 5;i++){
    scanf("%d", &no);
    putw(no, f1);
  }
    fclose(f1);

  f1 = fopen("getPutW.text", "r");
  printf("\nInteger : ");
  while((no=getw(f1))!=EOF){
    printf("%2d", no);
  }

  fclose(f1);
}