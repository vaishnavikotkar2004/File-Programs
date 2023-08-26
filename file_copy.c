#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *f1,*f2;
 int age;
 float sal;
 char name[20];
 f1=fopen("emp.txt","r");
 f2=fopen("rbnb.txt","w");
 if(f1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(f1))
 {
  fscanf(f1,"%s%d%f",&name,&age,&sal);
  fprintf(f2,"\n name=%s",name);
  fprintf(f2,"\n age=%d",age);
  fprintf(f2,"\n salary=%f",sal);
 }
 fclose(f1);
 fclose(f2);
 printf("copy successfully");
}
