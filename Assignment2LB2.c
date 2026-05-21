#include<stdio.h>

void Display(int iNo)
{
    int icnt= 0;

    while (iNo > icnt)
    {
        printf("*\n");
        iNo -- ;
    }
    
}

int main ()
{
   int iValue =0;
    printf("Enter the Number \n");
    scanf("%d", &iValue);

    Display(iValue);
   
    return 0;
}