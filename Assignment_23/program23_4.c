# include <stdio.h>
# include <stdlib.h>

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    printf("Numbers in given range are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &(iPtr[iCnt]));
    }

    printf("Enter first number of range : \n");
    scanf("%d", &iValue1);

    printf("Enter second number of range : \n");
    scanf("%d", &iValue2);

    Range(iPtr, iLength, iValue1, iValue2);

    free(iPtr);

    return 0;
}