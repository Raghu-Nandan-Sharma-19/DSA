package basics;

public class TypeConversion {
    public static void main(String[] args) {
        // Implicit conversion
        int x = 5;
        double y = x;
        System.out.println(y);

        // Explicit conversion
        double a = 10.79;
        int b = (int) a;
        System.out.println(b);
    }
    
}
