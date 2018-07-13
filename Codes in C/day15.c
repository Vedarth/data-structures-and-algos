#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void multiply(int a[3][3], int b[3][3])
{
    // Creating an auxiliary matrix to store elements
    // of the multiplication matrix
    int mul[3][3];
    int i,j,k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
                mul[i][j] += a[i][k]*b[k][j];
        }
    }

    // storing the muliplication resul in a[][]
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            a[i][j] = mul[i][j]%10;  // Updating our matrix
}
int power(int F[3][3], int n)
{
    int M[3][3] = {{1,2,3}, {1,0,0}, {0,1,0}};

    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    if (n==1)
        return (3*F[0][0] + 2*F[0][1]+F[0][2])%10;

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);

    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    return (3*F[0][0] + 2*F[0][1]+F[0][2])%10;
}

// Return n'th term of a series defined using below
// recurrence relation.
// f(n) is defined as
//    f(n) = f(n-1) + f(n-2) + f(n-3), n>=3
// Base Cases :
//    f(0) = 0, f(1) = 1, f(2) = 1
int findNthTerm(int n)
{
    int F[3][3] = {{1,2,3}, {1,0,0}, {0,1,0}} ;
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n==2)
        return 3;

    return power(F, n-2);
}
int main()
{   int n;
    int q;
    scanf("%d %d",&n,&q);
    char a[200][200];
    int i,j;
    int h;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {   int temp = (i+1)*(i+1)*(j+1)*(j+1)-1;
                h=findNthTerm(temp)%10;
                if(h%2==0)
                    a[i][j]='X';
                if(h%2==1)
                    a[i][j]='Y';
    }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
    }
    int total1=0;
 /*   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if()
        }
    }*/
}
