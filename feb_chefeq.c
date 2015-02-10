/*so the things that we have learnt from this program is the fact during looping constructs are involved please paper mein trace karo hoshiyari mat 
dikhao bohot bade jodha nahi hogaye ho ki orally kar loge... Koi bhi Question padhke extreme conditions dimaag mein aajana chaiye like the 
4 
1 1 1 1 waala case bohot baad mein click kiya...
rest all is good try to use the tools like this :) :) good work first high score ke liye haardik badhaiyaan
*/

#include<stdio.h>
#include<stdlib.h>

#define gc getchar_unlocked

int compare(void const*,void const*);
static unsigned int get_i()
{
    char c=gc();
    while(c<'0'||c>'9')
        c=gc();
    unsigned int ret=0;
    while(c>='0'&&c<='9')
    {
        ret=ret*10+c-48;
        c=gc();
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int test_Cases;
    test_Cases=get_i();
    while(test_Cases--)
    {
        unsigned int number=0;
        unsigned int i,j;
        int flag=0;
        unsigned int dc=0,max_index=0;
        int count=0;
        number=get_i();
        unsigned int array[number];
        for(i=0;i<number;i++)
            array[i]=get_i();
        qsort(array,number,sizeof(int),compare);
        for(i=1;i<number;i++)
        {
            while((array[i]==array[i-1])&&(i<number))
            {
                max_index++;
                if(dc<max_index)
                    dc=max_index;                
                i++;
            }
            max_index=0;

        }
        for(i=1;i<number;i++)
        {
            if(array[i]!=array[i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",0);
        else
            printf("%d\n",(number-(dc+1)));
        for(i=0;i<number;i++)
            array[i]=0;
        dc=0;
    }
    return 0;
}
int getmax(int *array,int number)
{
    int i;
    int max=0;
    while(number--)
    {
        if(max<array[number])
            max=array[number];
    }
    return max;
}
int compare(void const *p,void const *q)
{
    return (*(int*)p-*(int*)q);
}