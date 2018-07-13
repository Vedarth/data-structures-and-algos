#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i=0,n,e=-1;
    char c[256],s[256],d;
    scanf("%d",&n);
     scanf("%c",&d);
    for(a=1;a<=n;a++)
       { i=0;
          e++;
           for(b=1;b;i++)
       {
        scanf("%c",&s[i]);
       if((char)s[i]=='\n')
           break;

       }
       b=i-1;

    for(i=0;i<=b;i++)
    {if(i==0||i%2==0)
        c[e++]=s[i];
    }
    c[e++]=' ';
    for(i=0;i<=b;i++)
      {if(i%2==1)
        c[e++]=s[i];
      }
        c[e]='\n';
       }
for(i=0;i<=e;i++)
    printf("%c",c[i]);

printf("%d",e);

    return 0;
}
