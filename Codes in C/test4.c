#include <stdio.h>
#include<math.h>
int main()
{
  int i,j=0,n,p=0,sum=0,a[2500],l=0;
  scanf("%d",&n);
  for(i=2;i<=(int)sqrt(n);i++)
     {if(n%i==0)
     {sum=sum+i;
     a[j]=i;
     j++;
     }}
     j--;
  for(i=0;i<j;i++)
  { l=0;
      for(p=0;p<j;p++)
      if(a[p]%a[i]==0)
        l++;

        if(l==p)
        sum=sum/a[i];
  }



     printf("%d %d %d",sum);
    return 0;
}
