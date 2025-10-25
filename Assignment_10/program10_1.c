# include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0.0;

    dArea = (double)PI * (double)fRadius * (double)fRadius;

    return dArea;
}

// Time Complexity = O(0)

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf \n", dRet);

    return 0;
}