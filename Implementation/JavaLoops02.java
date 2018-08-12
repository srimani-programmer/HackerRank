import java.util.Scanner;

class LoopAdvance{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int res = 0;
            for(int j=1;j<=n;j++){
                 res = res + a + (b*i);
                System.out.print(res+" ");
            }

        }
    }
}