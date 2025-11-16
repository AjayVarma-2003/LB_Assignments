# include <stdio.h>
# include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Numbers which are multiples of 11 are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 11 == 0))
        {
            printf("%d \t", Arr[iCnt]);
        }
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