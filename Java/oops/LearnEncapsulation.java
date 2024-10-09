package oops;

class BankAccount1 {
    double balance;
    public BankAccount1(double balance) {
        this.balance = balance;
    }

    // setter method
    public void setBalance(double balance) {
        this.balance = balance;
    }

    // getter method
    public double getBalance() {
        return balance;
    }

    public void printBalance() {
        System.out.println(balance);
    }
}

public class LearnEncapsulation {
    public static void main(String[] args) {
        BankAccount1 account1 = new BankAccount1(200);
        account1.setBalance(900);
        account1.getBalance();
        account1.printBalance();
    }
}
