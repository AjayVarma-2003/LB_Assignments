
import java.util.Scanner;

class Logic
{
    void PrintDigits(int iNo)
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program19_4
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        lObj.PrintDigits(iValue);
    }
}