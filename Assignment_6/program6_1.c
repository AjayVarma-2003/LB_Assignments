# include <stdio.h>

int main()
{
    char cName[30];

    printf("Enter full name : \n");
    scanf("%[^\n]%*c", cName);

    printf("Your name is : %s \n", cName);

    return 0;
}

// Time complexity = O(N)