package oops;

class Vehicle1 {
    private String numberOfVehicle;

    public Vehicle1(String numberOfVehicle) {
        this.numberOfVehicle = numberOfVehicle;
    }

    public void honk() {
        System.out.println("Honk!!!!!!");
    }

    public void printNumberOfVehicle() {
        System.out.println(numberOfVehicle);
    }
}

class Car1 extends Vehicle1 {
    public Car1(String numberOfCar) {
        super(numberOfCar);
    }

    @Override
    public void honk() {
        System.out.println("Give me way!!!!");
    }
}

public class LearnPolymorphism {
    public static void main(String[] args) {
        Car1 car1 = new Car1("JK02AK0047");
        car1.printNumberOfVehicle();
        car1.honk();
    }    
}

