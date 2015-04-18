#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked
#define MAX 12*n
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
    int t=get_i();
    while(t--)
    {
        int c=0;
        char input[101];
        scanf("%s",input);
        int len = strlen(input);
        int n = get_i();
        int sum=0;
        int x=0;;
        int k=0;
        while(k<len)
            {
                if(input[k]=='T')
                    x+=2;
                else
                    x+=1;
                k++;                
            }
        int temp=x;
        while(x<MAX)
        {
            sum+=MAX-x;
            x+=temp;
        }
        printf("%d\n",sum);
    }    
    return 0;
}
