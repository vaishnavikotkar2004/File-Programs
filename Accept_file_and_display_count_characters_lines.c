#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
 FILE *fp1;
 char ch;
 int c1=0,c2=0;
 fp1=fopen("student.text","r");
 if(fp1==NULL)
 {
  printf("\n file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
  ch=fgetc(fp1);
  if(isalpha(ch))
    c1++;
  else if(ch=='\n')
   c2++;
  }
  printf("\n count character=%d",c1);
  printf("\n count lines=%d",c2);
  fclose(fp1);
}
