
/*
   write  a peogram which accept number from user and display below pattern    

   Input : 5
   *  *  *  *  *  #  #  #  #  #  #

Algorithm 
 
START 
   Accept Number
   print alternate  * and #
   print result 
STOP 
*/

# include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
 
   for ( iCnt =1; iCnt <=iNo ;iCnt++)
    {
      printf("* \t",iCnt);

    }
     for ( iCnt =1; iCnt <=iNo ;iCnt++)
    {
      printf("# \t",iCnt);

    }
}
int main ()
{
   int iValue = 0;

   printf( " Enter Number \n");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}