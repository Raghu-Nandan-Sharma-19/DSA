package basics;

import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();

        if(age >= 18) {
            System.out.println("Adult");
        } else {
            System.out.println("Teen");
        }

        scanner.close();
    }
}
