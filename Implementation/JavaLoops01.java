import java.util.Scanner;

class Loop{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for(int i=1;i<=10;i++){
            int res = i * n;
            System.out.printf("%d x %d = %d\n",n,i,res);
        }
    }
}