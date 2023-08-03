//write a program which accepts the input from user a number and check frequency of digit 8

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

int CountDigitFrequency(int iNo)
{
  int iDigit = 0;
  int iCount = 0;

  if(iNo < 0)    ///updater
  {
    iNo = -iNo;
  }
 while(iNo != 0)
 {
  iDigit = iNo % 10;
  if(iDigit == 8)
  {
    iCount++;
  }
  iNo = iNo / 10;

 }
 return iCount;
   
}


int main()
{ 
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: \n");
  scanf("%d",&iValue);

  iRet = CountDigitFrequency(iValue);
  printf("Frequency of 8 is: %d\n",iRet);


  return 0;
}