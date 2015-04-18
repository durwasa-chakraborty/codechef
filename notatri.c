#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
int compare(void const *p,void const *q);
static int get_i()
{
    char c = gc();
    while(c<'0'&&c>'9')
        c=gc();
    int ret=0;
    while(c>='0'&&c<='9')
    {
        ret=ret * 10+c-'0';
        c=gc();
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int t;
    t=get_i();
    while(t)
    {
        
        int count=0;
        int i,j;
        int array[t];
        for(i=0;i<t;i++)
            array[i]=get_i();
        qsort(array,t,sizeof(int),compare);
        for(i=t-1;i>=2;i--)
        {
            int left=0;
            int right=i-1;
            while(left<right)
            {
                if(array[left]+array[right]<array[i])
                {
                    count+=right-left;
                    left++;
                }
                else
                    right--;

            }
        }
        printf("%d\n",count );
        t=get_i();
    }

    return 0;
}

int compare(void const *p,void const *q)
{
    return *(int*)p-*(int*)q;
}