/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
long int get_i() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main(int argc, char const *argv[])
{
    long int particles = get_i();
    long int threshold = get_i();
    long int chambers = get_i();
    long int i=0;

    long int val=0,carry=0;

    for(i=0;i<chambers;i++)
    {
       val = particles%(threshold+1);
       carry = particles/(threshold+1);
       printf("%ld ",val );
       particles=carry;

    }


    return 0;
}