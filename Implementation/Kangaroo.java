import java.util.Scanner;

class Kangaroo{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int v1 = in.nextInt();
        int x2 = in.nextInt();
        int v2 = in.nextInt();
        if(x2>x1 && v2>v1){
            System.out.println("NO");
        }else{
            for(int i=0;i<10000;i++){
                x1 = x1+v1;
                x2 = x2 + v2;
                if(x1==x2){
                    System.out.println("YES");
                    System.exit(0);
                }
            }
            System.out.println("NO");
        }
        
    }
}