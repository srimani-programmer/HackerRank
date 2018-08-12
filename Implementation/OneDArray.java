import java.util.Scanner;

/**
 * OneDArray
 */
public class OneDArray {

    public static void main(String[] args) {

    
        int[][][] a = {{{10,20,30},{40,50,60}},{{70,80,90}}};

       for (int[][] a1 : a) {

        for(int[] a2 : a1){
            for(int a3 : a2){
                System.out.println(a3);
            }
        }

           
       }

    }
}