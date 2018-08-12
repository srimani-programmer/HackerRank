import java.util.Arrays;
import java.util.Scanner;

class Sol{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int count = 0;

        for(int i=0;i<=n-2;i++){
            int diff = Math.abs(a[i] - a[i+1]);
            if(diff<=1){
                    count++;
            }
        }
        System.out.println(count);
    }
}