#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int arr_i;
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&a[arr_i]);
    }
    int i,j,min=1001,l;
    int k=n;
    for(;k>0;)
    {   min=1001;
        if(k>0&&l!=k)
       printf("%d\n",k);
        if(l==k)
            break;
        l=k;
        for(i=0;i<n;i++)
            {j=a[i];
             if(min>j&&j!=0)
                 min=j;
            }
        printf("%d",min);
        if(min==1001)
            break;
        for(i=0;i<n;i++)
            {
            a[i]=a[i]-min;
           if(a[i]==0)
            k--;
        }
    }
    return 0;
}
