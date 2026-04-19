import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b;
        System.out.print("Enter two numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        System.out.println("Sum = " + (a + b));
    }
}