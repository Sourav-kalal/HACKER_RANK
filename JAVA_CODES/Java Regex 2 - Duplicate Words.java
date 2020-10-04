/*
In this challenge, we use regular expressions (RegEx) to remove instances of words that are repeated more than once, but retain the first occurrence of any case-insensitive repeated word. For example, the words love and to are repeated in the sentence I love Love to To tO code.
Can you complete the code in the editor so it will turn I love Love to To tO code into I love to code?

*/

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class DuplicateWords {

    public static void main(String[] args) {

        String regex = "/* Write a RegEx matching repeated words here. */";
        Pattern p = Pattern.compile(regex, /* Insert the correct Pattern flag here.*/);

        Scanner in = new Scanner(System.in);
        int numSentences = Integer.parseInt(in.nextLine());

        while (numSentences-- > 0) {
            String input = in.nextLine();

            Matcher m = p.matcher(input);

            // Check for subsequences of input that match the compiled pattern
            while (m.find()) {
                input = input.replaceAll(/* The regex to replace */, /* The replacement. */);
            }

            // Prints the modified sentence.
            System.out.println(input);
        }

        in.close();
    }
}
