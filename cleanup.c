/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
#define true 1
#define false 0
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

int main(int argc, char const *argv[])
{
    int t = get_i();
    while(t--)
    {
        
        int n = get_i();
        int m = get_i();
        int i=0,j=0;
        int a[m];
        int b[n];
        int count=0;

        for(i=1;i<=m;i++)
            a[i]=get_i();

        for(i=1;i<=n;i++)
            b[i]=true;

        for(i=1;i<=m;i++)
            b[a[i]]=false;

        int index[n];
        for(i=0;i<n;i++)
            index[i]=0;

        for(i=1;i<=n;i++)
            if(b[i]==true)
                index[j++]=i;

        for(i=0;i<j;i++)
            if(i%2==0)
                printf("%d ",index[i]);

        printf("\n");

        for(i=0;i<j;i++)
            if(i%2!=0)
                printf("%d ",index[i]);

        printf("\n");

    }
    return 0;
}
