/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
long int pow_function(long int radix,long int base);
#define gc getchar_unlocked
long int get_i() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
 
int main(int argc, char const *argv[])
{
    int test=1;
    while(test--)
    {
        long int n = get_i();
        long int i;
        long int j;
        long int a[n];
        long long int temp=0;
        for(i=0;i<n;i++)
            a[i]=get_i();
 
        int flag=0;
        int x=0;
 
        for(i=0;i<n;i++)
        {
            temp=a[i];
            while(a[i]%5==0||a[i]%10==0)
            {
               
                if(a[i]%10==0)
                {
                    a[i]=a[i]/10;
                    continue;
                }
                 if(a[i]%5==0)
                {
                   flag=1;
                   x+=1;
                }
                a[i]=a[i]/5;
            }
            double xy = x;
            x=ceil(xy/2);
            if(flag==1)
                printf("%lld\n",temp*pow_function(4,x));
            else
                printf("%lld\n",temp);
            flag=0;
            x=0;
        }
    }
    return 0;
}
 
long int pow_function(long int base,long int radix)
{
    long int solution=1;
    while(radix--)
        solution*=base;
    return solution;
} 