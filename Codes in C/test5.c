#include <stdio.h>
void main()
{
int a[100],i=0,r,n,j;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
r=n%2;
n=n/2;
a[i]=r;
i++;
}
for(j=i;j>=0;j--)
{
printf("%d",a[j]);
}

}
