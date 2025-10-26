# include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMult = iDigit * iMult;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("The multiplication of digits in the number is : %d \n", iRet);

    return 0;
}