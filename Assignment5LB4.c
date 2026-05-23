
// Write a program which accept N from user and print all odd number up to N

#include<stdio.h>
void OddDisplay(int iNo)
{
    int i =1;
    while(i<=iNo)
    {
    if(i % 2 !=0)
    {
        printf("%d\n",i);
    }
     i++;
 }
}
int main ()
{
     int iValue =0;

     printf("Enter number \n");

     scanf("%d",&iValue);

     OddDisplay(iValue);

     return 0 ;
}

