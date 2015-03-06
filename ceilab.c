#include <stdio.h>
#define gc getchar_unlocked
static int get_i()
{
    char c = gc();
    while(c<'0'||c>'9')
        c=gc();
    int ret=0;
    while(c>='0'&& c<='9')
    {
        ret = ret * 10 + c -48;
        c = gc();
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    int test;
    int a;
    int b;
    
    {
        a=get_i();
        b=get_i();
        if((a-b)%10==9)
            printf("%d\n",(a-b)-1);
        else
            printf("%d\n",(a-b)+1);

    }   
    return 0;
}