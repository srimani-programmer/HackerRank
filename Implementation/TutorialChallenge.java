import java.util.Scanner;

class Tutorial{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int ele = in.nextInt();
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }

        for(int i=0;i<n;i++){
            if(ele == a[i]){
                System.out.println(i);
            }
        }
    }
}