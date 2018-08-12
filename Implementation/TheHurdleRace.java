import java.util.Arrays;
import java.util.*;

class Huddle{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int maxDrinks = in.nextInt();
        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        if(maxDrinks>a[n-1]){
            System.out.println(0);
        }else{
            System.out.println(a[n-1]-maxDrinks);
        }
    }
}