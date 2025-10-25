# include <stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fResult = 0.0f;

    if(iNo1 == 0)
    {
        printf("Enter valid total marks. \n");
        return 0.0;
    }

    fResult = ((float)iNo2 / (float)iNo1) * 100.0;

    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks : \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f \n", fRet);

    return 0;
}