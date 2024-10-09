package basics;

public class DataTypes {
    public static void main(String[] args) {
        // -128 to 127 --> 8 bits
        byte numByte = 100;
        System.out.println(numByte);

        // -32,708 to 32,767 --> 16 bits
        short numShort = 32000;
        System.out.println(numShort);

        // -2^31 to 2^31 - 1 --> 32 bits
        int numInt = 100000000;
        System.out.println(numInt);
        
        // -2^63 to 2^63 - 1 --> 64 bits
        long numLong = 1000000000;
        System.out.println(numLong);

        // upto 6-7 decimal places --> 32 bits
        float numFloat = 5.123456f;
        System.out.println(numFloat);

        // upto 15 decimal places --> 64 bits
        double numDouble = 5.123456789123456;
        System.out.println(numDouble);

        // All 256 characters
        char ch = 'c';
        System.out.println(ch);

        // true or false
        boolean fl = true;
        System.out.println(fl);
    }
}
