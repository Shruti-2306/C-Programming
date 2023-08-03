//Write a program which checks whether number is dividible by 3 and 5

#include<stdio.h>         //for printf and scanf
#include<stdbool.h>       //for bool data type or(typedef)
/////////////////////////////////////////////////////////////////////////
// Funtion name:    CheckDivisible
// Input:           Integer
// Output:          Boolean
// Description:     Checks whether input is divisible by 3 and 5
// Author:          Shruti Vaibhav Bartakke
// Date:            25/04/2023
// Update Date:
////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)      //checkEvenOdd() in java
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
    {
         return true;
    }
    else
    {
          return false;
    }
}


//////////////////////////////////////////////////////////////////////////
//Entry point function
/////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;   //local var to acccept input
    bool bRet = false;  //var to accept return value


    printf("Please enter number to check whether it is divisible by 3 AND 5: \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);   //function call

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5\n",iValue);
    }
    else
    {
         printf("%d is not completely divisible by 3 and 5\n",iValue);
    }

    return 0;
}








/*  
Logical Operators

AND  &&
OR   ||

Expression 1            Expression 2         &&       ||
true                     true                true     true
true                     false               flase    true
false                    flase               false     false
false                     true                false     true




*/