///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_1.c
//  Description:        Program to print number of $ and * on screen
//  Author :            Swamit Jadhav
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
        printf("$\t");
    }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}