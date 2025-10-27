
import java.util.Scanner;

class Logic
{
    boolean CheckLeapYear(int iNo)
    {
        if(iNo % 4 == 0)
        {
            if(iNo % 4 == 0 && iNo % 400 == 0)
            {
                return true;
            }
            else if(iNo % 4 == 0 && iNo % 100 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
}

class program19_1
{
    public static void main(String A[])
    {
        int iYear = 0;
        boolean bRet = false;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter the year : ");
        iYear = sObj.nextInt();

        bRet = lObj.CheckLeapYear(iYear);

        if(bRet == true)
        {
            System.out.println("This year is leap year.");
        }
        else
        {
            System.out.println("This year is not leap year.");
        }
    }
}