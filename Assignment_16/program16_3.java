
import java.util.Scanner;

class Logic
{
    int CalculateFact(int iNo)
    {
        int iCnt = 0, iFact = 1;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
    }
}

class program16_3
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.CalculateFact(iValue);

        System.out.println("Factorial of number is : " + iRet);
    }
}