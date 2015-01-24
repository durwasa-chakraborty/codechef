/*Learnt a lot from this program. Firstly a successful programmer never quits the program. The Joy of getting the answer is much more
than any other. Much more than that the algorithm should be immaculate and should be error free the programming paradigm intervenes a 
lot later.

Results :: 
Instead of using a[100][100] use a[2][100] overriding the previous. factor1 factor0 variables are the most important of all the
and the ingeniuity of the process comes from these variables. Always try to reuse the variables. Variables that are used inside the 
looping constructs are quite vulnerable. Just making the same Question with factor0=j%2 makes it a tough debuggin Question.

Goal :: 
Try solving the same program with recursion or may be memoization which I think it will take you this term of your natural life.
:D :D #outOfAukat.

Great work!!!! */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][100]={0};
    int row,factor0,factor1;
    int i,j;
    int chance;
    scanf("%d",&chance);
    while(chance--)
    {
        scanf("%d",&row);
        for(j = 0; j < 100; j++)
            a[0][j] = a[1][j] = 0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<=i;j++)
            {
                factor0=i%2;
                factor1=(factor0+1)%2;
                scanf("%d",&a[factor0][j]);
                if (j==0)
                {
                    a[factor0][j]+=a[factor1][j];
                }
                else if (j==i)
                {
                    a[factor0][j]+=a[factor1][j-1];
                }
                else
                {
                    if (a[factor1][j]>a[factor1][j-1])
                    {
                        a[factor0][j]+=a[factor1][j];
                    }
                    else
                    {
                        a[factor0][j]+=a[factor1][j-1];
                    }

                }
            }
        }
        factor1=-1;
        i=0;
        while(row--)
        {
            if (a[factor0][i]>factor1)
            {
                factor1=a[factor0][i];
            }
            i++;
        }
        printf("%d\n",factor1);
    }
    return 0;
}