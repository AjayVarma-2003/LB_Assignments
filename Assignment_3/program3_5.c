# include <stdio.h>
typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 65 || cValue <= 86)
    {
        cValue = cValue + 32;
    }

    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is vowel. \n");
    }
    else
    {
        printf("It is not vowel. \n");
    }

    return 0;
}