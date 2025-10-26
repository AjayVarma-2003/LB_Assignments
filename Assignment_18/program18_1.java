import java.util.Scanner;

class Logic
{
    boolean ChkPrime(int iNo)
    {
        int iCnt = 0, iFactors = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFactors++;
                break;
            }
        }

        if(iFactors == 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program18_1
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        bRet = lObj.ChkPrime(iValue);

        if(bRet == true)
        {
            System.out.println("Number is prime number.");
        }
        else
        {
            System.out.println("Number is not prime number.");
        }
    }
}