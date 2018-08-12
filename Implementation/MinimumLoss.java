import java.util.Arrays;
import java.util.Scanner;

class Loss{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int years = in.nextInt();
        int[] house = new int[years];

        for(int i=0;i<years;i++){
            house[i] = in.nextInt();
        }
    int diff = Math.abs(house[years-1]-house[0]);
        for(int i=0;i<house.length-1;i++){
         int sub = Math.abs(house[years-1] - house[i]);
         if(sub<diff){
             diff = sub;
         }
        }
        System.out.println(diff);
    }
}