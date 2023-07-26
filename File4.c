// Bnary search ....
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int top,bottom,i=0,n,mid,num,flag=0,x,a[100];
 FILE *fp1;
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
  if(flag==1)
     printf("number is found");
   else
     printf("number is not found");
  fclose(fp1);
}
