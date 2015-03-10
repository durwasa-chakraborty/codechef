#include <stdio.h>
#include <stdlib.h>

#define gc getchar_unlocked

static void put_i(int n) 
{
    #define BSIZE 16
    char buf[BSIZE];
    int bn = BSIZE-1;
    while (1) {
        buf[bn--] = '0'+(n%10);
        n = n / 10;
        if (n == 0) break;
    }
    while (bn<BSIZE-1) putchar(buf[++bn]);
    putchar('\n');
}


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
static long int __substring(char *a, int j,int k,int max)
{
    int n = k-j+1;
    int count=0;
    int zeros=0;
    int ones=0;
    int i=0;    
    for(i=1;i<=n-max;i++)
    {
        for(j=i;j<=n;j++)
        {
            a[k-j+1]=='0'?zeros++:ones++;
            (zeros>max)?count++:count;
            (ones>max)?count++:count;            
        }
        zeros=0;
        ones=0;        
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int test=get_i();
    while(test--)
    {
       /* int s =get_i();//string*/
        int n=get_i();//length of string
        int max=get_i();//maximum value of 1's or 0's
        char *a;
        a=(char*)malloc(sizeof(n));
        int i=0,j=0;
        int q=get_i();
        scanf("%s",a+1);
        for(i=1;i<=q;i++)
        {
            long int j=get_i();
            long int k=get_i();
            long int b=k-j+1;
            long int sol = __substring(a,j,k,max);//same
            put_i(((b*(b+1))/2)-sol);//solution and yeh loop ke andar hi rahega
        }
     }
     return 0;
}