# include <stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4 == 0) || (year % 400 == 0))
    {
        printf("It is a leap year. \n");
    }
    else if((year % 4 == 0) && (year % 100 == 0))
    {
        printf("It is not a leap year. \n");
    }
    else
    {
        printf("It is not a leap year. \n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return 0;
}