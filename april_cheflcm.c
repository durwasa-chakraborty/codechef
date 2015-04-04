#include <stdio.h>
#include <math.h>

#define gc getchar_unlocked

static long long int get_i()
{
    char c=gc();
    while(c<'0'||c>'9')
        c=gc();
    long int ret = 0;
    while(c>='0'&&c<='9')
    {
        ret = ret * 10 + c - '0';
        c=gc();
    }
    
    return ret;
}


int main(int argc, char const *argv[])
{
    int test = get_i();
    while(test--)
    {
        long long int n = get_i();
        long long int sum=0;
        long long int i=0;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i;
                sum+=n/i;               
            }   
            if(i*i==n)
                sum-=i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
