import java.io.*;
import java.util.Scanner;

/**
 * Class of the project Tasks
 * Developer: ivan
 */
public class Task382A
{


    public static void main(String[] args) throws IOException
    {
        Scanner in = new Scanner(System.in);
        String already = in.nextLine();
        String yetnot = in.nextLine();

        String left = already.substring(0, already.indexOf('|'));
        String right = already.substring(already.indexOf('|') + 1);

        int diff = left.length() - right.length();

        if ((yetnot.length() - Math.abs(diff)) % 2 != 0)
            System.out.println("Impossible");
        else
        {
            String sub = yetnot.substring(0, Math.abs(diff));
            yetnot = yetnot.substring(Math.abs(diff));
            if (diff > 0)
                right = right.concat(sub);
            if (diff < 0)
                left = left.concat(sub);

            System.out.println(left.concat(yetnot.substring(yetnot.length()/2))
                                + "|"
                                + right.concat(yetnot.substring(0, yetnot.length()/2)));
        }
    }
}
