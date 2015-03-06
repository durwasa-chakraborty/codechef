#include <stdio.h>
#include <math.h>

#define gc getchar_unlocked
static long long int get_i()
{
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

static int get_i()
{
    char c = gc();
    while(c<'0'||c>'9')
        c=gc();
    long long int ret=0;
    while(c>='0'&&c<='9')
    {
        ret =ret * 10 + c - '0';
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
        long long int a=0;
        a=get_i();
        printf("%lld\n",a/2+1);
    }
    return 0;
}