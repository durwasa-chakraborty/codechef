#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
#define bdayMsg printf("Happy Birthday Udit May you have a ")
static void put_i(unsigned int n) {
#define BSIZE 1000
    int bn = 1;
    while (bn++<BSIZE-1)
      putchar(n);
}
static void put_i_single(unsigned int n)
{
  #define BSIZE_SINGLE 1
  int bn=BSIZE_SINGLE;
  while(bn++==BSIZE_SINGLE)
    putchar(n);
}
int main(int argc, char const *argv[])
{
  bdayMsg;
  put_i_single(76);
	put_i('O');
  printf("NG life...\n"); 
	return 0;
}