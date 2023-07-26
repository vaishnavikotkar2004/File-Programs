// Search given number from file numbers.txt using linear search
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
 FILE *fp1;
 int num,x,flag=0;
 fp1=fopen("numbers.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 printf("enter number to search");
 scanf("%d",&x);
 if(!feof(fp1))
 {
  fscanf(fp1,"%d",&num);
  if(num==x)
  {
   flag=1;
  }
 }
 if(flag==1)
    printf("\n number is found");
 else
    printf("\n number is not found");
 fclose(fp1);
}
