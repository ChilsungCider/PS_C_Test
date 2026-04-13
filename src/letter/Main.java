package letter;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        StringBuilder reverse = new StringBuilder();

        for (int i = input.length() - 1; i >= 0; i--) {
            reverse.append(input.charAt(i));
        }

        System.out.println(reverse);
    }
}
