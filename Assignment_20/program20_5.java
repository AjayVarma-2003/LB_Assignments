
import java.util.Scanner;

class Logic
{
    int FindMin(int iNo)
    {
        int iDigit = 0, iCmp = 9;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            iNo = iNo / 10;
            
            if(iCmp > iDigit)
            {
                iCmp = iDigit;
            }
        }

        return iCmp;
    }
}

class program20_5
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        iRet = lObj.FindMin(iValue);

        System.out.println("The min digit in the given number is : " + iRet);
    }
}