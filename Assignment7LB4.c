


/* write a program to find odd factorial of given number


INPUT : 5
OuTPUT : 8     (4 * 2 )

ALGORITHM

START
   
STOP
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt =0;
    int iFact =1;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {

        if(iCnt %2 !=0)
            {
                iFact = iFact * iCnt;
            }
    }
    return iFact;
}
int main ()
{
    int iValue =0;
    int iRet =0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet= OddFactorial(iValue);

    printf("Odd Factorial is %d",iRet);

    return 0;
}
