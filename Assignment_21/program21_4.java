
import java.util.Scanner;

class Logic
{
    int CountFactors(int iNo)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program21_4
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.CountFactors(iValue);

        System.out.println("Number of factors of given number is : " + iRet);
    }
}