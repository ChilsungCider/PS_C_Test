package  j34071;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        new Main().p34071();
    }

    void p34071() {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        int[] numbers = new int[count];
        int max = -9999;
        int max_index = 0;
        int min = 9999;
        int min_index = 0;

        for(int i = 0; i < count; i++) {
            numbers[i] = sc.nextInt();
            if(numbers[i] > max) {
                max = numbers[i];
                max_index = i;
            }
            if(numbers[i] < min) {
                min = numbers[i];
                min_index = i;
            }
        }

        if(min_index == 0)
            System.out.println("ez");
        else if(max_index == 0)
            System.out.println("hard");
        else System.out.println("?");
    }
}
