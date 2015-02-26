#include <stdio.h>
int main()
{
    long long int n,s,d,i,j;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        j= 0;
        long long int count=0;
        scanf("%lld",&n);
        scanf("%lld",&s);
        d=((n*(n+1))/2)-s;
        while(d>0)
        {
            count++;
            d=d-(n--)+1;
        }
        printf("%lld\n",count);
    }
    return 0;
}