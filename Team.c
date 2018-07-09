#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, Petya, Vasya, Tonya, number=0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d %d",&Petya, &Vasya,& Tonya);
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    printf("%d\n",number);
    return 0;
}
