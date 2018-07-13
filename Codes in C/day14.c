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
    c[i]=a[i]%k;
    }
    for(i=0;i<n;i++)
        {
        if(c[i]==0)
        {

            size++;
        if(size>=1)
            c[i]=k+1;
    }}
    for(i=0;i<n-1;i++)
        {l=0;
        for(j=i+1;j<n;j++)
        {if(c[i]+c[j]==k||c[i]+c[j]==0)
        {sum++;
         l=1;
         }
        }
            if(l==0&&c[i]<k)
                {sum++;
                }
    }
    printf("%d",sum);
    return 0;
}
