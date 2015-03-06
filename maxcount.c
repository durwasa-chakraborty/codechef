/*kya bewakoofi hain yaar... ek itna sa Question karne ke liye you used 16 hours of your time... although the solution was worth it but make sure that 
from next time you don't feel shy in order to use an extra variable in this case a[] and k... sab apna hi hain ultimately answer aana chaiye... 
great work!!! 
*/

#include <stdio.h>
#define gc getchar_unlocked

int maximum(int * );

static int array[10101]={0};
static int array_new[10101]={0};

static int get_i()
{
    char c = gc();
    while(c<'0'||c>'9')
        c=gc();
     int ret=0;
    while(c>='0'&&c<='9')
    {
        ret =ret * 10 + c - '0';
        c=gc();
    }
    return ret;
}
 
int main(int argc, char const *argv[])
{
    
    
    int test=get_i();
    while(test--)
    {
        int n=0;        
        int count=0;
        int count_x=0;
        int x=0;
        int i=0,j=0,k=0;
        int a[10101];
        int num=0;

        n=get_i();
        int temp=0;
        for(i=1;i<=n;i++)
            array[i]=get_i();
        for(i=1;i<=n;i++)
            array_new[array[i]]++;
        count = maximum(array_new);
        count_x=count;
        num = maximum(array);
        for(i=0;i<=num;i++)
            a[i]=0;

        for(i=1;i<=n;i++)
        {
            if(array_new[array[i]]==count)
            {
                a[k]=array[i];
                k++;
            }
        }
        
        temp=a[0];
        for(i=0;i<k;i++)
        {
            if(temp>a[i])
                temp=a[i];
        }
        printf("%d %d\n", temp,count_x);
        for(i=0;i<=10101;i++)
            array[i]=array_new[i]=0;

    }
    
    return 0;
}
 
int maximum(int *array_new)
{
    int max=0;
    int i;
    for(i=1;i<=10101;i++)
    {
        if(array_new[i]>max)
            max=array_new[i];
    }
    return max;
}
 
