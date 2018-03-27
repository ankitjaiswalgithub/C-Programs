#include <stdio.h>
void main()
{

int firstNumber, secondNumber, additon, substraction, multiplication, divison, modulus;

printf("\nEnter 1st Number : ");
scanf("%d",&firstNumber);

printf("\nEnter 2nd Number : ");
scanf("%d",&secondNumber);

additon= firstNumber+secondNumber;
substraction= firstNumber-secondNumber;
multiplication= firstNumber*secondNumber;
divison= firstNumber/secondNumber;
modulus = firstNumber%secondNumber;

printf("\n\nAddition is : %d\n",additon);
printf("\n\nSubstraction is %d\n",substraction);
printf("\n\nMultiplication is %d\n",multiplication);
printf("\n\nDivision is %d\n",divison);
printf("\n\nModulus is %d\n",modulus);
}
