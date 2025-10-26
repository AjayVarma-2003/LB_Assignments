# include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit >= 3 && iDigit <= 7)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("The count of numbers in range of 3 to 7 in the number is : %d \n", iRet);

    return 0;
}