package oops;

class Test {
    public int sum(int num1, int num2) {
        return num1 + num2;
    }
}

public class LearnMethods {
    private static void test() {
        System.out.println("Test called");
    }
    public static void main(String[] args) {
        test();
        Test test = new Test();
        System.out.println(test.sum(10, 20));
    }
}
