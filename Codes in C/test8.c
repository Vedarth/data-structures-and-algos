#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,n;
    scanf("%d %d",&n,&k);
    unsigned long long int a[n],b,c[n];
    int sum=0,l=0,size=0;
    for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
    }
  c[0]=0;
    for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
    {b=(a[i]+a[j])%k;
     if(b!=0)
        c[i]++;
     }
   }
    for(i=0;i<n;i++)
    printf("%lld\n",c[i]);
    int min=10000;
    for(i=0;i<n;i++)
        if(min==c[i])
        sum++;
        if(min>c[i])
         min=c[i];


    size=l;
    for(i=0;i<=l-1;i++)
      {
        for(j=i+1;j<l;j++)
            if(c[i]==c[j])
            size--;
            }


    return 0;
}
