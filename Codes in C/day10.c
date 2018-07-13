#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    int s;
    int t;
    scanf("%d %d",&s,&t);
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    int apple_i;
    for(apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    int orange_i;
    for(orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int appsam=0;
    for(i=0;i<m;i++)
        {
        if(a+apple[i]>=s&&a+apple[i]<=t)
            appsam++;
    }
    int orsam=0;
    for(i=0;i<n;i++)
        {if(b+orange[i]>=s&&b+orange[i]<=t)
            orsam++;
    }
    printf("%d\n",appsam);
    printf("%d",orsam);
    return 0;
}
