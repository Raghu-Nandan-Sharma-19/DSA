package oops;

class Vehicle {
    private String numberOfVehicle;

    public Vehicle(String numberOfVehicle) {
        this.numberOfVehicle = numberOfVehicle;
    }

    public void honk() {
        System.out.println("Honk!!!!!!");
    }

    public void printNumberOfVehicle() {
        System.out.println(numberOfVehicle);
    }
}

class Car extends Vehicle {
    public Car(String numberOfCar) {
        super(numberOfCar);
    }
}

class Bus extends Vehicle {
    public Bus(String numberOfBus) {
        super(numberOfBus);
    }
}

public class LearnInheritance {
    public static void main(String[] args) {
        Car car = new Car("JK02AK0047");
        car.printNumberOfVehicle();
        car.honk();

        Bus bus = new Bus("JK02RA1999");
        bus.printNumberOfVehicle();
        bus.honk();
    }    
}
