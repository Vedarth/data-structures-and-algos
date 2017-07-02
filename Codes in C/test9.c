#include<stdio.h>
void main()
{
     int a0,j=0;
    long int a[1000],i;
    for(i=100000;i<100005;i++)
        {long int sum=0;
        long int temp=i;
        while(temp)
            {
            long int r=temp%10;
            temp=temp/10;
            sum=r+10*sum;
        }
        printf("%ld\n",sum);}
       /*  if(sum==i)
             {
             int k;
             for(k=100;k<1000;k++)
                 {
                 if(i%k==0)
                     {a[j++]=i;
                     break;}
             }
         }
    }
    for(i=0;i<j;i++)
        printf("%ld ",a[i]);*/
}
