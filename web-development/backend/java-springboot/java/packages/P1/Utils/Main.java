import Service.ValidateLogin;

public class Main {
    public static void main(String[] args) {
        ValidateLogin v1 = new ValidateLogin("user1", "pass123");
        System.out.println(v1.validateUser("user1", "pass123"));
    }
}
