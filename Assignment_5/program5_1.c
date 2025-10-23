# include <stdio.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is even number. \n");
    }
    else
    {
        printf("Number is odd number. \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}