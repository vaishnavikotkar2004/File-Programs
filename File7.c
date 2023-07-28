// binary search program using function...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct cities
{
 char cname[20];
 int stdcode;
}c1[100];
int main()
{
 FILE *fp1;
 char x[20],name[20];
 int top,bottom,mid,n,i=0,code,flag;
 int search(struct cities c1[100],int n,char x[20]);
 fp1=fopen("sortedcities.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
  fscanf(fp1,"%s%d",name,&code);
  strcpy(c1[i].cname,name);
  c1[i].stdcode=code;
  i++;
 }
 n=i;
 printf("enter city name to search");
 scanf("%s",x);
 flag=search(c1,n,x);
 if(flag==1)
    printf("STD code=%d",c1[mid].stdcode);
 else
    printf("city name not found");
 fclose(fp1);
}
int search(struct cities c1[100],int n,char x[20])
{
 int top,bottom,mid,flag=0;
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(c1[mid].cname,x)==0)
  {
     flag=1;
     break;
  }
  if(strcmp(x,c1[mid].cname)>0)
    top=mid+1;
  else
    bottom=mid-1;
 }
 return flag;
} 

