
import java.util.Scanner;

class Logic
{
    void ChkSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Positive");
        }
        else if(iNo < 0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

class program18_5
{
    public static void main(String A[])
    {
       int iValue = 0;

       Scanner sObj = new Scanner(System.in);
       Logic lObj = new Logic();

       System.out.println("Enter the number : ");
       iValue = sObj.nextInt();

       lObj.ChkSign(iValue);
    }
}