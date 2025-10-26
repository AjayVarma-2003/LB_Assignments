# include <stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid range \n");
        return iSum;
    }

    if(iNo1 < 0 || iNo2 < 0)
    {
        printf("Invalid range \n");
        return iSum;
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d \n", iRet);

    return 0;
}