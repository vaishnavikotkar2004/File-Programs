// binary search...
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
 FILE *fp1;
 int n,i=0,x,a[100],flag=0,num;
 int search(int a[100],int n,int x);
 fp1=fopen("numbers.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
   fscanf(fp1,"%d",&num);
   a[i++]=num;
 }
 n=i;
 printf("enter number to search");
 scanf("%d",&x);
 flag=search(a,n,x);
 if(flag==1)
   printf("number is found");
 else
   printf("number is not found");
  fclose(fp1);
}
int search(int a[100],int n,int x)
{
 int top,bottom,mid,flag=0;
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(x==a[mid])
  {
    flag=1;
    break;
  }
  if(x>a[mid])
    top=mid+1;
  else
    bottom=mid-1;
 }
 return flag;
}
