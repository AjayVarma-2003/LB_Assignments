# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

int Check(int Arr[], int iLength, int iNo)
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

    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    iRet = Check(iPtr, iSize, iValue);
    printf("Index of number is : %d \n", iRet);

    free(iPtr);

    return 0;
}