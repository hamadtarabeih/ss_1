#include <stdio.h>


int isPrime(int x)
{
    int Divisor=2;
   while((x/2) >= Divisor)
   {
     if(x%Divisor == 0)
     {
      return 0;
     }
      else
      {
       Divisor++;
      }
   }
   return 1;
}

int isStrong(int z)
{
 int y = z;  
 int sum1 = 1; 
 int sum2 = 0;
 int temp;
 while( y>0 )
 {
  temp = y % 10;
   for(int i = 1;i <= temp; i++)
   {
     sum1 = sum1*i;
   }
   sum2 = sum2+sum1;
   sum1 = 1;
   y = y/10;
 }
    if(sum2 == z)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}
