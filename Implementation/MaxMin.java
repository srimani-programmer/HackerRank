import java.util.Arrays;
import java.util.Scanner;

class Maximium{
   static int[ ] a;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        a = new int[n];
        int count = in.nextInt();
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int diff = a[n-1] - a[0];
        for(int i=0;i<a.length-count;i++){
            int maxi = max(i,count);
            int mini = min(i,count);
            int sub = a[maxi] - a[mini];
            if(sub<diff){
                diff = sub;
            } 
        }
        System.out.println(diff);
    }
    public static int max(int i,int count){
        
        return count+i-1;
    }

    public static int min(int i,int count){

        return i;
    }
}