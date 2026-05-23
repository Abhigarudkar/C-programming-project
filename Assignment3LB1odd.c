#include<stdio.h>

void CheckOdd(int iNo)
{
    int i =1;

    if (iNo <=0)
    {
        return;
    }
    while (i<=iNo)
    {
      
      if (i % 2 !=0)
         {
             printf("%d\n",i);
         }
        
         i++;    
    }
    
}

int main ()
{
    int iValue =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    CheckOdd(iValue);

    return 0;
}