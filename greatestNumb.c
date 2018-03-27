#include <stdio.h>
#include <conio.h>
void main()
{
int a, b, c;
printf("Enter Number : ");
scanf("%d%d%d",&a,&b,&c);

if ((a>b)&&(a>c))
{
printf("\n%d is greatest\n",a);
}
else if ((b>c)&&(b>a))
{
printf("%d is greatest\n",b);
}
else
{
printf("%d is greatest\n",c);
getch();
}
}
