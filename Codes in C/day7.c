#include<stdio.h>
void main()
{
 int i,j,n,k;
   printf("enter number of rows");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=1;j<=n-i-1;j++)
       printf(" ");
       for(j=0;j<=i;j++)
       {
           if(j==0||i==0)
            k=1;
           else
            k=k*(i+1-j)/j;

       printf("%d ",k);
       }
          printf("\n");
          }
}
