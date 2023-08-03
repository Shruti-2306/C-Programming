//Write a program which checks whether number is even or odd.

#include<stdio.h>         //for printf and scanf
#include<stdbool.h>       //for bool data type or(typedef)
/////////////////////////////////////////////////////////////////////////
// Funtion name:    CheckEvenOdd
// Input:           Integer
// Output:          Boolean
// Description:     Checks whether input is even or odd
// Author:          Shruti Vaibhav Bartakke
// Date:            25/04/2023
// Update Date:
////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)      //checkEvenOdd() in java
{
    if((iNo % 2) == 0)
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


    printf("Please enter number to check whether it is even or odd: \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);   //function call

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
         printf("%d is Odd number\n",iValue);
    }

    return 0;
}