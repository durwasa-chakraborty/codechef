/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
long long int get_i() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

 int main( int argc, char const *argv[])
{
    long long int t=get_i();
    while(t--)
    {
        long long int i=0;
        long long int n = get_i();
        long long int a[n];
        long long int sum=0;
        long long int current_memory=0;
        for(i=0;i<n;i++)
        {
            a[i]=get_i();
            if(a[i]>current_memory)
            {
                sum+=a[i]-current_memory;
                current_memory=a[i];

            }
            else
                current_memory=a[i];
        }
        printf("%lld\n",sum );
    }
    
    return 0;
}