#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
int get_i() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
static void put_i(unsigned int n) {
#define BSIZE 6
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
int compare(void const*, void const*);
int main(int argc, char const *argv[])
{
    int test_cases,number_of_items,sum,follow,i;
    int array[1000];
    test_cases=get_i();
    while(test_cases--)
    {
        sum=0;
        number_of_items=get_i();
        for(i=0;i<number_of_items;i++)
        {
            scanf("%d",&array[i]);
        }
        qsort(array,number_of_items,sizeof(int),compare);
        i=number_of_items-1;
        while(i>=0)
        {
            if (i-1>=0)
                sum+=array[i]+array[i-1];
            else
                sum+=array[i];
            i-=4;
        }
            
        put_i(sum);
    }
    return 0;
}
int compare(void const *p,void const *q)
{
    return (*(int*)p-*(int*)q);
} ''