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
unsigned long long int solution( int *a,long long int n);
int main(int argc, char *argv[])
{
    int t = get_i();
    while(t--)
    {
        long long int n = get_i();
        long long int i;
        int a[n];
        for(i=0;i<n;i++)
            a[i]=get_i();
        qsort(a,n,sizeof(int),compare);
        solution(a,n)!=1?printf("%llu\n",solution(a,n)):printf("-1\n");
    }
    return 0;
}
 
int compare(void const *p,void const *q)
{
    return (*(int*)p-*(int*)q);
}
 unsigned long long int solution( int *a,long long int n)
{
    unsigned long long int count=0;
    n--;
    while(n)
    {
        if(a[n]>=2)
            count+=a[n];
        else
        {
            count = 1;
            break;
        }
        n--;
    }
    if(n==0)
        count=(a[n]>=2)?count+2:1;
    return count;
}
