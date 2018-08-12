import java.util.Arrays;
import java.util.Scanner;

class Array{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int count =0;
        for(int i=0;i<n-1;i++){
            int max = a[i];
            if(max!=a[i+1]){

                count++;
            }
        }
        System.out.println(count);
    }
}