# include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum1 = 0, iSum2 = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum1 += iDigit;
        }
        else
        {
            iSum2 += iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iSum1 - iSum2;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between sum of all even digits and sum of all odd digits of number is : %d \n", iRet);

    return 0;
}