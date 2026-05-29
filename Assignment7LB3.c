


/* write a program to find even factorial of given number


INPUT : 5
OuTPUT : 8     (4 * 2 )

ALGORITHM

START
   
STOP
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
   int  iCnt = 0;
   int iFact =1;
    for(iCnt=1;iCnt<=iNo;iCnt++ )
    {
        if(iCnt % 2 ==0)
        {
            iFact = iFact * iCnt;

        }
    }
    return iFact;
}
int main  ()
{

    int iValue =0;
    int iRet =0;

    printf("Enter  Number \n");
    scanf("%D", &iValue);

    iRet = EvenFactorial(iValue);

    printf(" Even factorial of number  is %d", iRet);

    return 0;
}
