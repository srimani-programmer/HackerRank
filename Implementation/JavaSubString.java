import java.util.Scanner;

class SubString{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int low = in.nextInt();
        int high = in.nextInt();
        char[] s1 = s.toCharArray();

        for(int i=low;i<high;i++){
            System.out.print(s1[i]);
        }
    }
}