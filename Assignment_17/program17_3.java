import java.util.Scanner;

class Logic
{
    int FindMax(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
}

class program17_3
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter first number : ");
        iValue1 = sObj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sObj.nextInt();

        iRet = lObj.FindMax(iValue1, iValue2);

        System.out.println("Maximum number of 2 number is : " + iRet);
    }
}