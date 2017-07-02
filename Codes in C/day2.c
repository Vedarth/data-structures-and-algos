#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i=0,n;
    char c,s[256];
    scanf("%d",&n);
     scanf("%c",&c);
    for(a=1;a<=n;a++)
       { i=0;

           for(b=1;b;i++)
       {
        scanf("%c",&s[i]);
       if((char)s[i]=='\n')
           break;

       }
       b=i-1;
    for(i=0;i<=b;i++)
    {if(i==0||i%2==0)
        printf("%c",s[i]);
    }
    printf(" ");
    for(i=0;i<=b;i++)
      {if(i%2==1)
          printf("%c",s[i]);

    }
    printf("\n");
       }




    return 0;
}
