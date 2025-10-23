# include <stdio.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number. \n");
    }
    else if(iNo < 0)
    {
        printf("Negative Number. \n");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}