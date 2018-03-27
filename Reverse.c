#include <stdio.h>
#include <conio.h>
void main()
{
long n, a, r = 0;
printf("Enter a Number : ");
scanf("%d",&n);

while(n >= 1)
{
a = n%10;
r = r*10+a;
n = n/10;
}
printf("Reverse = %d",r);
getch();
}
