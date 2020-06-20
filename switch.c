#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   printf(" choose a number in between (1,2,3): ");
   scanf("%c", &a);

   switch(a)
   {
   case '1':
    puts ("Excellent choice");
    break;
   case'2':
    puts ("Most people choice this so lol");
    break;
   case '3':
    puts("you can choice it again");
    break;
    default:
    puts("your choice is not valid, thanks, you may try again");

   }

    return 0;
}
