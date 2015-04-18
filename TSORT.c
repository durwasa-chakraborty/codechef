#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(void const *, void const*);
int main(int argc, char const *argv[])
{
    int i=0,n,p=0;
    scanf("%d",&n);
    int a[n];
    printf("%d\n", );   
    while(n--)
    {
        scanf("%d",&a[i]);
        i++;
    }
    qsort(a,i,sizeof(int),compare);
    while(i--)
    {
        printf("%d\n",a[p]);
        p++;
    }     
    return 0;
}

int compare(void const *p,void const *q)
{
    return (*(int*)p-*(int*)q);
}
