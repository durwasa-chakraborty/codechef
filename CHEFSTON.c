/*
    1 ≤ Test cases ≤ 5
    1 ≤ kind_of_stones ≤ 100000
    1 ≤ free_minutes ≤ 10000000000
    1 ≤ a[0][0],a[1][0] ≤ 10000000000
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int chance;
    unsigned long long int max;
    unsigned long long int i;
    unsigned long long int a[2][100001];
    unsigned long long int kind_of_stones;
    unsigned long long int free_minutes;
    scanf("%u",&chance);
    while(chance--)
    {
        scanf("%llu",&kind_of_stones);
        scanf("%llu",&free_minutes);
        for(i=0;i<kind_of_stones;i++)
        {
            scanf("%llu",&a[0][i]);
            if (a[0][i]!=0)
            {
                  a[0][i]=(free_minutes)/a[0][i];                
            }
            else
            {
                a[0][i]=0;
            }
          
        }
        for (i = 0; i <kind_of_stones; i++)
        {
            scanf("%llu",&a[1][i]);
        }
        for(i=0;i<kind_of_stones;i++)
        {
            a[1][i]=a[1][i]*a[0][i];
        }
        while(kind_of_stones--)
        {
            if (max<a[1][kind_of_stones])
            {
                max=a[1][kind_of_stones];
            }
        }
        printf("%llu\n",max);
        max=0;
    }
    return 0;
}