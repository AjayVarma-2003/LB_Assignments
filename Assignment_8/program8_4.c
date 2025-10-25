# include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iCnt * iNo;

        printf("%d \t", iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Table(iValue);
    
    return 0;
}