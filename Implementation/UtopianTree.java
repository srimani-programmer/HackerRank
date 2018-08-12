import java.io.*;
import java.util.*;

class Tree {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ciclos = new int[n];
        for(int ci=0; ci< n; ci++){
            ciclos[ci] = in.nextInt();
            int altura = 1;
            for (int i = 0; i < ciclos[ci]; i++) {
                altura = i % 2 == 0 ? altura * 2 : altura + 1;
            }
            System.out.println(altura);
        }
    }
}