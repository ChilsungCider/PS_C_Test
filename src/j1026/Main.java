package j1026;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        new Main().j1026();
    }

    void j1026() {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        int[] arrayA = new int[count];
        int[] arrayB = new int[count];
        int total = 0;

        // total이 최솟값이 나오도록 A를 재배열 해야함.
        for(int i = 0; i < count ; i++)
            arrayA[i] = sc.nextInt();

        for(int i = 0; i < count ; i++)
            arrayB[i] = sc.nextInt();

        for(int i = 0; i < count; i++)
            total += (arrayA[i] * arrayB[i]);

        System.out.println(total);
    }
}
