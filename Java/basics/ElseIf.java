package basics;
import java.util.Scanner;

public class ElseIf {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int marks = scanner.nextInt();

        if(marks >= 90) {
            System.out.println("Grade A");
        } else if(marks >= 70) {
            System.out.println("Grade B");
        } else if(marks >= 50) {
            System.out.println("Grade C");
        } else if(marks >= 35) {
            System.out.println("Grade D");
        } else {
            System.out.println("Fail");
        }

        scanner.close();
    }
    
}
