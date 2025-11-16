# include <stdio.h>
# include <stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &(iPtr[iCnt]));
    }

    iRet = Difference(iPtr, iLength);
    printf("Difference between the summation of even numbers and summation of odd numbers is : %d \n", iRet);

    free(iPtr);

    return 0;
}