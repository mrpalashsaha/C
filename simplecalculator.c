#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numberOne;
   printf("Enter a number:");
   scanf("%d", &numberOne);

   int numberTwo;
   printf("Enter another number:");
   scanf("%d",&numberTwo);

    char operator;
   getchar();
   scanf("%c",&operator);


   switch(operator) {
   case '+':
        printf("the sum of two number is %.d + %.d = %.d\n", numberOne, numberTwo, numberOne + numberTwo);
        break;

   case'-':
        printf("the substraction of two number is %.d - %.d = %.d\n", numberOne, numberTwo, numberOne - numberTwo);
        break;
    case'*':
        printf("the multipication of two number is %.d * %.d = %.d\n", numberOne, numberTwo, numberOne * numberTwo);
        break;
   case '/':
        printf("the division of two number is %.d * %.d = %.d\n", numberOne, numberTwo, numberOne / numberTwo);
        break;

    default:
        printf("your choice is not valid, thanks, you may try again");

   }

    return 0;
}
