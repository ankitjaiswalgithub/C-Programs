#include <stdio.h>
#include <conio.h>
void main()
{
int p, r, t, si;

printf("Enter a Principle, Rate of interest & time to find simple interest : ");
scanf("%d%d%d",&p,&r,&t);

si = (p*r*t)/100;

printf("simple interest = %d",si);
printf("\n\nThanks For Using Calculator");
getch();
}
