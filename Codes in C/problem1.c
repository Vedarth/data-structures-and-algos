#include<stdio.h>
void main()
{
    int i=0,j,k=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    while(i!=n)
    {
        k++;
        for(j=2;j<=k/2;j++)
        {
            if(k%j==0)
            {
                break;

            }

        }

        if(j>k/2)
        {
            if((i+1)%10==1)
                printf("%d is the %dst prime number\n",k,i+1);
            else if((i+1)%10==2)
                printf("%d is the %dnd prime number\n",k,i+1);
            else if((i+1)%10==3)
                printf("%d is the %drd prime number\n",k,i+1);
            else
                printf("%d is the %dth prime number\n",k,i+1);
            i++;
        }


    }
}
