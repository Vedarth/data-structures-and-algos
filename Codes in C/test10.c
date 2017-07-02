#include <stdio.h>
long long int ways(long long int n);
void main()
{
    long long int m;
    scanf("%I64d",&m);
    long long int lo=1,hi=1e18,mid,m1,ans=-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        m1=ways(mid);
        if(m==m1)
            {
                ans=mid;
                hi=mid-1;
            }
        else if(m<m1)
            {
                hi=mid-1;
            }
        else
            lo=mid+1;
    }
    printf("%I64d",ans);
}
long long int ways(long long int n)
{
    long long int sum=n/8,i=3;
    while(n/(i*i*i))
    {
        sum=n/(i*i*i)+sum;
        i++;
    }
    return sum;
}
