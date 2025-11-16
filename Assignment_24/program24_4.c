# include <stdio.h>
# include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iCount = 0, iNo = 0;

    printf("Number which have 3 digits are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d \t", Arr[iCnt]);
        }

        iCount = 0;
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

    Display(iPtr, iLength);

    free(iPtr);

    return 0;
}