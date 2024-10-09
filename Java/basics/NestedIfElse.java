package basics;

import java.util.Scanner;

public class NestedIfElse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if(a >= b) {
            if(a >= c) {
                System.out.println("A is largest");
            } else {
                System.out.println("C is largest");
            }
        } else if(b >= c) {
            System.out.println("B is largest");
        } else {
            System.out.println("C is largest");
        }

        scanner.close();
    }    
}
