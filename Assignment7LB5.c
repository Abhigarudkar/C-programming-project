/*


/* write a program which returns difference between Even factorial and Odd factorial of given number
INPUT : 5
OuTPUT : 8     (4 * 2 )

ALGORITHM

START
   
STOP
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt =0;
    int iEvenFact=1;
    int iOddFact=1;
    int iResult =0;

    for ( iCnt=1 ; iCnt <=iNo; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
         else
        {
            iOddFact = iOddFact * iCnt;
        }
        
        iResult = iEvenFact - iOddFact;

        
    }
    return iResult;
}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter Number \n");
    scanf("%d",iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d ",iRet);

    return 0;

}
