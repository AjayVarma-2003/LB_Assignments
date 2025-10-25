# include <stdio.h>

double FhToCs(float fTemp)
{
    double dResult = 0.0;

    dResult = (((double)fTemp - (double)32) * ((double)5/(double)9));

    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in celsius is : %lf \n", dRet);

    return 0;
}