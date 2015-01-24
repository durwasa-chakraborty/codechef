#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[100001]={0};
    int test_cases;
    int i;
    while(1)
    {
        scanf("%d",&test_cases);
        if (!test_cases)
            break;
        int k = 0;
        for(i=1;i<=test_cases;i++)
            scanf("%d",&array[i]);
        for(i=1;i<=test_cases;i++)
        {
            if(array[array[i]]==i)
                k++;
            else
                break;
        }
        if(k==test_cases)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
    }
    return 0;
}
