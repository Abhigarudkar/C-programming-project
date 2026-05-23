
//write a program which accept number from user and print even factors of that number 

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <=0)
    {
        iNo= -iNo;
    }
    for(i =1 ; i<=iNo; i++)
    {
        if((iNo %  i == 0) && (i % 2 == 0))
        {
            printf("%d \n",i);
            i++;
        }
    }
}

int main()
{
    int ivalue =0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);
    return 0;
}