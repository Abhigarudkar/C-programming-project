
// Write a program which accept number fro user less 50 print samll,greater than 50 and less than 100 then print medium , greater than 100 print large

#include<stdio.h>

void Number(int iNo)
{
    
    if(iNo<50)
    {
        printf("Small\n");
    }
    else if (iNo >=50 && iNo <=100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
}
int main()
{
    int iValue =0;

    

    printf("Enter the number \n");

    scanf("%d",&iValue);

    Number(iValue);

    
    return 0;
}