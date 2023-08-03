//write a program which accepts a number and a digit from user and return the frequency of even digits

#include<stdio.h>
#include<stdbool.h>

int CountEvenDigit(int iNo)
{
 int iDigit = 0;
 int iCount = 0;



 if(iNo < 0)    //updater
 {
  iNo = -iNo;
 }

 while(iNo != 0)
 { 

  iDigit = iNo % 10;
  if((iDigit % 2) == 0)
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
  int iRet = false;

  printf("Enter number:\n");
  scanf("%d",&iValue);



  iRet = CountEvenDigit(iValue);



  printf("Frequency of even digits  in %d is : %d ",iValue, iRet);

  return 0;

}