
import java.util.Scanner;

class Logic
{
    int CalculateSum(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
}

class program16_1
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;
        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.CalculateSum(iValue);

        System.out.println("Addition of numbers till given number is : " + iRet);
    }
}