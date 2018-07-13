#include<stdio.h>
void main()
{
    int i,j,k=1,l,n,f=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i!=n)
    {
        k++;
        for(j=2;j<=k/2;j++)
        {
            l=k%j;
            if(l==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {printf("%d is prime number",)
        i++;
        }

    }
}
