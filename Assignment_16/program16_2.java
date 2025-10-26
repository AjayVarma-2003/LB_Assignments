import java.util.Scanner;

class Logic
{
    boolean ChkEvenOdd(int iNo)
    {
        if(iNo % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program16_2
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        bRet = lObj.ChkEvenOdd(iValue);

        if(bRet == true)
        {
            System.out.println("Number is even.");
        }
        else
        {
            System.out.println("Number is odd.");
        }
    }
}