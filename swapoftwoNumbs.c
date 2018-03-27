#include <stdio.h>
#include <conio.h>
void main()
{
int a, b;
printf("Enter First Value : ");
scanf("%d",&a);
printf("Enter Second Value : ");
scanf("%d",&b);

a = a+b;
b = a-b;
a = a-b;

printf("Result : %d %d",a,b);
}
