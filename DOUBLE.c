#include <stdio.h>
int main(int argc, char const *argv[])
{
    int chance;
    long int num;
    scanf("%d",&chance);
    while(chance--)
    {
        scanf("%ld",&num);
        if (num%2==0)
            printf("%ld\n",num);
        else
            printf("%ld\n",num-1 );
    }
    return 0;
}


/*static int get_i() {
    int c;
    while (((c = mygetchar())) < '0') {}
    int n = c-'0';
    while (((c = mygetchar())) >= '0') {
        // if (c>'9') return n;
        n = n*10 + c - '0';
    }
    return n;
}
 
static void put_i(int n) {
#define BSIZE 16
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
 */