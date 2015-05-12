/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/
 
#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
int compare(void const *, void const *);
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
long long int solution(int *a,int n);
int main(int argc, char *argv[])
{
    int t = get_i();
    int i=0;
    while(t--)
    {
        int n = get_i();
        int a[n];
        for(i=1;i<=n;i++)
            a[i]=get_i();
        qsort(a,n+1,sizeof(int),compare);
        printf("%lld\n",solution(a,n));
    }
    return 0;
}
 
int compare(void const *p,void const *q)
{
    return (*(int*)p-*(int*)q);
}
long long int solution(int *a,int n)
{
    long long int count=0;
    while(n!=1)
    {
        if(a[n]>=2)
            count+=a[n];
        else
        {
            count = -1;
            break;
        }
        n--;
    }
    if(n==1)
        count=(a[n]>=2)?count+2:-1;
    return count;
}