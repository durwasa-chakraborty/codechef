/*utter trash kuch bhi sochte rehte ho pehle paper mein algorithm to sahi se banalo idiot!!! x-( */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

static int first_input;
static int array[5];
static char second_input[250];

int gcd(int p,int q);
int transform(int *array);
void clear(int);
int main(int argc, char const *argv[])
{
    int first_input;
    
    char second_input[255];
    int array[5];
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--)
    {
        int i=4;
        scanf("%d",&first_input);
        scanf("%s",second_input);
        int n = strlen(second_input);
        n=n-1;
        if(n>4)
            {
                while(i)
                    array[i--]=second_input[n--];
                array[0]=(second_input[n]+second_input[n--]*10)%4;
                int x= transform(array);
                printf("%d\n",gcd(x,first_input));
            }
        else if(n==4)
            {
                while(i)
                    array[i--]=(second_input[n--]-48);
                array[0]=second_input[0]%4;
                int x = transform(array);
                printf("%d\n",gcd(x,first_input));
            }
        else
            {
                int x = atoi(second_input);
                printf("%d\n",gcd(first_input,x));
            }
            clear(n);
    }  
    return 0;
}

int gcd(int p,int q)
{
    while(q!=0)
    {
        int x = p%q;
        p = q;
        q = x;

    }
    return p;
}

int transform(int *array)
{
    int x;
    int i;
    int k=4;
    for(i=0;i<5;i++)
        x=x+pow(10,i)* (array[k--]);
    return x;    
}
void clear(int length)
{
     first_input=0;
      array[5]=0;
      while(length--)
        second_input[length]='\0';
}