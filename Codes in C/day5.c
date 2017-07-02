#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,b,i,j,p=0,d=0,c=0;
    scanf("%d",&n);
    char s[n],a[n];
    for(i=0;i<=n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<n;i++)
   { for(j=0;j<i;j++)
   {if(s[i]==s[j])
       break;}
       if(i==j)
     {  a[i]=s[i];
      p++;}
   }
    for(i=0;i<=p;i++)
    {d=0;
        for(j=0;j<=n;j++)
    if(s[j]==a[i])
        d++;
        c=c + d/2;
    }
        printf("%d",c);

    return 0;
}
