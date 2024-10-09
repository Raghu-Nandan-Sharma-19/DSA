package basics;

public class Strings {
    public static void main(String[] args) {
        String name = "Raghu Nandan";
        System.out.println(name);
        System.out.println(name + " length is: " + name.length());
        System.out.println(name.charAt(3));
        System.out.println(name.substring(0, 3));
        String lastName = "Sharma";
        String fullName = name + " " + lastName;
        System.out.println(fullName);
        boolean result = name.equals(fullName);
        System.out.println(result);
    }
}
