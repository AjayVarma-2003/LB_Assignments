# include <stdio.h>
# include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = CountEven(iPtr, iSize);
    printf("Number of even elements is : %d \n", iRet);

    return 0;
}