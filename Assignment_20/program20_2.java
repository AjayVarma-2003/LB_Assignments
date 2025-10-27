
import java.util.Scanner;

class Logic
{
    void PrintReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program20_2
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        lObj.PrintReverse(iValue);
    }
}