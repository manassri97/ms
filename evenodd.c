#include<stdio.h>
void check(int);
void main()
{
int n;
printf("enter the no. to check\n");
scanf("%d\n",&n);
if(n<0||n>100000)
printf("enter again\n")
else
check(n);
}
void check(int n)
{
if(n%2==0)
printf("even");
else
printf("odd");
}