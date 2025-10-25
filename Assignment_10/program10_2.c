# include <stdio.h>

double RectArea(float fWidth, float fLength)
{
    double dArea = 0.0;

    dArea = fWidth * fLength;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width of rectangle : \n");
    scanf("%f", &fValue1);

    printf("Enter length of rectangle : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of reactangle is : %lf \n", dRet);

    return 0;
}