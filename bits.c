#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x(0);
    scanf("%d",&n);

    char s[100];
    while (n--)
    {
       scanf("%s",&s);
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    printf("%d\n",&x);
    return 0;
}
