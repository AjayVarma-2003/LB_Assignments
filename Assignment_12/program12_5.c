# include <stdio.h>
# include <stdbool.h>

bool IsDivisibleBy5(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = IsDivisibleBy5(iValue);

    if(bRet == true)
    {
        printf("Number is divisible by 5.\n");
    }
    else
    {
        printf("Number is not divisible by 5.\n");
    }

    return 0;
}