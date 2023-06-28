#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
 FILE *fp1;
 int c1=0;
 char ch,c=argv[1][0];
 fp1=fopen(argv[0],"r");
 if(fp1==NULL)
  {
    printf("file not found");
    exit(0);
   }
   while(!feof(fp1))
   {
     ch=fgetc(fp1);
     if(ch==c)
     c1++;
    }
    fclose(fp1);
    printf("\n character count=%d",c1);
}           
