#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *entrada[100];
    int length = 0;
    scanf("%s ", &entrada);
    
    length = strlen(entrada);
    int i;
    for( i = 0; i < length; i++)
    {
        if(entrada[i] == 'H' || entrada[i] == 'Q' || entrada[i] == '9')
        {
                printf("YES");
                    printf("\n");
            return 0;
        }
    }
        printf("NO");
    return 0;
}
