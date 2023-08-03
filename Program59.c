//write a program which accepts a number and a digit from user and return the frequency of digit

#include<stdio.h>
#include<stdbool.h>

int CheckFrequency(int iNo, int iSearch)
{
 int iDigit = 0;
 int iCount = 0;

 if((iSearch < 0) || (iSearch > 9))     //filter
 {
  printf("Enter the digit in range 0 to 9\n");
  return false;
 }

 if(iNo < 0)    //updater
 {
  iNo = -iNo;
 }

 
 while(iNo != 0)
 { 

  iDigit = iNo % 10;
  if(iDigit == iSearch)
  {
    iCount++;
  }
  iNo = iNo / 10;
}
return iCount;

if(iDigit == iSearch)
{
  return true;
}
else{
  return false;
}

}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  int iRet = false;

  printf("Enter number:\n");
  scanf("%d",&iValue1);

 printf("Enter digit between 0 to 9:\n");
  scanf("%d",&iValue2);

  iRet = CheckFrequency(iValue1,iValue2);



  printf("Frequency of %d in %d is : %d ",iValue2,iValue1,iRet);

  return 0;

}