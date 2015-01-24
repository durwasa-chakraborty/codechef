#include <stdio.h>
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
static void put_i(unsigned int n) {
#define BSIZE 6
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

static int calculate_gcd(unsigned int p,unsigned int q)
{
   
    while(q!=0)
    {
        int x = p%q;
        p = q;
        q = x;

    }
    return p;
}

int main(int argc, char const *argv[])
{
    unsigned int test_cases;
    unsigned int right,left;
    test_cases=get_i();
    while(test_cases--)
    {
        int size_of_array=0;
        int no_of_queries=0;
        size_of_array=get_i();
        no_of_queries=get_i();
        int count=1,k;
        unsigned int array[no_of_queries+1][size_of_array];
        unsigned int array_queries[size_of_array][2];
        int i,j=1,p,q;
        for (i = 1; i <= size_of_array; ++i)
            array[0][i]=get_i();        
        for (i = 1; i <= no_of_queries; ++i)
        {
            array
            array_queries[i][0]=get_i();
            array_queries[i][1]=get_i();
        }
        while(count<=no_of_queries)
            {
                for(j=1;j<=no_of_queries;j++)
                {
                    left=array_queries[j][0];
                    right=array_queries[j][1];
                    for(k=1;k<=size_of_array;k++)
                    {
                        array[count][k]=array[0][k];
                    }
                    if (left==1)
                        {
                            k=right+1;
                            while(k!=left)
                            {
                                array[count][k-1]=array[count][k];
                                k--;
                            }
                        }
                    else
                    {
                        k=left;
                        while(k>=left&&k<=right)
                            {
                                array[count][k]=array[count][k-1];
                                k++;
                            }
                    }   
                    for(i=1;i<=size_of_array;i++)
                    {
                        p=array[count][1];
                        q=array[count][i];
                        array[count][1]=calculate_gcd(p,q);
                    }
                    put_i(array[count][1]);
                    count++;
                }      
            }
    }

    return 0;
}
