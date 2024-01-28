#include <stdio.h>
int isPalindrome(int x)
    {
        int Copyx=x;
        int NumOfDigits=0;
        int BuildingXFromRightToLeft=0;
        while(Copyx > 0)
        {
            NumOfDigits ++;
            Copyx = Copyx/10;
        }
        Copyx = x;
        int temp;
        int TheDigitIs = 1;
        while(Copyx > 0)
        {
            temp = Copyx%10;
            for(int i = 1; i < NumOfDigits ; i++)
            {
                TheDigitIs=TheDigitIs*10;
            }
            temp=temp*TheDigitIs;
            BuildingXFromRightToLeft = BuildingXFromRightToLeft +temp;
            NumOfDigits --;
            TheDigitIs = 1;
            Copyx=Copyx/10;
        }
        if(BuildingXFromRightToLeft == x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

int isArmstrong(int x)
{  
     int copyx = x;
     int CounterDigit = 0;
      while(copyx > 0)
      {
        CounterDigit ++;
        copyx = copyx/10;
      }
      copyx = x;
      int SumSpeicefecDigitPower =1;
      int SumAllDigits = 0;
      int Digit ;
       for(int i= copyx; i > 0 ; i = i/10)
        {
          Digit = i%10;
          for(int j = 0; j < CounterDigit ; j++)
          {
            SumSpeicefecDigitPower = SumSpeicefecDigitPower * Digit;
          }
           SumAllDigits = SumAllDigits + SumSpeicefecDigitPower;
           SumSpeicefecDigitPower=1;
        }
          if(SumAllDigits == x)
          {
            return 1;
           }
              else 
           {
              return 0;
           }           
}