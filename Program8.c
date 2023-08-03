//Write a program which accepts the marks and display the class accordingly
// 0 to 34 fail
//35 to 49 pass
//50 to 59 second class
//60 to 74  first class
//75 to 100 first class with distinction


#include<stdio.h>         //for printf and scanf
    
/////////////////////////////////////////////////////////////////////////
// Funtion name:    DisplayClass
// Input:           Float
// Output:          Void
// Description:     Checks the result
// Author:          Shruti Vaibhav Bartakke
// Date:            25/04/2023
// Update Date:
///////////////////////////////////////////////////////////////////


void DisplayClass(float fMarks)
{

    if((fMarks < 0.0f) || (fMarks > 100.00f))
    {
        printf("Invalid input\n");

    }

    if((fMarks >=0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail...\n");
    }
    else if((fMarks >=35.00f) && (fMarks <50.00f))
    {
        printf("You got pass class\n");
    }
    else if((fMarks>=50.00f)&&(fMarks<60.00f))
    {
        printf("You got second class\n");

    }
    else if((fMarks >=60.00f ) && (fMarks<75.00f))
    {
        printf("You got first class\n");
    }
    else if((fMarks >=75 ) && (fMarks<100))
    {
        printf("You got first class with distinction\n");
    }

};

//////////////////////////////////////////////////////////////////////////
//Entry point function
/////////////////////////////////////////////////////////////////////////
int main()
{
  float fValue = 0.0f;

  printf("Please enter your percentage: \n");
  scanf("%f",&fValue);

  DisplayClass(fValue);

    return 0;
}








/*  
Logical Operators

AND  &&
OR   ||

Expression 1            Expression 2         &&       ||
true                     true                true     true
true                     false               flase    true
false                    flase               false     false
false                     true                false     true




*/