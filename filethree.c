#include<stdio.h>
void printarray(int n,int a[n]);
void changearray(int n,int a[n]);
int main()
{
int a[5]={1,4,5,2,3},n;
printf("enter the value of n \n");
scanf("%d",&n);
printarray( n,a);
changearray(n, a);
}
void printarray(int n,int a[n])
{
int i;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void changearray(int n,int a[n])
{
int i;
for(i=0;i<n;i++)
{
a[i]=a[i+1];
printf("the new values of array are %d",a[i]);
}
}
