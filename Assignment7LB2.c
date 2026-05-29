


/*Accept amount in us dollar and return its corresponding value in Indian currency.
consider 1$ as 70 


INPUT : 10
OUTPUT : 700
ALGORITHM

START
    Aceept amount
    print 1$ = 70 rupees
    print result
STOP
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iAns=0;

    iAns = iNo * 70 ;

    return iAns;
}

int main ()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf(" Value in INR is %d",iRet);

    return 0;
}