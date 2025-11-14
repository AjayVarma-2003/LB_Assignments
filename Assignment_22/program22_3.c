# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory. \n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &(iPtr[iCnt]));
    }

    bRet = Check(iPtr, iSize);
    if(bRet == true)
    {
        printf("11 is present. \n");
    }
    else
    {
        printf("11 is not present. \n");
    }

    return 0;
}