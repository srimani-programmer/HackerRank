import java.lang.*;

/**
 * TimeCalculation
 */
public class TimeCalculation {

    public static void main(String[] args) {
        for(int i=0;i<10000;i++){
            System.out.println("Hello,world");
            long totalTime = System.nanoTime();
            System.out.println(totalTime);
            System.exit(0);
        }
    }
}