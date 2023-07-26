// Display all numbers of numbers.txt file
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
 FILE *fp1;
 int num;
 fp1=fopen("numbers.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
  fscanf(fp1,"%d",&num);
  printf("%d\n",num);
 }
 fclose(fp1);
}
