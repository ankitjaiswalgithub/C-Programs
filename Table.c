#include <stdio.h>
#include <conio.h>
void main()
{
int n, t;

printf("Enter a Number : ");
scanf("%d",&n);

int i;
for(i=1; i<=10; i++)
{
t = n*i;
printf("%d * %d = %d\t\n",n,i,t);
}
}
