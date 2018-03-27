#include <stdio.h>
#include <conio.h>
void main()
{
int s1, s2, s3, s4, s5, sum, total = 500;
float per;

// English
printf("English : ");
scanf("%d",&s1);

// Maths
printf("Maths : ");
scanf("%d",&s2);

// Physics
printf("Physics : ");
scanf("%d",&s3);

// Chemistry
printf("Chemistry : ");
scanf("%d",&s4);

// Biology
printf("Biology : ");
scanf("%d",&s5);

sum = s1+s2+s3+s4+s5;
printf("\nsum = %d",sum);

per = (sum*100)/total;
printf("\nPercentage = %f",per);

if(per < 30)
{
printf("\nFailed");
}
else {
printf("\nPassed");
}
getch();
}
