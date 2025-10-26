
import java.util.Scanner;

class Logic
{
    int SumOfDigits(int iNo)
    {
        int iDigit = 0, iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }
}

class program17_1
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.SumOfDigits(iValue);

        System.out.println("Sum of digits in number is : " + iRet);
    }
}