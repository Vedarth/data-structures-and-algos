#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int fact(int k);
int main(){
    int n;
    scanf("%d",&n);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int i,j,k,sum=0;
    long int count=0;
    for(i=0;i<n;i++)
        {
        if(((int)s[i]-48)%2==0)
            {
             if(((int)s[i]-48)==8)
                 {count=count%1000000007+1;
                  count=count%1000000007;}
             for(j=i-1;j>=0;j--)
                 {
                 sum=10*((int)s[j]-48)+((int)s[i]-48);
                 if(sum%8==0)
                 {count=count%1000000007+1;
                  count=count%1000000007;
                  printf("%d\n",sum);
                 }


                 for(k=j-1;k>=0;k--)
                     {
                     sum=100*((int)s[k]-48)+10*((int)s[j]-48)+((int)s[i]-48);
                     if(sum%8==0)
                          {count=count%1000000007+((((k%1000000007)*(k%1000000007)-((k%1000000007)*((k-1)))/2)%1000000007)%1000000007+1)%1000000007;
                           count=count%1000000007;
                           printf("%d\n",sum);
                          }
                 }
                 }

            /* for(j=i-1;j>0;j--)
                {
                sum=100*((int)s[j-1])+10*((int)s[j])+s[i];
                if(sum%8==0)
                {count=count%1000000007+(j)%1000000007;
                 count=count%1000000007;}
            }*/
        }
    }
    printf("%ld",count%1000000007);
    return 0;
}
