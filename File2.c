// Display all cities of cities.txt file...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
 FILE *fp1;
 char s1[100];
 fp1=fopen("cities.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
  fscanf(fp1,"%s",s1);
  printf("%s\n",s1);
 }
 fclose(fp1);
}
