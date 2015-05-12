#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar_unlocked
#define MAX 10001
#define MIN -1
static int get_i()
{
    char c = gc();
    while(c<'0' || c>'9')
        c=gc();
    int ret=0;
    while(c>='0' && c<='9')
    {
        ret = ret * 10 + c-'0';
        c=gc();
    }
    return ret;
}

static int min(int x , int y)
{
    return (x>y)?x:y;
}
static int max(int x ,int y)
{
    return (x<y)?y:x;
}

int main(int argc, char const *argv[])
{
    int t=get_i();
    printf("\n");
    while(t--)
    {
        int n=get_i();
        int i;
        int max=0;
        int a[10001][2];
        
        for(i=0;i<10001;i++)
        {
            a[i][0]=MAX;
            a[i][1]=MIN;
        }
        for(i=0;i<n;i++)
        {
            int x = get_i();
            int y = get_i();
            a[x][0]=(a[x][0]>y)?y:a[x][0];
            a[x][1]=(a[x][1]<y)?y:a[x][0];
        }
        /*for(i=0;i<n;i++)
        {
            int x = get_i();
            int y = get_i();
            if(a[x][0]==10001)
            {
                a[x][0]=x;
                a[x][1]=y;             
            }
            else
            {
                a[x][0]=a[x][1];
                a[x][1]=y;
            }
            if(x>max)
                max=x;
        }*/
        /*for(i=0;i<n;i++)
            printf("%d %d\n",a[i][0],a[i][1] );*/
        int x_prev=-1;
        int y_prev=-1;
        double distance=0;
        for(i=0;i<=max;i++)
        {
            if(a[i][0]==10001)
                continue;
            if(x_prev!=-1)
            {
                distance+=sqrt((i-x_prev)*(i-x_prev)+(a[i][1]-y_prev)*(a[i][1]-y_prev));
            }
            distance+= a[i][1]-a[i][0];
            x_prev=i;
            y_prev=a[i][0];
        }
        printf("%.2lf\n",distance );
        distance=0;  
        
    }
    return 0;
}
