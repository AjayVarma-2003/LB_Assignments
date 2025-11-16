# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = Check(iPtr, iSize, iValue);
    if(bRet == true)
    {
        printf("%d is present. \n", iValue);
    }
    else
    {
        printf("%d is not present. \n", iValue);
    }

    free(iPtr);

    return 0;
}