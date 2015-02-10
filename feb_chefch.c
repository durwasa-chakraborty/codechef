#include<stdio.h>
#include<string.h>

void minus_function(int p);
void plus_function(int p);

static char input[100001];
static char minus[100001];
static char plus[100001];

int main(int argc, char const *argv[])
{
    int test_Cases;
    scanf("%d",&test_Cases);
    while(test_Cases--)
    {
        scanf("%s",input);
        int count2=0,count1=0,i;
        int length = strlen(input);
        minus_function(length);
        plus_function(length);
        for(i=0;i<length;i++)
        {
            if(input[i]!= minus[i])
                count1++;
        }
        for(i=0;i<length;i++)
        {
            if(input[i]!= plus[i])
                count2++;
        }
        if(count2<count1)
            printf("%d\n",count2);
        else
            printf("%d\n",count1);
    }   
    return 0;
}
void minus_function(int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(i%2==0)
            minus[i]='-';
        else
            minus[i]='+';
    }
    return;
}

void plus_function(int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(i%2==0)
            plus[i]='+';
        else
            plus[i]='-';
    }
    return;
}