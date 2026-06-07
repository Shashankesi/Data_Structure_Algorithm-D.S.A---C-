import java.util.Scanner;

@FunctionalInterface
interface Palindrome {
    boolean check(String str);
}

public class PalindromeLambda {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

     
        Palindrome palindrome = s -> {
            String reversed = new StringBuilder(s).reverse().toString();
            return s.equalsIgnoreCase(reversed);
        };

        if (palindrome.check(str)) {
            System.out.println(str + " is a Palindrome.");
        } else {
            System.out.println(str + " is not a Palindrome.");
        }

        sc.close();
    }
}