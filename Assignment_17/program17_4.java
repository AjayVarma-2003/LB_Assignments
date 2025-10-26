
import java.util.Scanner;

class Logic
{
    int FindMin(int iNo1, int iNo2, int iNo3)
    {
        if(iNo1 < iNo2 && iNo1 < iNo3)
        {
            return iNo1;
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
    }
}

class program17_4
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter first number : ");
        iValue1 = sObj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sObj.nextInt();

        System.out.println("Enter third number : ");
        iValue3 = sObj.nextInt();

        iRet = lObj.FindMin(iValue1, iValue2, iValue3);

        System.out.println("Minimum number among is : " + iRet);
    }
}