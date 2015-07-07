/*
    author :: Durwasa Chakraborty
    programming language :: C
    programming organization :: Codechef
*/

#include <stdio.h>
#include <stdlib.h>
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
	int t=get_i();
	while(t--)
	{
		int n = get_i();
		while(n--)
		{
			int m=get_i();
			int a[n][m][2];
			for(i=0;i<m;i++)
			{
				a[n][i][0]=get_i();
				a[n][i][1]=get_i();
			}
		}
		
	}
	return 0;
}