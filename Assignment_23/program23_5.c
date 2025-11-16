# include <stdio.h>
# include <stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iProduct = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iProduct = 1;
            iProduct = iProduct * Arr[iCnt];
        }
    }

    return iProduct;
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

    iRet = Product(iPtr, iLength);
    printf("Product of all odd elements is : %d \n", iRet);

    free(iPtr);

    return 0;
}