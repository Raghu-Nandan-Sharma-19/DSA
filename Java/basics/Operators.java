package basics;

public class Operators {
    public static void main(String[] args) {
        // Arithmetic --> +, -, /, *, %
        System.out.println("Arithmetic operators:");
        int num1 = 5;
        int num2 = 2;
        System.out.println(num1 + num2);
        System.out.println(num1 - num2);
        System.out.println(num1 / num2);
        System.out.println(num1 * num2);
        System.out.println(num1 % num2);
        System.out.println();
        
        // Unary --> +, -, ++, --, !
        System.out.println("Unary operators:");
        num1 = 6;
        System.out.println(+num1);
        System.out.println(-num1);
        System.out.println("num1: " + (num1++));
        System.out.println(num1);
        System.out.println("num1: " + (++num1));
        System.out.println(num1);
        System.out.println("num1: " + (num1--));
        System.out.println(num1);
        System.out.println("num1: " + (--num1));
        System.out.println(num1);

        boolean fl = true;
        System.out.println(!fl);
        System.out.println();

        // Relational --> ==, !=, >, <, >=, <=
        System.out.println("Relational operators:");
        num1 = 6;
        num2 = 7;
        boolean result = num1 == num2;
        System.out.println(result);
        result = num1 != num2;
        System.out.println(result);
        result = num1 > num2;
        System.out.println(result);
        result = num1 < num2;
        System.out.println(result);
        result = num1 >= num2;
        System.out.println(result);
        result = num1 <= num2;
        System.out.println(result);
        System.out.println();

        // Logical --> &&, ||
        System.out.println("Logical operators:");
        boolean first = true;
        boolean second = false;
        result = first && second;
        System.out.println(result);
        result = first || second;
        System.out.println(result);
        System.out.println();
        System.out.println();

        // Ternary --> condition ? first : second
        System.out.println("Ternary operators:");
        num1 = 6;
        num2 = 9;
        int num3 = num1 > num2 ? num1 : num2;
        System.out.println(num3);
    }
    
}
