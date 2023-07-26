// Linear search....
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 FILE *fp1;
 char cname[20],s1[20];
 int flag=0,scode;
 fp1=fopen("city.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 printf("enter city name to search");
 scanf("%s",&s1);
 while(!feof(fp1))
 {
  fscanf(fp1,"%s%d",&cname,&scode);
  if(strcmp(cname,s1)==0)
  {
    flag=1;
    break;
  }
  }
  if(flag==1)
    printf("\n city found STD code=%d",scode);
  else
    printf("city not found");
  fclose(fp1);
}
