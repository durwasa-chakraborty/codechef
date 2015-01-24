#include <stdio.h>
#define gc getchar_unlocked
int get_i()
{
    char c=gc();
    while(c<'0'||c>'9')c=gc();
    int ret;
    while(c>='0'&&c<='9')
    {
        ret = ret*10+c-48;
        c=gc();
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    int test_cases;
    test_cases=get_i();
    while(test_cases--)
    {
        long long int n=0;
        n=get_i();
        if (n%2==0)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
