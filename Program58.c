//write a program which accepts a number and a digit from user and checks whether the digit is present in input or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo, int iSearch)
{
 int iDigit = 0;
 int iCnt = 0;

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
    break;
  }
  iNo = iNo / 10;
}

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
  bool bRet = false;

  printf("Enter number:\n");
  scanf("%d",&iValue1);

 printf("Enter digit between 0 to 9:\n");
  scanf("%d",&iValue2);

  bRet = CheckDigit(iValue1,iValue2);

  if(bRet == true)
  {
    printf("%d is present in %d\n",iValue2,iValue1);
  }
  else{
    printf("%d is not present in %d",iValue2, iValue1);
  }

}