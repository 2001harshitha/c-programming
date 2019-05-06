#include<stdio.h>
int add(int);
int main()
{
int b,sum;
printf("enter the value of b : \n");
scanf("%d",&b);
sum=add( b);
printf("%d",sum);
}
int add(int m)
{
int sum;
sum=m+1;
return sum;
}
