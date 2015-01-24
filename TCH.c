#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int absolute(int p);
int main(int argc, char const *argv[])
{	
    int chance=0,i=1,j=1,value=1,difference_comparator=0;
    scanf("%d",&chance);
    int player1[chance],player2[chance],difference[chance];
    int sum_player_1=0,sum_player_2=0;
    
    while(chance--)
    {
        scanf("%d",&player1[i]);
        scanf("%d",&player2[i]);
        i++;
    }
    i--;
    while(i--)
    {
       sum_player_1=sum_player_1+player1[j];
       sum_player_2=sum_player_2+player2[j];
       difference[j]=sum_player_1-sum_player_2;
       if (difference_comparator<absolute(difference[j]))
       {
         if (difference[j]<0)
         {
           value=2;
         }
         if (difference[j]>0)
         {
          value=1; 
         }
         difference_comparator=absolute(difference[j]);
       }
      j++;
    }
    printf("%d %d\n",value,difference_comparator);
    return 0;
}
int absolute(int p)
{
  return (p<0?p*-1:p);
}