
#include<stdio.h>

void DisplayPattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}