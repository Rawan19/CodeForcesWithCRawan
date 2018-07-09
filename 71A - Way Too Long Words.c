#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
  char *s[100];
     scanf("%d",&n);
    while (n--)
    {
       
         scanf("%s",&s);
        if (strlen(s) > 10)
        {
            
            printf("%c %d %c \n",s[0] ,strlen(s) - 2 , s[strlen(s) - 1]);
        }
        else
        {
            
            printf("%s\n",s);
        }
    }
    return 0;
}
