#include<stdio.h>
/*int main()
{
    int t;
    int a[200]; //a will have the capacity to store 200 digits.
    int n,i,j,temp,m,x;

    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       a[0]=1;  //initializes a with only 1 digit, the digit 1.
       m=1;    // initializes digit cner

       temp = 0; //Initializes carry variable to 0.
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp; //x contains the digit by digit product
               a[j]=x%10; //Contains the digit to store in position j
               temp = x/10; //Contains the carry value that will be stored on later indexes
            }
             while(temp>0) //while loop that will store the carry value on a.
             { 
               a[m]=temp%10;
               temp = temp/10;
               m++; // increments digit cner
             }
      }
              for(i=m-1;i>=0;i--) //printing answer
              printf("%d",a[i]);
              printf("\n");
    }
    return 0;
}*/


int main(int argc, char const *argv[])
{
  int a[10];
  int first_Number=0,second_Number=0;
  scanf("%d",&first_Number);
  scanf("%d",&second_Number);
    while(second_Number)
    {
      product = (first_Number%10)*(second_Number%10);
      product1=first_Number%100 * second_Number%10
      a[i]=product%10;
      temp = product/10;
      second_Number=second_Number/10;
      i++;
    }
  }
  while(i--)
  {
    printf("%d",a[i]);
  }
  return 0;
}
