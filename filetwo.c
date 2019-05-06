#include<stdio.h>
int main()
{
int p,t,r,si;
printf("enter the principle: \n");
scanf("%d",&p);
printf("enter the time: \n");
scanf("%d",&t);
printf("enter the rate of interest: \n");
scanf("%d",&r);
si=(p*t*r)/100;
printf("simple interest is %d",si);
}
