#include <stdio.h>
static char second[300];
static int transform(int first)
{
    int p=0;
    int i=0;
    while(second[i]!='\0')
        p=(second[i++]-'0'+p*10)%first;
    return p;
}
static int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main(int argc, char const *argv[])
{
    int first;
    int test_Cases;
    scanf("%d",&test_Cases);
    while(test_Cases--)
    {
        scanf("%d %s",&first,second);
        if(first==0)
            printf("%s\n",second);
        else
            printf("%d\n",gcd(first,transform(first)));
    }
    return 0;
}
