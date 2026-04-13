package best;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        int total = 0;
        int max = -999;
        int min = 999;
        for(int i = 0; i < count; i++) {
            int number = sc.nextInt();
            total += number;
            if(number > max) max = number;
            if(number < min) min = number;
        }

        total = total - max - min;

        System.out.printf("%.2f\n", (double)total / (count - 2));
    }
}
