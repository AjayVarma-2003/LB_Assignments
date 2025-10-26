
import java.util.Scanner;

class Logic
{
    void PrintTable(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iCnt * iNo);
        }
    }
}

class program17_5
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        lObj.PrintTable(iValue);
    }
}