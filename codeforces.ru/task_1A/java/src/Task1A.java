import java.util.Scanner;

/**
 * Class of the project Tasks
 * Developer: ivan
 */
public class Task1A {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        long n = 6;
        long m = 6;
        long a = 4;
        n = in.nextInt();
        m = in.nextInt();
        a = in.nextInt();

        long na = n / a;
        if (n % a != 0)
            ++na;

        long ma = m / a;
        if (m % a != 0)
            ++ma;

        long res = ma * na;
        System.out.println(res);
    }
}
