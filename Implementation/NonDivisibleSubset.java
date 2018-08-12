import java.util.Scanner;

class Subset{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i!=j){
                    int result = a[i] + a[j];
                if(result%k == 0){
                    count++;
                }
                }
            }
        }

        System.out.println(count);
    }
}