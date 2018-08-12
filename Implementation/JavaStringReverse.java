import java.util.Scanner;

class Reverse{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        char[] a = s.toCharArray();

        int count = 0;
        int len = s.length();

        for(int i=0;i<len;i++){
                if(a[i] == a[len-i-1]){
                    if(i == len-i-1){
                        break;
                    }
                }else{
                    count++;
                }
        }
        if(count == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}