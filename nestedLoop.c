#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int column;
    int  r;
    srand ((unsigned)time(NULL));
    for (column = 0; column < 10; column ++)
    {
        r = rand();
        printf("%2d\t", r %100);
    }
    printf("\n");
    return 0;
}
###############

/* print 100 random number */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int row;
    int column;
    int  r;
    srand ((unsigned)time(NULL)); /* seed randomiser */
    for (row = 0; row < 10; row ++)
    {
     for (column = 0; column < 10; column ++)

    {
        r = rand();
        printf("%2d\t", r %100);
    }
    }
    printf("\n");
    return 0;
}
