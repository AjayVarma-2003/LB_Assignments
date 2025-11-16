# include <stdio.h>
# include <stdlib.h>

int FindMax(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    iMax = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &(iPtr[iCnt]));
    }

    iRet = FindMax(iPtr, iSize);
    printf("Largest number is : %d \n", iRet);

    free(iPtr);

    return 0;
}