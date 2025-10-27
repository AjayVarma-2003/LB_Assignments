
import java.util.Scanner;

class Logic
{
    int ProductOfDigits(int iNo)
    {
        int iDigit = 0, iProduct = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iDigit * iProduct;
            iNo = iNo / 10;
        }

        return iProduct;
    }
}

class program21_1
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.ProductOfDigits(iValue);

        System.out.println("Product of digits in number is : " + iRet);
    }
}