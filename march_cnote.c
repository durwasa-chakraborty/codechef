#include <stdio.h>
#define gc getchar_unlocked
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
int main(int argc, char const *argv[])
{
    int test=get_i();
    while(test--)
    {
        int x=get_i();
        int y=get_i();
        int k=get_i();
        int n=get_i();
        int i,j;
        int flag=0;
        int a[n][2];
        for(i=0;i<n;i++)
            for(j=0;j<2;j++)
                a[i][j]=0;

        int dif = x-y;
        for(i=0;i<n;i++)
            for(j=0;j<2;j++)
                a[i][j]=get_i();

        for(i=0;i<n&&flag==0;i++)
            flag=(a[i][0]>=dif && a[i][1]<=k)? 1 : 0;
        (flag==1)?printf("LuckyChef\n") : printf("UnluckyChef\n");
    }
    return 0;
}

