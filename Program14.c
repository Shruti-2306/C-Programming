//Write a code to display the string "Jay Ganesh" for 5 times

#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;

if(iNo < 0)   //Updater
{
  iNo = -iNo;
}

//    1       2       3
for(iCnt =1; iCnt<=iNo; iCnt++)
{
    printf("Jay Ganesh...\n");   //4
}
}
int main()         //Entry point function
{
  int iValue = 0;

  printf("Enter the frequency of Jay Ganesh statement: ");
  scanf("%d",&iValue);


  Display(iValue);
 
     return 0;
}