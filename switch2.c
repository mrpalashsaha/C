#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   puts ("Vacation option: ");
   puts ("A- Airfare");
   puts ("B- Hotel");
   puts ("C - Rental Car");
   scanf("%c", &a);

   switch(a)
   {
   case 'A':
        puts ("You have choice the Airfare");
        break;
    case 'a':
        puts ("You have choice the aircraft");
        break;
   case'B':
        puts ("you have selected Hotel ");
        break;
    case'b':
        puts ("you have selected hotel ");
        break;
   case 'C':
        puts("you want a rental Car ");
        break;
    case 'c':
        puts("you want a rental car ");
        break;
    default:
        puts("your choice is not valid, thanks, you may try again");

   }

    return 0;
}
