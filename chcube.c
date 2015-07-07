/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(int argc, char const *argv[])
{
    int t = get_i();


    while(t--)
    {
        char *a;
        int array[6];

        int i=0;
        int j=0;
        int solution=0;
        int count=0;
        a = (char*)malloc(sizeof(char)* 150);
        scanf("%150[^\n]",a);
        char* split;
        for(i=0;i<6;i++)
            array[i]
        split = strtok(a," ");
        while(count<6)
        {
            array[split]++;
            count++;
        }

        
    }
}