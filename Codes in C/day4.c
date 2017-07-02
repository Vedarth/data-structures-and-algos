#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned long long int prime(unsigned long long int x);
int main() {

    unsigned long long int i,j,k,p;
    int n;

    scanf("%d",&n);
    if(n<=10)
    for(j=1;j<=n;j++)
      { p=0;
        scanf("%lld",&k);
       for(i=1;prime(i)<=k;i++)
           if(k%prime(i)==0)
           p=prime(i);
           printf("%lld\n",p);
      }
    return 0;
    }
unsigned long long int prime(unsigned long long int x)
    {
   unsigned long long int a,b=0,c;
    for(a=2;b<x;a++)
        for(c=2;c<=a;c++)
    {if(a%c==0)
        if(c==a)
        b++;
        else



        break;
    }
    return (a-1);



}
