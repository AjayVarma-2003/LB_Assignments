# include <stdio.h>

int SumNaturalNumbers(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = SumNaturalNumbers(iValue);

    printf("Sum of all numbers till number is : %d \n", iRet);

    return 0;
}