
import java.util.Scanner;

class Logic
{
    void DisplayGrade(int iNo)
    {
        if(iNo >= 50 && iNo <= 65)
        {
            System.out.println("Pass");
        }
        else if(iNo >= 66 && iNo <= 75)
        {
            System.out.println("C Grade");
        }
        else if(iNo >= 76 && iNo <= 85)
        {
            System.out.println("B Grade");
        }
        else if(iNo >= 86 && iNo <= 95)
        {
            System.out.println("A Grade");
        }
        else if(iNo >= 96 && iNo <= 100)
        {
            System.out.println("First class");
        }
        else if(iNo < 50)
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid number.");
        }
    }
}

class program19_2
{
    public static void main(String A[])
    {
        int iMarks = 0;

        Scanner sObj = new Scanner(System.in);
        Logic lObj = new Logic();

        System.out.println("Enter your marks : ");
        iMarks = sObj.nextInt();

        lObj.DisplayGrade(iMarks);
    }
}