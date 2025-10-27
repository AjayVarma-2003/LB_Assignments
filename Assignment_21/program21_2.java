
import java.util.Scanner;

class Logic
{
    int CountEven(int iNo)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program21_2
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.CountEven(iValue);

        System.out.println("Number of even numbers till the given number is : " + iRet);
    }
}