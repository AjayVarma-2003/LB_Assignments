
import java.util.Scanner;

class Logic
{
    int FindMax(int iNo)
    {
        int iDigit = 0, iCmp = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            iNo = iNo / 10;
            
            if(iCmp < iDigit)
            {
                iCmp = iDigit;
            }
        }

        return iCmp;
    }
}

class program20_4
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.FindMax(iValue);

        System.out.println("The max digit in the given number is : " + iRet);
    }
}