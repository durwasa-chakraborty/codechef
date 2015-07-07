/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
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
    long int t =get_i();
    while(t--)
    {
        long int n = get_i();
        long int c = get_i();
        long int sum=0;
        long int a[n];
        long int i=0;
        for(i=0;i<n;i++)
        {
            a[i]=get_i();
            sum+=a[i];
        }
        (sum<=c)?printf("Yes\n"):printf("No\n");
    }
    return 0;
}