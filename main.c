
#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main()
{
  int FirstNumber , SocendNumber;
  printf("Enter your numbers \n");
  scanf ("%d%d" ,&FirstNumber,&SocendNumber);
  if(FirstNumber < SocendNumber)
  {
     printf("The Armstrong numbers are: ");
     for(int i = FirstNumber; i <= SocendNumber; i++)
     {
      if(isArmstrong(i) == 1)
      {
      printf(" %d " , i );
      } 
     }
     printf("\n");
     printf("The Palindromes are: ");
       for(int j = FirstNumber; j <= SocendNumber; j++)
      {
      if(isPalindrome(j) == 1)
      {
        printf(" %d " , j );
      } 
     }
     printf("\n");
     printf("The Prime are: ");
       for(int k = FirstNumber; k <= SocendNumber; k++)
      {
      if(isPrime(k) == 1)
      {
        printf(" %d " , k );
      } 
     }
     printf("\n");
     printf("The StrongNumbers are: ");
       for(int w = FirstNumber; w < SocendNumber; w++)
      {
      if(isStrong(w) == 1)
      {
        printf(" %d " , w );
      } 
     }
     printf("\n");
  }
  else
  {
    if(SocendNumber < FirstNumber)
    {
    printf("The Armstrong numbers are: ");
     for(int i1 = SocendNumber; i1 <= FirstNumber; i1++)
     {
      if(isArmstrong(i1) == 1)
      {
        printf(" %d " , i1 );
      } 
     }
     printf("\n");
     printf("The Palindromes are: ");
       for(int j1 = SocendNumber; j1 <= FirstNumber; j1++)
      {
      if(isPalindrome(j1) == 1)
      {
        printf(" %d " , j1 );
      } 
     }
     printf("\n");
     printf("The Prime are: ");
       for(int k1 = SocendNumber; k1 <= FirstNumber; k1++)
      {
      if(isPrime(k1) == 1)
      {
        printf(" %d " , k1 );
      } 
     }
     printf("\n");
     printf("The StrongNumbers are: ");
       for(int w1 = SocendNumber; w1 < FirstNumber; w1++)
      {
      if(isStrong(w1) == 1)
      {
        printf(" %d " , w1 );
      } 
     }
     printf("\n");
    }
    else
    {
        printf("The Armstrong numbers are: ");
        if(isArmstrong(FirstNumber) == 1)
        {
          printf(" %d " , FirstNumber);
        }
        printf("\n");
        printf("The Palindromes are: ");
        if(isPalindrome(FirstNumber) == 1)
        {
          printf(" %d " , FirstNumber);
        }
        printf("\n");
        printf("The Prime are: ");
        if(isPrime(FirstNumber) == 1)
        {
          printf(" %d " , FirstNumber);
        }
        printf("\n");
        printf("The StrongNumbers are: ");
        if(isStrong(FirstNumber) == 1)
        {
          printf(" %d " , FirstNumber);
        }
        printf("\n");
        
        
        

    }
  }
  return 0;
}