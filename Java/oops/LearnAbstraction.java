package oops;

abstract class BankAccount2 {
    double balance;
    abstract void addMoney(double amount);
    abstract void canUserWithdrawMoney(double amount);

    void updateBalance(double _balance) {
        balance = _balance;
    }

    public double getBalance() {
        return balance;
    }
}

class SavingsAccount extends BankAccount2 {
    public void addMoney(double amount) {
        super.updateBalance(super.getBalance() + amount);
    }

    public void canUserWithdrawMoney(double amount) {
        if(amount <= super.getBalance()) {
            System.out.println("User can");
        } else {
            System.out.println("User cannot");
        }
    }
}

class CurrentAccount extends BankAccount2 {
    double minimumLimit = 1000.0;
    public void addMoney(double amount) {
        super.updateBalance(super.getBalance() + amount);
    }

    public void canUserWithdrawMoney(double amount) {
        if(super.getBalance() - amount >= minimumLimit) {
            System.out.println("User can");
        } else {
            System.out.println("User cannot");
        }
    }
}

public class LearnAbstraction {
    public static void main(String[] args) {
        SavingsAccount savingsAccount = new SavingsAccount();
        savingsAccount.addMoney(1000);
        savingsAccount.canUserWithdrawMoney(500);

        CurrentAccount currentAccount = new CurrentAccount();
        currentAccount.addMoney(1000);
        currentAccount.canUserWithdrawMoney(500);   
    }
}
