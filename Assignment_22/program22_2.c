# include <stdio.h>
# include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCoutnEven = 0, iCountOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCoutnEven++;
        }
        else
        {
            iCountOdd++;
        }
    }

    iDiff = iCoutnEven - iCountOdd;

    return iDiff;
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

    iRet = Frequency(iPtr, iSize);
    printf("Result is : %d \n", iRet);

    return 0;
}