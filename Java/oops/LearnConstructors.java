package oops;

class BankAccount {
    // // Default constructor
    // double balance = 50.0;

    // public BankAccount() {
    //     System.out.println("Balance is " + balance);        
    // }
    
    // public void printHello() {
    //     System.out.println("Hello");
    // }

    // // Parameterised constructor
    double balance;
    String accountType;
    
    public BankAccount(double balance) {
        this.balance = balance;
        accountType = "savings";
    }

    public BankAccount(double balance, String accountType) {
        this.balance = balance;
        this.accountType = accountType;
    }

    public void printBalance() {
        System.out.println(balance);
    }

    public void printAccountType() {
        System.out.println(accountType);
    }
    
}

public class LearnConstructors {
    public static void main(String[] args) {
        // // Default constructor call
        // BankAccount bankAccount = new BankAccount();
        // bankAccount.printHello();

        // // Parameterised constructor call
        BankAccount accountPerson1 = new BankAccount(100.0);
        accountPerson1.printBalance();
        accountPerson1.printAccountType();

        BankAccount accountPerson2 = new BankAccount(200.0, "Current");
        accountPerson2.printBalance();
        accountPerson2.printAccountType();
    }
}
