
//Accept single digit number from user and print it into word
//Input : 3
//Output : Three

#include <stdio.h>

void Display (int iNo)
{
    int iCnt =0;
     if (iNo == 1)
     {
        printf("One\n");
     }
      else if (iNo == 2)
     {
        printf("Two\n");
     }
      else if (iNo == 3)
     {
        printf("Three\n");
     }
      else 
     {
        printf("Invalid number");
     }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}
