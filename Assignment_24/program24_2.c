# include <stdio.h>
# include <stdlib.h>

int FindMin(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;

    iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = FindMin(iPtr, iSize);
    printf("Smallest number is : %d \n", iRet);

    free(iPtr);

    return 0;
}