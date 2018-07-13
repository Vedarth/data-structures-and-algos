#include <stdio.h>
void main()

{
    float sum=0,n,p=1,f,q=0,c=1,a=0,b=1,i,j;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=1;j<=q;j++)
       {
           p=p*j;;
        }
        q=q+2;
        sum=(c/p)+sum;
        c=a+b;
        a=b;
        b=c;
        printf("%f %f %f %f %f\n",c,p,sum,q,p);
        }
        printf("%f",sum);

}

