#include <stdio.h>
#define gc getchar_unlocked
int power_function(int p,int q);
static long int get_i()
{
    char c;
    c=gc();
    while(c<'0'||c>'9')
        c=gc();
    long int ret=0;
    while(c>='0'&&c<='9')
    {
        ret = ret * 10 + c - '0';
        c=gc();
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    int test;

    test=get_i();
    while(test--)
    {
        long int a;
        int i=0,count=0;
        a=get_i();
        while(a>=2048)
        {
            a=a-2048;
            count++;
        }
        while(a)
        {
            i=0;            
            while(a >= power_function(2,i+1))
                i++;            
            a=a-power_function(2,i);
            count++;
        }
        printf("%d\n",count);
    }   
    return 0;
}

int power_function(int x,int i)
{
    int power=1;
    while(i)
    {
        power=power * x;
        i--;
    }
    return power;
    
}