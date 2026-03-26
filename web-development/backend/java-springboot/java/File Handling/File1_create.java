import java.io.File;
import java.io.IOException;

public class File1_create {
    public static void main(String[] args) throws IOException {
        File obj = new File("file1.txt");
        
        if (obj.createNewFile()) {
            System.out.println("File is created: " + obj.getName());
           
        } else {
            System.out.println("File already exists!");
        }
    }
}
