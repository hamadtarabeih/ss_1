#include <stdio.h>
#include "NumClass.h"
     int HelpisPalindrome(int x , int ReverseNum )
    {
        if(x == 0)
        {
            return ReverseNum;
        }
        ReverseNum = ((ReverseNum*10) + (x%10));
        return  HelpisPalindrome((x/10) ,ReverseNum);
    }
    
     int isPalindrome(int x)
    {
        int ReverseNumber=HelpisPalindrome(x,0);
        if(ReverseNumber == x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
     
     int FindTheDigitsNum(int x) {
        
        if(x == 0)
        {
            return 0;
        }
        return 1 +  FindTheDigitsNum(x/10) ;

    }
    int Help1isArmstrong(int x ,int Digitnum)
    {
      
      if(Digitnum!=0)
     {
         Digitnum = Digitnum - 1;
         return x * Help1isArmstrong(x,Digitnum);
     }
      return  1;
   
    }
     int Help2isArmstrong(int x ,int TheNumberOffXDigits)
     {
       if(x == 0)
       {
        return 0;
       }
       return Help1isArmstrong(x%10,TheNumberOffXDigits) + Help2isArmstrong(x/10,TheNumberOffXDigits);
     }

    int isArmstrong(int x)
    {
       int NumDigits = FindTheDigitsNum (x); 
       int UnderCheck = Help2isArmstrong(x,NumDigits);
       if(UnderCheck == x)
       {
         return 1;
       } 
       else
       {
        return 0 ;
       }
    }