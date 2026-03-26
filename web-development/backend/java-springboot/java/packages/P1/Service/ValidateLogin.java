package Service;

public class ValidateLogin {
    String username;
    String password;

    public ValidateLogin(String name, String password) {
        this.username = name;
        this.password = password;
    }

    public boolean validateUser(String givenUsername, String givenPassword) {
        return givenUsername.equals(this.username) && givenPassword.equals(this.password);
    }
}
