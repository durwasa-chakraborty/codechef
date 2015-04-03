#include <stdio.h>
#define gc getchar_unlocked

static  long int get_i()
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
static long int calculate(long int *a,int n)
{
    int i,j=0;
    int count=0;
    long int b[n];
    for(i=1;i<=n;i++)
        b[i]=0;
    {
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i+1]!=0)
            {
                b[i]=1;
                b[i+1]=1;
            }
        }
        for(i=1;i<=n;i++)
            count=b[i]==1?count+1:count;
        return count;        
    }

}
int main(int argc, char const *argv[])
{
    int test = get_i();
    while(test--)
    {
        int n=get_i();
        long int a[n];
        int i;
        for(i=1;i<=n;i++)
            a[i]=get_i();
       printf("%ld\n",calculate(a,n));
    }
    return 0;
}