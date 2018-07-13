#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t,i,n,a[1001],b[1001],c[1001],k,j,suma,sumb,l,maxa,maxb,m,o,p,maxa2,maxb2,f,g,h;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
        {suma=0;
         l=0;
         sumb=0;
         maxa=0;
         maxb=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(j=0;j<n;j++)
          {
            if(j%2==0)
               {maxa=0;
                for(i=0;i<n;i++)
                {l=a[i];
                 if(l>maxa)
                   {maxa=l;
                    m=i;
                   }
                 }
                 maxb=0;
                for(i=0;i<n;i++)
                {l=b[i];
                        if(l>maxb)
                        {o=i;
                        maxb=l;}
                }
                  g=o;
                  p=b[o];
                  b[o]=0;
                  maxb2=0;
                  for(i=0;i<n;i++)
                  {
                      l=b[i];
                      if(l>maxb2)
                      h=i;
                      maxb2=l;

                  }
                  b[o]=p;
                  f=0;
                  if(maxb-maxa<=10000)
                  {
                     suma=suma+maxa;
                     a[m]=0;
                     b[m]=0;
                  }
                  if(maxb-maxa>a[o]-maxb2)
                  {
                      suma=suma+a[o];
                      a[o]=0;
                      b[o]=0;
                      f=1;
                  }
            }
            l=0;
            if(j%2==1)
             {  if(f==1)
                 maxb=maxb2;
                maxa=0;
                for(i=0;i<n;i++)
                {l=a[i];
                 if(l>maxa)
                   {maxa=l;
                    m=i;
                   }
                   }
                p=a[m];
                a[m]=0;
                maxa2=0;
                for(i=0;i<n;i++)
                {
                    l=a[i];
                    if(l>maxa2)
                    maxa2=l;
                }

                if(maxb-maxa>=b[m]-maxa2)
                {  if(f==0)
                   {sumb=sumb+maxb;
                   a[g]=0;
                   b[g]=0;}
                   if(f==1)
                    {sumb=sumb+maxb;
                    a[h]=0;
                    b[h]=0;}
                }
                if(maxb-maxa<b[m]-maxa2)
                {
                    sumb=sumb+b[m];
                    a[m]=0;
                    b[m]=0;
                }


            }
          }

            if(suma>sumb)
                printf("First\n");
            if(suma==sumb)
                printf("Tie\n");
            if(suma<sumb)
                printf("Second\n");
        printf("%d %d",suma,sumb);
        }
    return 0;
}
