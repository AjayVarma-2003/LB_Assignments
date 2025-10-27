
import java.util.Scanner;

class Logic
{
    int CalculatePower(int iBase, int iExp)
    {
        int iCnt = 0, iResult = 1;

        for(iCnt = 1; iCnt <= iExp; iCnt++)
        {
            iResult = iBase * iResult;
        }

        return iResult;
    }
}

class program19_5
{
    public static void main(String A[])
    {
        int iValue = 0, iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter power of number : ");
        iValue2 = sobj.nextInt();

        iRet = lObj.CalculatePower(iValue, iValue2);

        System.out.println("Value is : " + iRet);
    }
}