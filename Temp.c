#include <stdio.h>
#include <conio.h>
void main()
{
float c, f;

printf("Enter temp in centrigrade : ");
scanf("%f",&c);

f = (1.8*c)+32;

printf("Temp in Fahrenheit = %f",f);
getch();
printf("\n\n\nThanks");
}
