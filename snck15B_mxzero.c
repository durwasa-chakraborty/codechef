/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
int get_i() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main(int argc, char const *argv[])
{
    int t=get_i();
    while(t--)
    {
        int n = get_i();
        int a[0]=0;
        int a[1]=0;
        int temp=0;
        for(i=0;i<n;i++)
        {
            temp=get_i();
            a[temp]++;
        }
        /*
        if the number of ones are odd then 
        1 @ 1 = 0
        0 @ 1 = 1
        Thus, we need to remove one '1' at a time.

        If the number of ones are Even then, removing a 1 will not help.
        Instead removing one zero will help.
        0 @ 1 = 1
        1 @ 1 = 0
        */
        (a[1]%2==0)?printf("%d\n",a[1]):printf("%d\n",a[0]);
    }
    return 0;
}