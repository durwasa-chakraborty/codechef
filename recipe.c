#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
int gcd(int a,int b)
{
    if(a>=b)    
    {
        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);
    }
    else
        return gcd(b,a);
}
static int get_i()
{
    char c = gc();
    while(c<'0'||c>'9')
        c=gc();
    int ret=0;
    while(c>='0'&&c<='9')
    {
        ret=ret*10+c-'0';
        c=gc();
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    int test=get_i();
    while(test--)
    {
        int n=get_i();
        int a[n];
        int prev=0;
        int current=0;
        int i=0;
        for(i=1;i<=n;i++)
            a[i]=get_i();
        prev=a[1];
        for(i=1;i<=n;i++)
            prev = gcd(prev,a[i]);
        for(i=1;i<=n;i++)
            printf("%d ",a[i]/prev);
        printf("\n");
    }   
    return 0;
}