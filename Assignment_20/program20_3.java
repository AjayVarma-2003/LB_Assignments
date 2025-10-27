
import java.util.Scanner;

class Logic
{
    boolean ChkPerfect(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program20_3
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        bRet = lObj.ChkPerfect(iValue);

        if(bRet == true)
        {
            System.out.println("Number is perfect number.");
        }
        else
        {
            System.out.println("Number is not perfect number.");
        }
    }
}