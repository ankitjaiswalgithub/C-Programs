#include <stdio.h>
#include <conio.h>

void main()
{
int n, x, y;

printf("Enter Your Integer for Left and Right Shift : ");
scanf("%d",&n);
// printf("Enter Your Integer for Right Shift : ");
// scanf("%d",&y);

x = n;
y = n;

x<<=3;
y>>=3;

printf("\nThe left Shifted data is = %d",x);
printf("\nThe Right Shifted data is = %d",y);
getch();
}
