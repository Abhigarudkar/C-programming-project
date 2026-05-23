
//write a program which accept number from user and print that number of  $ & * on screen

#include <stdio.h>

int Display(int iNo)
{
    //int iNo=0;
    int icnt =0;

    while(icnt<iNo)
    {
        printf("$ * ");
        icnt ++;
    }


}

int main ()
{
    int iValue =0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}