#include <stdio.h>
#include <stdlib.h>

char *a[100], b[100];
int main() {
scanf("%s %s",&a,&b);
   
 int i=0;
    for ( i = 0; i < strlen(a); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        printf("%d",-1);
        
    } else if (a > b) {
     printf("%d",1);
       
    } else if (a == b) {
        printf("%d",0);
    }
}
