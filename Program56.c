//write a program which accepts the input from user a number and check whether the input number contains digit 8

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool CheckDigit(int iNo)
{
  int iDigit =0 ;
  bool bFlag = false;

 while(iNo != 0)
 {
   iDigit = iNo % 10;
   if(iDigit == 8)
   {
    bFlag = true;
    break;
   }
   iNo = iNo / 10;
   
   
}
return bFlag;
}

int main()
{ 
  int iValue = 0;

  printf("Enter number: \n");
  scanf("%d",&iValue);

int bRet = FALSE;
bRet = CheckDigit(iValue);
if(bRet ==TRUE)
{
  printf("Digit 8 is present");

}
else
{
  printf("NO");

}


  return 0;
}