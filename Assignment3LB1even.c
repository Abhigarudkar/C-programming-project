#include<stdio.h>

void PrintEven(int iNo)
{
    int i =2 ;
    
    if(iNo <=0)
    {
        return ;
    }
    while (i <= iNo)
    {
        printf("%d\n",i);
        i = i +2;

    }
}

int main ()
{
    int iValue =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}