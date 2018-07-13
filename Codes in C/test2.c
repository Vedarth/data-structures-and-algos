#include <stdio.h>

int main()
{
    long long int i,t;
    unsigned long double n,k,r;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {scanf("%lf",&n);
    scanf("%lf",&k);

    	if(k>n)
    	r=n;
        else
        {r=n/k;
        printf("%d\n",(int)r);
        r=n-k*(int)r;}
        printf("%.0lf\n",r);


    }
    return 0;
}
