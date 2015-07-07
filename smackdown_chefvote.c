/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
#define invalid -1
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
void function(int*,int);
int main(int argc, char const *argv[])
{
    int t = get_i();
    while(t--)
    {
        int n = get_i();
        int c[n];
        int i;
        int sum=0;
        int flag=0;
        for(i=1;i<=n;i++)
        {
            c[i]=get_i();
            if(c[i]>=n)
                flag=1;
            else
                sum+=c[i];          
        }
        if(sum>n && flag==0)
            printf("%d\n",invalid );
        else if(flag==0)
            function(c,n);
        else
            printf("%d\n",invalid);
        for(i=1;i<=n;i++)
            c[i]=0;
        
    }
    return 0;
}
void function(int *c,int n)
{
    int a[n];
    int i;
    for(i=0;i<n;i++)
        a[i]=i+1;
    int j=0;
    
    for(i=1;i<=n;i++)
    {
        while(c[i]!=0)
        {
            a[j]=a[j+1];
            j=((j+1)%n);
            printf("<<<<%d>>>>\n",j );
            c[i]--;
        }
    }
      for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    

    
}

