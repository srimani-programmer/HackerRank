import java.math.BigInteger;
import java.util.Scanner;

class Test{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger a = in.nextBigInteger();
        boolean b = a.isProbablePrime(1);

        if(b == true)
        System.out.println("prime");
        else
            System.out.println("not prime");
    }
}