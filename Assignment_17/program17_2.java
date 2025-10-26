
import java.util.Scanner;

class Logic
{
    boolean ChkPallindrome(int iNo)
    {
        int iDigit = 0, iReverseNo = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverseNo = (iReverseNo * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iNo == iReverseNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program17_2
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        bRet = lObj.ChkPallindrome(iValue);

        if(bRet == true)
        {
            System.out.println("Given number is pallindrome.");
        }
        else
        {
            System.out.println("Given number is not a pallindrome.");
        }
    }
}