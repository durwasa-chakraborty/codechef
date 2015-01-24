#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int chance=0,i=1,sum=0,rem,num;
	scanf("%d",&chance);
	while(chance--)
	{
		scanf("%d",&num);
		while(num>=pow(5,i))
		{
			rem = num/pow(5,i);
			sum=rem+sum;
			i++;
		}
		printf("%d\n",sum);
		sum=0;
		i=1;
	}
	return 0;
}