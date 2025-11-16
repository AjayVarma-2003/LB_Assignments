# include <stdio.h>
# include <stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iSum = 0, iNo = 0;

    printf("Summation of digits of each number is : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d \t", iSum);
        iSum = 0;
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &(iPtr[iCnt]));
    }

    DigitsSum(iPtr, iLength);

    free(iPtr);

    return 0;
}