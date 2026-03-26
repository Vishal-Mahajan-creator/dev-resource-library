import java.lang.Thread;
import java.lang.Runnable;

class IntroductionToThread{
    public static void main(String[] args) {
     
        Runnable Task1=()->{System.out.println("Thread 1");};
        Runnable Task2=()->{System.out.println("Thread 2");};

        Thread t1=new Thread(Task1);
        Thread t2=new Thread(Task2);

        t1.start();
        t2.start();
    }


}