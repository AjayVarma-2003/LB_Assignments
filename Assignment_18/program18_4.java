import java.util.Scanner;

class Logic
{
    void  SumEvenOddDigits(int iNo)
    {
        int iDigit = 0, iSum1 = 0, iSum2 = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 =  iSum2 + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Addition of even digits of number is : " + iSum1);
        System.out.println("Addition of odd digits in number is : " + iSum2);
    }
}

class program18_4
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the number : ");
        iValue = sObj.nextInt();

        lObj.SumEvenOddDigits(iValue);
    }
}