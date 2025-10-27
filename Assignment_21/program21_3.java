
import java.util.Scanner;

class Logic
{
    void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        System.out.println("Factors of given number are : ");

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program21_3
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        lObj.DisplayFactors(iValue);
    }
}