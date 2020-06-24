#include <stdio.h>
#include <stdlib.h>
void repeat (int count);

int main()
{
    int a;
    int b;
    a = 1;
    b = 5;
    puts("at first the palash was like: ");
    repeat (a);
    puts (" but then he was all:");
    repeat(b);

    return 0;
}
void repeat (int count)
{
    int x;
    for (x = 0; x < count; x ++ )
        puts("nevermore!!!!");
}
/* product function */ 

#include <stdio.h>
#include <stdlib.h>
void product (float x, float y, float z);

int main()
{
    float x, y, z;
  printf ("type three numbers, separated by space: ");
  scanf("%f %f %f", &x, &y, &z);
  product (x,y,z);

    return 0;
}
void product (float x, float y, float z)
{
    float total;
    total = x * y * z ;
    printf (" %f %f %f = %f\n", x, y, z, total);
}
