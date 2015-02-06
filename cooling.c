#include <stdio.h>
#include <stdlib.h>
void clear(int*,int*,int);
int compare(void const*,void const*);
int main(int argc, char const *argv[])
{
    int test_Cases;
    int number,i;
    int pie[31];
    int rack[31];
    scanf("%d",&test_Cases);
    while(test_Cases--)
    {
        scanf("%d",&number);
        for(i=0;i<number;i++)
            scanf("%d",&pie[i]);
        for(i=0;i<number;i++)
            scanf("%d",&rack[i]);
        qsort(pie,number,sizeof(int),compare);       
        qsort(rack,number,sizeof(int),compare);
        int j=0,count=0;
        for(i=0;i<number;i++)
        {
            if(pie[j]<=rack[i])
            {
                count++;
                j++;                
            }
        }
        printf("%d\n",count);
        clear(pie,rack,number);
    }
    return 0;
}
int compare(void const* p,void const* q)
{
    return (*(int*)p-*(int*)q);
}

void clear(int *p,int *q,int n)
{
    n=n-1;
    while(n--)
    {
        p[n]=0;
        q[n]=0;
    }
    return ;
}
