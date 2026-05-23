
//Write a program which accept number from user and display its  factors in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if (iNo<=0)
    {
        iNo =-iNo;
    }

  
    for(i = iNo; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\n", i);
        }
    }
}

int main  ()
{
    int iValue = 0;

    printf("Enter the number ");
    
    scanf("%d",&iValue);
    
    FactRev(iValue);

    return 0;

}

