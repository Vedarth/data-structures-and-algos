#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    int i,sum=0,p=3,q=0;
    while(t>sum)
    {sum=sum+p;
        p=p*2;
}

     q=p/2;
    sum=sum-q;
    for(i=sum+1;i<=q+sum+1;i++)
    {
            if(t==i)
                break;
            q--;
    }


    printf("%d",q);

    return 0;
}
