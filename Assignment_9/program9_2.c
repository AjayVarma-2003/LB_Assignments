# include <stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

// Time Complexity = O(0)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is : %d \n", iRet);

    return 0;
}