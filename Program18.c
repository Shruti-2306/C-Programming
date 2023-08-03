//Write a code to display the string "Jay Ganesh" for 5 times

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
  {
     printf("%d \n",iCnt);
  }
}
int main()         //Entry point function
{
   int iValue =0;

   printf("Enter the frequency: \n");

   scanf("%d",&iValue);
   
Display(iValue);
 
 
     return 0;
}