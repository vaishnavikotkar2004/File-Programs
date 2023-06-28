#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
  FILE *fp1;
  char ch;
  int c1=0,c2=1,c3=0;
  fp1=fopen("f1.c","r");
  if(fp1==NULL)
  {
    printf("file not found");
    getc(fp1);
    exit(0);
  } 
  while(!feof(fp1))
  {
    ch=fgetc(fp1);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
      c1++;
    else if(ch=='\n')
     c2++;
    else if(ch==' '||ch=='\t')
    c3++;
   }
   printf("\n count character=%d",c1);
   printf("\n count lines=%d",c2);
   printf("\n count words=%d",c3);
  fclose(fp1);
}
