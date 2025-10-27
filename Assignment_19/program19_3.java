
import java.util.Scanner;

class Logic
{
    boolean CheckDivisibility(int iNo)
    {
        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program19_3
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        bRet = lObj.CheckDivisibility(iValue);

        if(bRet == true)
        {
            System.out.println("Number is divisibile by 5 and 11");
        }
        else
        {
            System.out.println("Number is not divisibile by 5 and 11");
        }
    }
}