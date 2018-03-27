#include <stdio.h>
#include <conio.h>

void main()
{
char ch;
printf("Enter Your First character of day : ");
scanf("%c",&ch);

switch (ch)
{
  case 'm':
  printf("Monday");
  break;
  case 't':
  printf("Tuesday");
  break;
  case 'w':
  printf("Wednesday");
  break;
  case 'h':
  printf("Thursday");
  break;
  case 'f':
  printf("Friday");
  break;
  case 's':
  printf("Saturday");
  break;
  case 'u':
  printf("Sunday");
  break;
  default:
  printf("Wrong Input");
  break;
}
getch();
}
