package oops;

class Test {
    int age;
    public void getAge(int num) {
        age = num;
    }
}

public class LearnClassesAndObjects {
    public static void main(String[] args) {
        Test test = new Test();
        test.getAge(10);

        Test test2 = new Test();
        test2.getAge(19);

        System.out.println(test.age);
        System.out.println(test2.age);
    }
    
}
