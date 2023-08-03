//Sum of the digits eg 567 = 5+6+7 = 18

int SumDigits(int iNo)
{
  int iSum = 0;

  int iDigit = 0;

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iNo = iNo /10;
  }
  return iSum;
}
int main()
{
  
}