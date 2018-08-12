import java.util.Arrays;
import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long[] a = new long[5];
        for(int i=0;i<5;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        long minValue =0,maxValue = 0;
        for(int i=0;i<4;i++){
            minValue = minValue + a[i];
        }
        for(int i=1;i<5;i++){
            maxValue = maxValue + a[i];
        }
        System.out.println(minValue +" "+maxValue);
    }
}