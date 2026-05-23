
//Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int i =0;
   
    for(i=1;i<=iNo ;i++)
    {
        if(iNo % i == 0)
            {
                printf("%d\n",i);
             }
    }
}

int main ()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    return 0;

 }