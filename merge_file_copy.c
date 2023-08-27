#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
 char name[20][20];
 int age;
 float sal;
}e1[100],t[100];
void msort(int low,int mid,int high)
{
 int i,j,k;
 i=low;
 j=mid+1;
 k=0;
 if(i<=mid&&j<=high)
 {
  if(e1[i].age<e1[j].age)
  t[k++]=e1[i++];
  else
  t[k++]=e1[j++];
 }
 while(i<=mid)
 t[k++]=e1[i++];
 while(i<=high)
 t[k++]=e1[j++];
 for(i=low;i<=high;i++)
 e1[i]=t[i];
}
void mdiv(int low,int high)
{
 int mid;
 if(low!=high)
 {
  mid=(low+high)/2;
  mdiv(low,mid);
  mdiv(mid+1,high);
  msort(low,mid,high);
 }
}
int main()
{
 FILE *f1,*f2;
 int i=0,n;
 f1=fopen("emp.txt","r");
 f2=fopen("rbnb.txt","w");
 if(f1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(f1))
 {
  fscanf(f1,"%s%d%f",&e1[i].name,&e1[i].age,&e1[i].sal);
  i++;
 }
 n=i-1;
 mdiv(0,n-1);
 for(i=0;i<n;i++)
 {
  fprintf(f2,"\n%s\t%d\t%f",e1[i].name,e1[i].age,e1[i].sal);
 }
 fclose(f1);
 fclose(f2);
 printf("file copy successfully");
}
