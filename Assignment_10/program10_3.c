# include <stdio.h>

int KMtoMeter(int iNo)
{
    int iResult = 0;

    iResult = iNo * 1000;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meters is : %d\n", iRet);

    return 0;
}