
import java.util.Scanner;

class Logic
{
    void PrintDivisibleBy2And3(int iNo)
    {
        int iCnt = 0;

        System.out.println("Numbers divisible by 2 and 3 till given number are : ");

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program21_5
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        lObj.PrintDivisibleBy2And3(iValue);
    }
}