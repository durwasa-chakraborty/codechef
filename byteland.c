#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked

int compare(void const *, void const*);
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
static int function(int *a,int sum,int x)
{
    if(sum==0)
        return 1;
    int i;
    for(i=x;i>=0;i--)
    {
      if(a[i]<=sum)
      {
            if(function(a,sum-a[i],i-1))
                return 1;        
      }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int test =get_i();
    while(test--)
    {
        int n = get_i();
        int sum = get_i();
        int a[n];
        int i;
        for(i=1;i<=n;i++)
            a[i]=get_i();
        /*qsort(a,n,sizeof(int),compare);*/
        function(a,sum,i)==1?printf("Yes\n"):printf("No\n");
    }
    return 0;
}

int compare(void const *p,void const *q)
{
    return  (*(int*)p-*(int*)q);
}

