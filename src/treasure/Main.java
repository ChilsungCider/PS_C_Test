package treasure;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        new Main().treasure();
    }

    void treasure() {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int x = 0;
        int y = 0;
        String input = sc.nextLine();
        String[] path = input.split(" ");
        for(int i = 0; i < path.length; i++) {
            if(path[i].equals("U")) y++;
            else if(path[i].equals("R")) x++;
            else if(path[i].equals("D")) y--;
            else x--;
        }

        System.out.println(x + " " + y);
    }
}
