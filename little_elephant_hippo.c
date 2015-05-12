/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
int isBad(int *a,int k,int m,int n)
{
    

}
int main(int argc, char const *argv[])
{
    int t=get_i();
    while(t--)
    {
        int n=get_i();
        int k=get_i();
        int m=get_i();
        int a[10001];
        for(i=0;i<n;i++)
            a[i]=get_i();
        isBad(a,k,m,n);

    }
    return 0;
}

