/*
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide programming language
    Step 4: Write the program
    Step 5: Test the program
*/

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it into positive
        Perform the addition of no1 and no2
        Display the addition on console
    STOP
*/


///////////////////////////////////////////////
///
///   Required Header file
///
///////////////////////////////////////////////


#include<stdio.h>


///////////////////////////////////////////////
//  
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Atharva Kailash Dhamale
//  Date :          09/10/2025
//
///////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum=0.0f;

    if(fNo1<0.0f)           //Updater
    {
        fNo1=-fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2=-fNo2;
    }
    
    fSum=fNo1+fNo2;            //Business logic
    return fSum;
}

///////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////


int main()
{
    float fValue1=0.0f;
    float fValue2=0.0f;
    float fRet=0.0f;

    printf("Enter first number\n");
    scanf("%f",&fValue1);

    printf("Enter second number\n");
    scanf("%f",&fValue2);

    fRet=AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is:%f\n",fRet);

    return 0;
}

///////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input1 : 10.5   Input2 : 3.2    Output : 13.7
//  Input1 : -10.5  Input2 : 3.2    Output : 13.7
//  Input1 : 10.5   Input2 : -3.2   Output : 13.7
//  Input1 : -10.5  Input2 : -3.2   Output : 13.7
//
///////////////////////////////////////////////