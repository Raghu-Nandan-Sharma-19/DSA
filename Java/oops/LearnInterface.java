package oops;

interface Animal {
    void bark();
    default void sleep() {
        System.out.println("Sleeping");
    }
}

interface Pet {
    void ownerName();
}

class Dog implements Animal, Pet {
    public void bark() {
        System.out.println("Bark!!");
    }
    public void ownerName() {
        System.out.println("Raghu");
    }
    
    public void sleep() {
        System.out.println("Dog is sleeping");
    }
}

class Cat implements Animal {
    public void bark() {
        System.out.println("Meowww");
    }
}

public class LearnInterface {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.bark();
        dog.ownerName();
        dog.sleep();

        Cat cat = new Cat();
        cat.bark();
    }
}
