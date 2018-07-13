#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10000];
   int i,j,k,b,n,a=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
      {i=a;
        scanf("%s",&s[i]);
        for(i=0;s[i]!='\0';i++);
        b=i;
        for(i=a;i<=b;i+=2)
            printf("%c",s[i]);
        printf(" ");
        for(i=a+1;i<=b;i+=2)
            printf("%c",s[i]);
       if(j<b)
       printf("\n");
    a=b;
    }









    return 0;
}

