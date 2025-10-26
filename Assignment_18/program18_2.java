
import java.util.Scanner;

class Logic
{
    void PrintEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program18_2
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        lObj.PrintEvenNumbers(iValue);
    }
}