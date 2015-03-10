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
 
static long int array_pp[1000000];
static long int array_prime[1000000];
static void palindrome()
{
    int k=0;
    
     long int x=1;
    while(x<=1000000)
    {
        long long int rev=0;
        int p = x;
        while(p>0)
        {
            rev=(rev)*10+p%10;
            p=p/10;
        }
        if(x==rev)
            if(rev%2!=0)
            {
                array_pp[k]=rev;
                k++;
            }
       x++;
    }
}
static void prime()
{
    int k=0;
    int flag=1;
    int j=0;
    while(j<=1109)
    {
        int flag=1;
         long int x = array_pp[j];
         long int i = 3;
        while(i<x)
        {
            if(x%i==0)
            {
                flag=111;
                break;
            }
            i+=2;
        }
        if(flag==1)
        {
            array_prime[k]=array_pp[j];
            k++;
        }
        j++;
    }
    
}
int main(int argc, char const *argv[])
{
    int i=0;
    long long int a;
    palindrome();
    prime();
    a=get_i();
    if(a>98689)
        printf("1003001\n");
    else if(a==2)
        printf("2\n");
    else
        {
            for(i=0;;i++)
                {
                    if(array_prime[i]>=a)
                        break;
                }
                printf("%ld\n",array_prime[i]);
        }
    return 0;
}
 
