        #include <stdio.h>
        #include <math.h>

        #define gc getchar_unlocked

        static void put_i(long long int n) {
        #define BSIZE 9
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

        static long long int get_i()
        {
            char c=gc();
            while(c<'0'||c>'9')
                c=gc();
            long long int ret = 0;
            while(c>='0'&&c<='9')
            {
                ret = ret * 10 + c - '0';
                c=gc();
            }
            return ret;
        }

        static long long int array_pp[1111];
        static long long int array_prime[115];
        static void palindrome(long long int a)
        {
            int k=0;    
            long long int x=a;
            while(x<1000000)
            
{                long long int rev=0;
                long long int p = x;
                while(p>0)
                {
                    rev=rev*10+p%10;
                    p=p/10;
                }
                if(x==rev)
                    if(rev%2!=0)
                    {
                        array_pp[k]=rev;
                        k++;
                    }
               x++;
            }
        }
        static void prime()
        {
            int k=0;
            int flag=1;
            int j=0;
            while(j<=1110)
            {
                int flag=1;
                long long int x = (array_pp[j]);
                long long int i = 3;
                while(i<x)
                {
                    if(x%i==0)
                    {
                        flag=0;
                        break;
                    }
                    i+=2;
                }
                if(flag==1)
                {
                    array_prime[k]=array_pp[j];
                    k++;
                }
                j++;
            }
            
        }
        int main(int argc, char const *argv[])
        {
            long long int i=0;
            long long int a;
            a=get_i();
            palindrome(a);
            prime();
                {
                    for(i=0;i<=1110;i++)
                        {
                            if(array_prime[i]>=a)
                                break;
                        }
                        put_i(array_prime[i]);
                }
            return 0;
        }