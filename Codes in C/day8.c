#include <stdio.h>

int main()
{
  int n,t,i,j,l,sum=0,a[20],k,b[2000];
  int lcm(int,int);
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  { sum=0;
  	scanf("%d",&n);
  	for(j=0;j<n;j++)
  	{scanf("%d",&a[j]);
  	}
  		scanf("%d",&k);
  	for(j=0;j<n;j++)
    {
        for(l=1;l<=k;l++)
        {
            if(l%a[j]==0)
            {
                sum++;
            }
        }
    }
  	for(j=1;j<=n;j++)
    {for(l=1;l<=k;l++)
        if(l%lcm(a[j-1],a[j])==0)
            sum--;
    }


 printf("%d\n",sum);
  }

}
int lcm(int n1,int n2)
{
    int minMultiple;

    minMultiple = (n1>n2) ? n1 : n2;


    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            break;
        }
        ++minMultiple;
    }
    return (minMultiple);
}
