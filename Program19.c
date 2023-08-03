//Write a code to display the string "Jay Ganesh" for 5 times

#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)      //filter
    {
      printf("Error: Invalid input\n");
      printf("Please enter positive number\n");
      return;
    }

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
   printf("The values are: \n");
Display(iValue);
 
 
     return 0;
}