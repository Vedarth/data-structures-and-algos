#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,num=0,i,j,k;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    int a_i;
    for(a_i = 0; a_i < n; a_i++)
    {
       scanf("%d",&a[a_i]);
    }
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-1-i;j++)
            {
            if(a[j]>a[j+1])
            {k=a[j+1];
                a[j]=a[j+1];
                a[j+1]=k;
                num++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",num);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[n-1]);
    return 0;
}
